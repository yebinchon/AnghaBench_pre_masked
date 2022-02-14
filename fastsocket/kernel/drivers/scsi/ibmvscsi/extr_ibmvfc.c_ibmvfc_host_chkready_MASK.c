
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static inline int FUNC_0(struct ibmvfc_host *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->state) {
 case 130:
 case 132:
  VAR_3 = VAR_0 << 16;
  break;
 case 128:
 case 131:
 case 133:
 case 129:
  VAR_3 = VAR_1 << 16;
  break;
 case 134:
  VAR_3 = 0;
  break;
 };

 return VAR_3;
}
