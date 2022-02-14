
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct iwl_priv {TYPE_2__* lib; TYPE_3__* trans; TYPE_1__* nvm_data; } ;
struct iwl_op_mode {int dummy; } ;
struct TYPE_8__ {int hw_rev; } ;
struct TYPE_7__ {int (* nic_config ) (struct iwl_priv*) ;} ;
struct TYPE_6__ {int radio_cfg_type; int radio_cfg_step; int radio_cfg_dash; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int FUNC_2 (struct iwl_priv*,char*,int,int,int) ;
 struct iwl_priv* FUNC_3 (struct iwl_op_mode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int,int) ;
 int FUNC_8 (struct iwl_priv*) ;

__attribute__((used)) static void FUNC_9(struct iwl_op_mode *VAR_16)
{
 struct iwl_priv *VAR_17 = FUNC_3(VAR_16);


 FUNC_7(VAR_17->trans, VAR_2,
    VAR_5 |
    VAR_6,
    (FUNC_1(VAR_17->trans->hw_rev) <<
     VAR_11) |
    (FUNC_0(VAR_17->trans->hw_rev) <<
     VAR_10));


 if (VAR_17->nvm_data->radio_cfg_type <= VAR_15) {
  u32 VAR_18 =
   VAR_17->nvm_data->radio_cfg_type <<
    VAR_14 |
   VAR_17->nvm_data->radio_cfg_step <<
    VAR_13 |
   VAR_17->nvm_data->radio_cfg_dash <<
    VAR_12;

  FUNC_7(VAR_17->trans, VAR_2,
     VAR_9 |
     VAR_8 |
     VAR_7,
     VAR_18);

  FUNC_2(VAR_17, "Radio type=0x%x-0x%x-0x%x\n",
    VAR_17->nvm_data->radio_cfg_type,
    VAR_17->nvm_data->radio_cfg_step,
    VAR_17->nvm_data->radio_cfg_dash);
 } else {
  FUNC_4(1);
 }


 FUNC_5(VAR_17->trans, VAR_2,
      VAR_4 |
      VAR_3);





 FUNC_6(VAR_17->trans, VAR_1,
          VAR_0,
          ~VAR_0);

 if (VAR_17->lib->nic_config)
  VAR_17->lib->nic_config(VAR_17);
}
