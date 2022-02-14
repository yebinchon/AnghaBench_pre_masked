
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef int boolean_t ;
struct TYPE_4__ {int trp_apptype; } ;
struct TYPE_5__ {TYPE_1__ requested_policy; } ;


 int VAR_0 ;




 int VAR_1 ;

boolean_t
FUNC_0(task_t VAR_2)
{
 switch (VAR_2->requested_policy.trp_apptype) {
 case 129:
 case 128:
 case 131:
 case 130:
  return VAR_1;
 default:
  return VAR_0;
 }
}
