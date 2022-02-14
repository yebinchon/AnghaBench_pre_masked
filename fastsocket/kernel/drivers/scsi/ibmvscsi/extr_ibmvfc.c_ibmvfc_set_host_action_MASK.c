
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int action; } ;
typedef enum ibmvfc_host_action { ____Placeholder_ibmvfc_host_action } ibmvfc_host_action ;
__attribute__((used)) static void FUNC_0(struct ibmvfc_host *VAR_0,
       enum ibmvfc_host_action VAR_1)
{
 switch (VAR_1) {
 case 140:
  if (VAR_0->action == 138)
   VAR_0->action = VAR_1;
  break;
 case 136:
  if (VAR_0->action == 137)
   VAR_0->action = VAR_1;
  break;
 case 138:
  if (VAR_0->action == 139)
   VAR_0->action = VAR_1;
  break;
 case 134:
  switch (VAR_0->action) {
  case 138:
  case 135:
  case 129:
   VAR_0->action = VAR_1;
   break;
  default:
   break;
  };
  break;
 case 128:
  if (VAR_0->action == 140)
   VAR_0->action = VAR_1;
  break;
 case 139:
 case 130:
  switch (VAR_0->action) {
  case 131:
  case 132:
   break;
  default:
   VAR_0->action = VAR_1;
   break;
  };
  break;
 case 137:
 case 133:
 case 129:
 case 135:
 case 131:
 case 132:
 default:
  VAR_0->action = VAR_1;
  break;
 };
}
