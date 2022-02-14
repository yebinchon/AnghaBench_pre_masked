
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_3__* task_t ;
struct TYPE_7__ {scalar_t__ tep_sup_active; } ;
struct TYPE_6__ {scalar_t__ trp_apptype; int trp_boosted; scalar_t__ trp_int_darwinbg; scalar_t__ trp_ext_darwinbg; } ;
struct TYPE_8__ {TYPE_2__ effective_policy; TYPE_1__ requested_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

int
FUNC_1(task_t VAR_13, uint32_t * VAR_14)
{
 if (VAR_13->requested_policy.trp_ext_darwinbg)
  *VAR_14 |= VAR_4;

 if (VAR_13->requested_policy.trp_int_darwinbg)
  *VAR_14 |= VAR_3;
 if (VAR_13->requested_policy.trp_apptype == VAR_9 ||
     VAR_13->requested_policy.trp_apptype == VAR_10)
  *VAR_14 |= VAR_2;

 if (VAR_13->requested_policy.trp_apptype == VAR_11)
  *VAR_14 |= VAR_0;

 if (VAR_13->requested_policy.trp_apptype == VAR_11 &&
     VAR_13->requested_policy.trp_boosted == 1)
  *VAR_14 |= VAR_1;

 if (FUNC_0(VAR_13))
  *VAR_14 |= VAR_5;

 if (VAR_13->effective_policy.tep_sup_active)
  *VAR_14 |= VAR_8;

 return(0);
}
