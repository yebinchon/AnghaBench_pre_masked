
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_4__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {int tep_darwinbg; int tep_sup_active; scalar_t__ tep_tal_engaged; } ;
struct TYPE_8__ {scalar_t__ trp_role; int trp_boosted; } ;
struct TYPE_11__ {TYPE_3__* task_imp_base; int bsd_info; TYPE_2__ effective_policy; TYPE_1__ requested_policy; scalar_t__ frozen; scalar_t__ pidsuspended; int active; } ;
struct TYPE_10__ {scalar_t__ iit_live_donor; scalar_t__ iit_donor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint64_t
FUNC_5(task_t VAR_16)
{
 uint64_t VAR_17 = 0;
 boolean_t VAR_18 = FUNC_2(VAR_16);

 if (VAR_18)
  VAR_17 |= VAR_15;
 if (!VAR_16->active || FUNC_3(VAR_16) || FUNC_1(VAR_16->bsd_info))
  VAR_17 |= VAR_14;
 if (VAR_16->pidsuspended)
  VAR_17 |= VAR_3;
 if (VAR_16->frozen)
  VAR_17 |= VAR_2;
 if (VAR_16->effective_policy.tep_darwinbg == 1)
  VAR_17 |= VAR_5;
 if (VAR_16->requested_policy.trp_role == VAR_1)
  VAR_17 |= VAR_9;
 if (VAR_16->requested_policy.trp_boosted == 1)
  VAR_17 |= VAR_6;
 if (VAR_16->effective_policy.tep_sup_active == 1)
  VAR_17 |= VAR_12;
 if (VAR_16->effective_policy.tep_tal_engaged)
  VAR_17 |= VAR_13;

 VAR_17 |= (0x7 & FUNC_4(VAR_16->bsd_info)) << 17;
 return VAR_17;
}
