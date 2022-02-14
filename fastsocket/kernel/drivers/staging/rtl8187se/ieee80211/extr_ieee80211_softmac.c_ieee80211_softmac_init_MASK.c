
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_network {int dummy; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct TYPE_3__ {int * txb; } ;
struct ieee80211_device {int rate; int ps; int bInactivePs; int actscanning; int ListenInterval; int beinretry; int bHwRadioOff; int pDot11dInfo; int ps_task; int beacon_lock; int mgmt_tx_lock; int scan_sem; int wx_sem; int wx_sync_scan_wq; int associate_retry_wq; int softmac_scan_wq; int associate_procedure_wq; int associate_complete_wq; int start_ibss_wq; void* wq; TYPE_2__ beacon_timer; TYPE_2__ associate_timer; TYPE_1__ tx_pending; scalar_t__ NumRxUnicast; scalar_t__ NumRxOkTotal; scalar_t__ NumRxBcnInPeriod; scalar_t__ NumRxDataInPeriod; scalar_t__ sta_sleep; int basic_rate; scalar_t__ proto_started; scalar_t__ ssid_set; scalar_t__ wap_set; scalar_t__ softmac_features; scalar_t__ scanning; scalar_t__ queue_stop; scalar_t__ assoc_id; scalar_t__* seq_ctrl; scalar_t__ sync_scan_hurryup; int state; int current_network; } ;
typedef int RT_DOT11D_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*) ;
 void* FUNC_2 (int ,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_10(struct ieee80211_device *VAR_15)
{
 int VAR_16;
 FUNC_6(&VAR_15->current_network, 0, sizeof(struct ieee80211_network));

 VAR_15->state = VAR_3;
 VAR_15->sync_scan_hurryup = 0;
 for(VAR_16 = 0; VAR_16 < 5; VAR_16++) {
   VAR_15->seq_ctrl[VAR_16] = 0;
 }

 VAR_15->assoc_id = 0;
 VAR_15->queue_stop = 0;
 VAR_15->scanning = 0;
 VAR_15->softmac_features = 0;
 VAR_15->wap_set = 0;
 VAR_15->ssid_set = 0;
 VAR_15->proto_started = 0;
 VAR_15->basic_rate = VAR_2;
 VAR_15->rate = 3;

 VAR_15->ps = VAR_4|VAR_5;



 VAR_15->sta_sleep = 0;

 VAR_15->bInactivePs = 0;
 VAR_15->actscanning = 0;
 VAR_15->ListenInterval = 2;
 VAR_15->NumRxDataInPeriod = 0;
 VAR_15->NumRxBcnInPeriod = 0;
 VAR_15->NumRxOkTotal = 0;
 VAR_15->NumRxUnicast = 0;
 VAR_15->beinretry = 0;
 VAR_15->bHwRadioOff = 0;


 FUNC_3(VAR_15);

 VAR_15->tx_pending.txb = ((void*)0);

 FUNC_4(&VAR_15->associate_timer);
 VAR_15->associate_timer.data = (unsigned long)VAR_15;
 VAR_15->associate_timer.function = VAR_6;

 FUNC_4(&VAR_15->beacon_timer);
 VAR_15->beacon_timer.data = (unsigned long) VAR_15;
 VAR_15->beacon_timer.function = VAR_10;




 VAR_15->wq = FUNC_2(VAR_0);

 FUNC_0(&VAR_15->start_ibss_wq,(void*) VAR_13);
 FUNC_1(&VAR_15->associate_complete_wq,(void*) VAR_7);
 FUNC_1(&VAR_15->associate_procedure_wq,(void*) VAR_8);
 FUNC_0(&VAR_15->softmac_scan_wq,(void*) VAR_11);
 FUNC_0(&VAR_15->associate_retry_wq,(void*) VAR_9);
 FUNC_1(&VAR_15->wx_sync_scan_wq,(void*) VAR_14);


 FUNC_7(&VAR_15->wx_sem, 1);
 FUNC_7(&VAR_15->scan_sem, 1);

 FUNC_8(&VAR_15->mgmt_tx_lock);
 FUNC_8(&VAR_15->beacon_lock);

 FUNC_9(&VAR_15->ps_task,
      (void(*)(unsigned long)) VAR_12,
      (unsigned long)VAR_15);
 VAR_15->pDot11dInfo = FUNC_5(sizeof(RT_DOT11D_INFO), VAR_1);
}
