
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int far; } ;
typedef TYPE_1__ ex_cb_state_t ;
typedef int ex_cb_class_t ;
typedef int ex_cb_action_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static ex_cb_action_t FUNC_0(
 ex_cb_class_t VAR_3,
 void *VAR_4,
 const ex_cb_state_t *VAR_5
 )
{
 ex_cb_state_t *VAR_6 = (ex_cb_state_t *)VAR_4;

 if ((((void*)0) == VAR_4) || (((void*)0) == VAR_5))
 {
  return VAR_2;
 }

 VAR_6->far = VAR_5->far;

 switch (VAR_3)
 {
  case 129:
   return VAR_1;
  case 128:
   return VAR_0;
  default:
   return VAR_2;
 }
}
