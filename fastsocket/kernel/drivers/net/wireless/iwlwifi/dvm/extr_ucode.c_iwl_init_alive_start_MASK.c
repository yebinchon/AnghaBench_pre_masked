
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {TYPE_2__* cfg; } ;
struct TYPE_4__ {scalar_t__ temp_offset_v2; scalar_t__ need_temp_offset_calib; TYPE_1__* bt_params; } ;
struct TYPE_3__ {scalar_t__ advanced_bt_coexist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,int ,int ) ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*) ;

int FUNC_4(struct iwl_priv *VAR_2)
{
 int VAR_3;

 if (VAR_2->cfg->bt_params &&
     VAR_2->cfg->bt_params->advanced_bt_coexist) {






  VAR_3 = FUNC_0(VAR_2, VAR_1,
   VAR_0);
  if (VAR_3)
   return VAR_3;

 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;





 if (VAR_2->cfg->need_temp_offset_calib) {
  if (VAR_2->cfg->temp_offset_v2)
   return FUNC_3(VAR_2);
  else
   return FUNC_2(VAR_2);
 }

 return 0;
}
