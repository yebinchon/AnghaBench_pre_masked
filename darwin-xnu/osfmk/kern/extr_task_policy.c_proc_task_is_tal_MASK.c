
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ trp_apptype; } ;
struct TYPE_5__ {TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(task_t VAR_3)
{
 return (VAR_3->requested_policy.trp_apptype == VAR_1) ? VAR_2 : VAR_0;
}
