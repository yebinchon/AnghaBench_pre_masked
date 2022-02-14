
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_network {int dummy; } ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct TYPE_5__ {int * txb; } ;
struct TYPE_4__ {int SlotNum; scalar_t__ NumRecvDataInPeriod; scalar_t__ NumRecvBcnInPeriod; } ;
struct ieee80211_device {int rate; int* Regdot11HTOperationalRateSet; int actscanning; int beinretry; int is_set_key; int* sta_edca_param; int aggregation; int enable_rx_imm_BA; int ps_task; int beacon_lock; int mgmt_tx_lock; int scan_sem; int wx_sem; int wx_sync_scan_wq; int associate_retry_wq; int softmac_scan_wq; int associate_procedure_wq; int associate_complete_wq; int start_ibss_wq; int link_change_wq; void* wq; TYPE_3__ beacon_timer; TYPE_3__ associate_timer; TYPE_2__ tx_pending; scalar_t__ sta_sleep; int ps; int basic_rate; scalar_t__ proto_started; scalar_t__ ssid_set; scalar_t__ wap_set; scalar_t__ softmac_features; scalar_t__ scanning; scalar_t__ queue_stop; scalar_t__ assoc_id; TYPE_1__ LinkDetectInfo; int * pDot11dInfo; scalar_t__* seq_ctrl; scalar_t__ sync_scan_hurryup; int state; int current_network; } ;
typedef int RT_DOT11D_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int ,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void (*) (unsigned long),unsigned long) ;

void FUNC_11(struct ieee80211_device *VAR_16)
{
 int VAR_17;
 FUNC_7(&VAR_16->current_network, 0, sizeof(struct ieee80211_network));

 VAR_16->state = VAR_4;
 VAR_16->sync_scan_hurryup = 0;
 for(VAR_17 = 0; VAR_17 < 5; VAR_17++) {
   VAR_16->seq_ctrl[VAR_17] = 0;
 }
 VAR_16->pDot11dInfo = FUNC_6(sizeof(RT_DOT11D_INFO), VAR_1);
 if (!VAR_16->pDot11dInfo)
  FUNC_0(VAR_3, "can't alloc memory for DOT11D\n");
 FUNC_7(VAR_16->pDot11dInfo, 0, sizeof(RT_DOT11D_INFO));

 VAR_16->LinkDetectInfo.SlotNum = 2;
 VAR_16->LinkDetectInfo.NumRecvBcnInPeriod=0;
        VAR_16->LinkDetectInfo.NumRecvDataInPeriod=0;

 VAR_16->assoc_id = 0;
 VAR_16->queue_stop = 0;
 VAR_16->scanning = 0;
 VAR_16->softmac_features = 0;
 VAR_16->wap_set = 0;
 VAR_16->ssid_set = 0;
 VAR_16->proto_started = 0;
 VAR_16->basic_rate = VAR_2;
 VAR_16->rate = 22;
 VAR_16->ps = VAR_5;
 VAR_16->sta_sleep = 0;
 VAR_16->Regdot11HTOperationalRateSet[0]= 0xff;
 VAR_16->Regdot11HTOperationalRateSet[1]= 0xff;
 VAR_16->Regdot11HTOperationalRateSet[4]= 0x01;

 VAR_16->actscanning = 0;
 VAR_16->beinretry = 0;
 VAR_16->is_set_key = 0;
 FUNC_4(VAR_16);

 VAR_16->sta_edca_param[0] = 0x0000A403;
 VAR_16->sta_edca_param[1] = 0x0000A427;
 VAR_16->sta_edca_param[2] = 0x005E4342;
 VAR_16->sta_edca_param[3] = 0x002F3262;
 VAR_16->aggregation = 1;
 VAR_16->enable_rx_imm_BA = 1;
 VAR_16->tx_pending.txb = ((void*)0);

 FUNC_5(&VAR_16->associate_timer);
 VAR_16->associate_timer.data = (unsigned long)VAR_16;
 VAR_16->associate_timer.function = VAR_6;

 FUNC_5(&VAR_16->beacon_timer);
 VAR_16->beacon_timer.data = (unsigned long) VAR_16;
 VAR_16->beacon_timer.function = VAR_11;




 VAR_16->wq = FUNC_3(VAR_0);


        FUNC_1(&VAR_16->link_change_wq,VAR_10);
        FUNC_1(&VAR_16->start_ibss_wq,VAR_14);
        FUNC_2(&VAR_16->associate_complete_wq, VAR_7);
        FUNC_2(&VAR_16->associate_procedure_wq, VAR_8);
        FUNC_1(&VAR_16->softmac_scan_wq,VAR_12);
        FUNC_1(&VAR_16->associate_retry_wq, VAR_9);
        FUNC_2(&VAR_16->wx_sync_scan_wq,VAR_15);

 FUNC_8(&VAR_16->wx_sem, 1);
 FUNC_8(&VAR_16->scan_sem, 1);

 FUNC_9(&VAR_16->mgmt_tx_lock);
 FUNC_9(&VAR_16->beacon_lock);

 FUNC_10(&VAR_16->ps_task,
      (void(*)(unsigned long)) VAR_13,
      (unsigned long)VAR_16);

}
