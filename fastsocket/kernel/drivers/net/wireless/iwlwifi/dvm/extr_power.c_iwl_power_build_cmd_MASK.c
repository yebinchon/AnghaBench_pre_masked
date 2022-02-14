
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ debug_sleep_level_override; } ;
struct iwl_priv {TYPE_5__ power_data; TYPE_4__* hw; TYPE_2__* cfg; scalar_t__ wowlan; } ;
struct iwl_powertable_cmd {int dummy; } ;
struct TYPE_12__ {scalar_t__ power_level; } ;
struct TYPE_9__ {int flags; scalar_t__ ps_dtim_period; } ;
struct TYPE_10__ {TYPE_3__ conf; } ;
struct TYPE_8__ {TYPE_1__* base_params; } ;
struct TYPE_7__ {int no_idle_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_powertable_cmd*) ;
 int FUNC_1 (struct iwl_priv*,struct iwl_powertable_cmd*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct iwl_priv*) ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 TYPE_6__ VAR_5 ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_6,
    struct iwl_powertable_cmd *VAR_7)
{
 bool VAR_8 = VAR_6->hw->conf.flags & VAR_1;
 int VAR_9;

 VAR_9 = VAR_6->hw->conf.ps_dtim_period ?: 1;

 if (VAR_6->wowlan)
  FUNC_1(VAR_6, VAR_7, VAR_3, VAR_9);
 else if (!VAR_6->cfg->base_params->no_idle_support &&
   VAR_6->hw->conf.flags & VAR_0)
  FUNC_1(VAR_6, VAR_7, VAR_3, 20);
 else if (FUNC_3(VAR_6)) {

  FUNC_1(VAR_6, VAR_7,
      FUNC_2(VAR_6), VAR_9);
 } else if (!VAR_8)
  FUNC_0(VAR_6, VAR_7);
 else if (VAR_6->power_data.debug_sleep_level_override >= 0)
  FUNC_1(VAR_6, VAR_7,
         VAR_6->power_data.debug_sleep_level_override,
         VAR_9);
 else {


  if (VAR_5.power_level > VAR_2 &&
      VAR_5.power_level <= VAR_4)
   FUNC_1(VAR_6, VAR_7,
    VAR_5.power_level - 1, VAR_9);
  else
   FUNC_1(VAR_6, VAR_7,
    VAR_2, VAR_9);
 }
}
