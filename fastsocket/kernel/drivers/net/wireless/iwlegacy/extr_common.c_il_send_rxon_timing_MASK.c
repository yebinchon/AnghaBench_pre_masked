
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct il_rxon_time_cmd {int dummy; } ;
struct TYPE_9__ {int dtim_period; void* atim_win; int beacon_init_val; void* beacon_interval; void* listen_interval; int timestamp; } ;
struct TYPE_7__ {int max_beacon_itrvl; } ;
struct il_priv {TYPE_4__ timing; int timestamp; TYPE_2__ hw_params; int mutex; TYPE_1__* hw; struct ieee80211_vif* vif; } ;
struct TYPE_8__ {int beacon_int; scalar_t__ dtim_period; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; } ;
struct ieee80211_conf {int listen_interval; } ;
typedef int s32 ;
struct TYPE_6__ {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct il_priv*,int ,int,TYPE_4__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;

int
FUNC_11(struct il_priv *VAR_2)
{
 u64 VAR_3;
 s32 VAR_4, VAR_5;
 struct ieee80211_conf *VAR_6 = ((void*)0);
 u16 VAR_7;
 struct ieee80211_vif *VAR_8 = VAR_2->vif;

 VAR_6 = &VAR_2->hw->conf;

 FUNC_9(&VAR_2->mutex);

 FUNC_10(&VAR_2->timing, 0, sizeof(struct il_rxon_time_cmd));

 VAR_2->timing.timestamp = FUNC_3(VAR_2->timestamp);
 VAR_2->timing.listen_interval = FUNC_1(VAR_6->listen_interval);

 VAR_7 = VAR_8 ? VAR_8->bss_conf.beacon_int : 0;





 VAR_2->timing.atim_win = 0;

 VAR_7 =
     FUNC_5(VAR_7,
          VAR_2->hw_params.max_beacon_itrvl *
          VAR_1);
 VAR_2->timing.beacon_interval = FUNC_1(VAR_7);

 VAR_3 = VAR_2->timestamp;
 VAR_4 = VAR_7 * VAR_1;
 VAR_5 = FUNC_4(VAR_3, VAR_4);
 VAR_2->timing.beacon_init_val = FUNC_2(VAR_4 - VAR_5);

 VAR_2->timing.dtim_period = VAR_8 ? (VAR_8->bss_conf.dtim_period ? : 1) : 1;

 FUNC_0("beacon interval %d beacon timer %d beacon tim %d\n",
  FUNC_7(VAR_2->timing.beacon_interval),
  FUNC_8(VAR_2->timing.beacon_init_val),
  FUNC_7(VAR_2->timing.atim_win));

 return FUNC_6(VAR_2, VAR_0, sizeof(VAR_2->timing),
          &VAR_2->timing);
}
