
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int state; } ;
typedef enum ibmvfc_host_state { ____Placeholder_ibmvfc_host_state } ibmvfc_host_state ;


 int VAR_0 ;


__attribute__((used)) static int FUNC_0(struct ibmvfc_host *VAR_1,
      enum ibmvfc_host_state VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_1->state) {
 case 128:
  VAR_3 = -VAR_0;
  break;
 default:
  VAR_1->state = VAR_2;
  break;
 };

 return VAR_3;
}
