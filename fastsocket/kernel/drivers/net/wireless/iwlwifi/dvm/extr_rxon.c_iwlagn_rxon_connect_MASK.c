
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iwl_rxon_context {scalar_t__ ctxid; TYPE_3__* vif; int staging; int rxon_cmd; int active; } ;
struct iwl_rxon_cmd {int dummy; } ;
struct iwl_priv {TYPE_2__* cfg; int tx_power_next; scalar_t__ start_calib; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__* ht_params; } ;
struct TYPE_5__ {scalar_t__ smps_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (struct iwl_priv*,int ,int ,int,int *) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_5 (struct iwl_priv*,int ,int) ;
 int FUNC_6 (struct iwl_priv*,TYPE_3__*) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_8 (struct iwl_rxon_cmd*,int *,int) ;

__attribute__((used)) static int FUNC_9(struct iwl_priv *VAR_5,
          struct iwl_rxon_context *VAR_6)
{
 int VAR_7;
 struct iwl_rxon_cmd *VAR_8 = (void *)&VAR_6->active;


 if (VAR_6->ctxid == VAR_1) {
  VAR_7 = FUNC_4(VAR_5, VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_5, "Failed to send timing (%d)!\n", VAR_7);
   return VAR_7;
  }
 }

 FUNC_7(VAR_5, VAR_6);






 if (VAR_6->vif && (VAR_6->vif->type == VAR_3)) {
  VAR_7 = FUNC_6(VAR_5, VAR_6->vif);
  if (VAR_7) {
   FUNC_0(VAR_5,
    "Error sending required beacon (%d)!\n",
    VAR_7);
   return VAR_7;
  }
 }

 VAR_5->start_calib = 0;






 VAR_7 = FUNC_2(VAR_5, VAR_6->rxon_cmd, VAR_0,
        sizeof(struct iwl_rxon_cmd), &VAR_6->staging);
 if (VAR_7) {
  FUNC_0(VAR_5, "Error setting new RXON (%d)\n", VAR_7);
  return VAR_7;
 }
 FUNC_8(VAR_8, &VAR_6->staging, sizeof(*VAR_8));


 if (VAR_6->vif && (VAR_6->vif->type == VAR_2))
  if (FUNC_6(VAR_5, VAR_6->vif))
   FUNC_0(VAR_5, "Error sending IBSS beacon\n");
 FUNC_3(VAR_5);
 VAR_7 = FUNC_5(VAR_5, VAR_5->tx_power_next, 1);
 if (VAR_7) {
  FUNC_0(VAR_5, "Error sending TX power (%d)\n", VAR_7);
  return VAR_7;
 }

 if (VAR_6->vif && VAR_6->vif->type == VAR_4 &&
     VAR_5->cfg->ht_params && VAR_5->cfg->ht_params->smps_mode)
  FUNC_1(VAR_6->vif,
           VAR_5->cfg->ht_params->smps_mode);

 return 0;
}
