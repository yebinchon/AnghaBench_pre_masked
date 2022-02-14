
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct iwl_nvm_data {int dummy; } ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm {int init_ucode_run; TYPE_3__* nvm_data; int trans; int notif_wait; int fw; int phy_db; int mutex; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_9__ {int init_dbg; } ;
struct TYPE_8__ {int valid_rx_ant; int valid_tx_ant; TYPE_2__* bands; scalar_t__ channels; } ;
struct TYPE_7__ {int n_channels; int n_bitrates; TYPE_1__* bitrates; scalar_t__ channels; } ;
struct TYPE_6__ {int hw_value; } ;


 int FUNC_0 (int const*) ;

 int VAR_0 ;
 int VAR_1 ;

 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct iwl_notification_wait*,int const*,int ,int ,int ) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (int *,struct iwl_notification_wait*) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*,int ) ;
 int FUNC_12 (struct iwl_mvm*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,struct iwl_notification_wait*,int ) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct iwl_mvm *VAR_6, bool VAR_7)
{
 struct iwl_notification_wait VAR_8;
 static const u8 VAR_9[] = {
  128,
  129
 };
 int VAR_10;

 FUNC_16(&VAR_6->mutex);

 if (VAR_6->init_ucode_run)
  return 0;

 FUNC_4(&VAR_6->notif_wait,
       &VAR_8,
       VAR_9,
       FUNC_0(VAR_9),
       VAR_4,
       VAR_6->phy_db);


 VAR_10 = FUNC_5(VAR_6, VAR_2);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to start INIT ucode: %d\n", VAR_10);
  goto error;
 }

 VAR_10 = FUNC_9(VAR_6);
 if (VAR_10)
  goto error;

 if (VAR_7) {

  VAR_10 = FUNC_7(VAR_6);
  if (VAR_10) {
   FUNC_1(VAR_6, "Failed to read NVM: %d\n", VAR_10);
   goto error;
  }
 }

 VAR_10 = FUNC_6(VAR_6->nvm_data, VAR_6->trans);
 FUNC_2(VAR_10);


 VAR_10 = FUNC_11(VAR_6, FUNC_3(VAR_6->fw));
 if (VAR_10)
  goto error;


 VAR_10 = FUNC_12(VAR_6);
 if (VAR_10)
  goto error;





 VAR_10 = FUNC_10(VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_6, "Failed to run INIT calibrations: %d\n",
   VAR_10);
  goto error;
 }





 VAR_10 = FUNC_14(&VAR_6->notif_wait, &VAR_8,
   VAR_3);
 if (!VAR_10)
  VAR_6->init_ucode_run = 1;
 goto out;

error:
 FUNC_8(&VAR_6->notif_wait, &VAR_8);
out:
 if (!VAR_5.init_dbg) {
  FUNC_13(VAR_6->trans);
 } else if (!VAR_6->nvm_data) {

  VAR_6->nvm_data = FUNC_15(sizeof(struct iwl_nvm_data) +
     sizeof(struct ieee80211_channel) +
     sizeof(struct ieee80211_rate),
     VAR_1);
  if (!VAR_6->nvm_data)
   return -VAR_0;
  VAR_6->nvm_data->valid_rx_ant = 1;
  VAR_6->nvm_data->valid_tx_ant = 1;
  VAR_6->nvm_data->bands[0].channels = VAR_6->nvm_data->channels;
  VAR_6->nvm_data->bands[0].n_channels = 1;
  VAR_6->nvm_data->bands[0].n_bitrates = 1;
  VAR_6->nvm_data->bands[0].bitrates =
   (void *)VAR_6->nvm_data->channels + 1;
  VAR_6->nvm_data->bands[0].bitrates->hw_value = 10;
 }

 return VAR_10;
}
