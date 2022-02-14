
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int rx_chain; } ;
struct iwl_rxon_context {TYPE_5__ staging; } ;
struct TYPE_6__ {int active_chains; } ;
struct iwl_priv {scalar_t__ bt_traffic_load; scalar_t__ bt_full_concurrent; TYPE_4__* cfg; TYPE_2__* nvm_data; TYPE_1__ chain_noise_data; int status; } ;
struct TYPE_9__ {TYPE_3__* bt_params; } ;
struct TYPE_8__ {scalar_t__ advanced_bt_coexist; } ;
struct TYPE_7__ {int valid_rx_ant; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct iwl_priv*) ;
 int FUNC_7 (struct iwl_priv*,int) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct iwl_priv *VAR_7, struct iwl_rxon_context *VAR_8)
{
 bool VAR_9 = FUNC_4(VAR_7);
 bool VAR_10 = !FUNC_8(VAR_6, &VAR_7->status);
 u8 VAR_11, VAR_12, VAR_13;
 u32 VAR_14;
 u16 VAR_15;





 if (VAR_7->chain_noise_data.active_chains)
  VAR_14 = VAR_7->chain_noise_data.active_chains;
 else
  VAR_14 = VAR_7->nvm_data->valid_rx_ant;

 if (VAR_7->cfg->bt_params &&
     VAR_7->cfg->bt_params->advanced_bt_coexist &&
     (VAR_7->bt_full_concurrent ||
      VAR_7->bt_traffic_load >= VAR_0)) {




  VAR_14 = FUNC_3(VAR_14);
 }

 VAR_15 = VAR_14 << VAR_5;


 VAR_12 = FUNC_6(VAR_7);
 VAR_11 = FUNC_7(VAR_7, VAR_12);





 VAR_13 = FUNC_5(VAR_14);
 if (VAR_13 < VAR_12)
  VAR_12 = VAR_13;

 if (VAR_13 < VAR_11)
  VAR_11 = VAR_13;

 VAR_15 |= VAR_12 << VAR_3;
 VAR_15 |= VAR_11 << VAR_2;

 VAR_8->staging.rx_chain = FUNC_2(VAR_15);

 if (!VAR_9 && (VAR_12 >= VAR_1) && VAR_10)
  VAR_8->staging.rx_chain |= VAR_4;
 else
  VAR_8->staging.rx_chain &= ~VAR_4;

 FUNC_0(VAR_7, "rx_chain=0x%X active=%d idle=%d\n",
   VAR_8->staging.rx_chain,
   VAR_12, VAR_11);

 FUNC_1(VAR_12 == 0 || VAR_11 == 0 ||
  VAR_12 < VAR_11);
}
