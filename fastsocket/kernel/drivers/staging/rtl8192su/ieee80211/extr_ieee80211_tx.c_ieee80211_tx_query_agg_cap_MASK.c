
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sk_buff {int priority; scalar_t__ data; } ;
struct ieee80211_hdr_1addr {int addr1; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; scalar_t__ iw_mode; scalar_t__ wpa_ie_len; int dev; int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_7__* pHTInfo; } ;
struct TYPE_17__ {int bAMPDUEnable; int ampdu_factor; int ampdu_density; } ;
typedef TYPE_5__ cb_desc ;
struct TYPE_21__ {int PacketLength; } ;
struct TYPE_13__ {int (* GetNmodeSupportBySecCfgHandler ) (TYPE_8__*) ;} ;
struct TYPE_20__ {TYPE_1__ HalFunc; } ;
struct TYPE_19__ {int IOTAction; int ForcedAMPDUMode; int ForcedAMPDUFactor; int ForcedMPDUDensity; int CurrentMPDUDensity; int CurrentAMPDUFactor; scalar_t__ bCurrentAMPDUEnable; int bEnableHT; int bCurrentHTSupport; } ;
struct TYPE_14__ {int SeqNum; } ;
struct TYPE_15__ {TYPE_2__ field; } ;
struct TYPE_16__ {int bValid; TYPE_3__ BaStartSeqCtrl; } ;
struct TYPE_18__ {int bUsingBa; int TxCurSeq; TYPE_4__ TxAdmittedBARecord; } ;
typedef TYPE_6__* PTX_TS_RECORD ;
typedef int PTS_COMMON_INFO ;
typedef TYPE_7__* PRT_HIGH_THROUGHPUT ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (struct ieee80211_device*,int *,int ,int ,int ,int) ;



 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct ieee80211_device*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_9__* VAR_5 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct ieee80211_device* VAR_6, struct sk_buff* VAR_7, cb_desc* VAR_8)
{
 PRT_HIGH_THROUGHPUT VAR_9 = VAR_6->pHTInfo;
 PTX_TS_RECORD VAR_10 = ((void*)0);
 struct ieee80211_hdr_1addr* VAR_11 = (struct ieee80211_hdr_1addr*)VAR_7->data;

 if (!VAR_9->bCurrentHTSupport||!VAR_9->bEnableHT)
  return;
 if (!FUNC_1(VAR_7->data))
  return;

 if (FUNC_5(VAR_11->addr1) || FUNC_4(VAR_11->addr1))
  return;
 if(VAR_9->IOTAction & VAR_1)
  return;


 if(!VAR_6->GetNmodeSupportBySecCfg(VAR_6->dev))
 {
  return;
 }

 if(VAR_9->bCurrentAMPDUEnable)
 {
  if (!FUNC_0(VAR_6, (PTS_COMMON_INFO*)(&VAR_10), VAR_11->addr1, VAR_7->priority, VAR_4, 1))
  {
   FUNC_6("===>can't get TS\n");
   return;
  }
  if (VAR_10->TxAdmittedBARecord.bValid == 0)
  {

   if (VAR_6->wpa_ie_len && (VAR_6->pairwise_key_type == VAR_3))
   ;
   else
   FUNC_3(VAR_6, VAR_10);
   goto FORCED_AGG_SETTING;
  }
  else if (VAR_10->bUsingBa == 0)
  {
   if (FUNC_2(VAR_10->TxAdmittedBARecord.BaStartSeqCtrl.field.SeqNum, (VAR_10->TxCurSeq+1)%4096))
    VAR_10->bUsingBa = 1;
   else
    goto FORCED_AGG_SETTING;
  }

  if (VAR_6->iw_mode == VAR_2)
  {
   VAR_8->bAMPDUEnable = 1;
   VAR_8->ampdu_factor = VAR_9->CurrentAMPDUFactor;
   VAR_8->ampdu_density = VAR_9->CurrentMPDUDensity;
  }
 }
FORCED_AGG_SETTING:
 switch(VAR_9->ForcedAMPDUMode )
 {
  case 130:
   break;

  case 128:
   VAR_8->bAMPDUEnable = 1;
   VAR_8->ampdu_density = VAR_9->ForcedMPDUDensity;
   VAR_8->ampdu_factor = VAR_9->ForcedAMPDUFactor;
   break;

  case 129:
   VAR_8->bAMPDUEnable = 0;
   VAR_8->ampdu_density = 0;
   VAR_8->ampdu_factor = 0;
   break;

 }
  return;
}
