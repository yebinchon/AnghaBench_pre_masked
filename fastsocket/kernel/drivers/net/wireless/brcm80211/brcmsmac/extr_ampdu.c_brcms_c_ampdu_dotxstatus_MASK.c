
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tx_status {int status; int frameid; } ;
struct sk_buff {size_t priority; scalar_t__ data; } ;
struct scb_ampdu_tid_ini {int dummy; } ;
struct scb_ampdu {struct scb_ampdu_tid_ini* ini; } ;
struct scb {struct scb_ampdu scb_ampdu; } ;
struct ieee80211_tx_info {int dummy; } ;
struct d11txh {int MacTxControlLow; } ;
struct brcms_c_info {TYPE_1__* hw; } ;
struct ampdu_info {struct brcms_c_info* wlc; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int * di; TYPE_2__* d11core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct ampdu_info*,struct scb*,struct sk_buff*,struct tx_status*,int,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct d11txh*,int) ;
 int FUNC_8 (int) ;

void
FUNC_9(struct ampdu_info *VAR_9, struct scb *VAR_10,
       struct sk_buff *VAR_11, struct tx_status *VAR_12)
{
 struct scb_ampdu *VAR_13;
 struct brcms_c_info *VAR_14 = VAR_9->wlc;
 struct scb_ampdu_tid_ini *VAR_15;
 u32 VAR_16 = 0, VAR_17 = 0;
 struct ieee80211_tx_info *VAR_18;

 VAR_18 = FUNC_1(VAR_11);





 if (VAR_12->status & VAR_6) {
  u8 VAR_19 = 0;


  VAR_16 = FUNC_2(VAR_14->hw->d11core, FUNC_0(VAR_7));
  while ((VAR_16 & VAR_5) == 0) {
   FUNC_8(1);
   VAR_19++;
   if (VAR_19 > 10)
    return;
   VAR_16 = FUNC_2(VAR_14->hw->d11core,
      FUNC_0(VAR_7));
  }

  VAR_17 = FUNC_2(VAR_14->hw->d11core, FUNC_0(VAR_8));
 }

 if (VAR_10) {
  VAR_13 = &VAR_10->scb_ampdu;
  VAR_15 = &VAR_13->ini[VAR_11->priority];
  FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12, VAR_16, VAR_17);
 } else {

  u8 VAR_20 = VAR_12->frameid & VAR_4;
  struct d11txh *VAR_21;
  u16 VAR_22;
  while (VAR_11) {
   VAR_18 = FUNC_1(VAR_11);
   VAR_21 = (struct d11txh *) VAR_11->data;
   FUNC_7(&VAR_14->hw->d11core->dev, VAR_21,
        sizeof(*VAR_21));
   VAR_22 = FUNC_6(VAR_21->MacTxControlLow);
   FUNC_4(VAR_11);

   if (((VAR_22 & VAR_2) >> VAR_3) ==
       VAR_1)
    break;
   VAR_11 = FUNC_5(VAR_14->hw->di[VAR_20],
        VAR_0);
  }
 }
}
