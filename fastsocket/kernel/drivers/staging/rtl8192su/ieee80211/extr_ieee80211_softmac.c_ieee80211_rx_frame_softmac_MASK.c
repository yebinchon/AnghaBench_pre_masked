
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_stats {int len; } ;
struct TYPE_5__ {int bdHTInfoLen; int bdHTInfoBuf; int bdHTCapLen; int bdHTCapBuf; } ;
struct ieee80211_network {TYPE_1__ bssht; } ;
struct ieee80211_hdr_3addr {int addr2; int frame_ctl; } ;
struct ieee80211_disassoc {int reason; } ;
struct TYPE_8__ {int reassoc; int rx_auth_rs_err; int rx_auth_rs_ok; int rx_ass_err; int rx_ass_ok; } ;
struct TYPE_7__ {int mode; } ;
struct ieee80211_device {int softmac_features; int assoc_id; int bHalfWirelessN24GMode; int is_roaming; int associate_procedure_wq; int wq; int dev; int (* LedControlHandler ) (int ,int ) ;TYPE_4__ softmac_stats; int state; int iw_mode; TYPE_3__ current_network; int (* SetWirelessMode ) (int ,int ) ;int (* GetNmodeSupportBySecCfg ) (int ) ;TYPE_2__* pHTInfo; int open_wep; int AsocRetryCount; int (* handle_assoc_response ) (int ,struct ieee80211_assoc_response_frame*,struct ieee80211_network*) ;int qos_support; int proto_started; } ;
struct ieee80211_assoc_response_frame {int info_element; } ;
struct TYPE_6__ {int IOTAction; int PeerHTInfoBuf; int PeerHTCapBuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ieee80211_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ieee80211_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_device*,struct sk_buff*,int*) ;
 int FUNC_5 (struct sk_buff*,int **,int*) ;
 int FUNC_6 (struct ieee80211_device*) ;
 int FUNC_7 (struct ieee80211_device*) ;
 int FUNC_8 (struct ieee80211_device*) ;
 int FUNC_9 (struct ieee80211_device*,int *,int) ;
 int FUNC_10 (struct ieee80211_device*) ;
 int FUNC_11 (struct ieee80211_device*,int ,int ,struct ieee80211_network*,struct ieee80211_rx_stats*) ;
 int FUNC_12 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_13 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_14 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_15 (struct ieee80211_device*,struct sk_buff*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct ieee80211_network*,int ,int) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,struct ieee80211_assoc_response_frame*,struct ieee80211_network*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;

inline int
FUNC_25(struct ieee80211_device *VAR_14, struct sk_buff *VAR_15,
   struct ieee80211_rx_stats *VAR_16, u16 VAR_17,
   u16 VAR_18)
{
 struct ieee80211_hdr_3addr *VAR_19 = (struct ieee80211_hdr_3addr *) VAR_15->data;
 u16 VAR_20;
 u8* VAR_21;
 int VAR_22=0;
 int VAR_23;
 struct ieee80211_assoc_response_frame *VAR_24;

 bool VAR_25 = 1, VAR_26 = 0;

 if(!VAR_14->proto_started)
  return 0;

 switch (FUNC_3(VAR_19->frame_ctl)) {

  case 135:
  case 128:

   FUNC_0("received [RE]ASSOCIATION RESPONSE (%d)\n",
     FUNC_3(VAR_19->frame_ctl));
   if ((VAR_14->softmac_features & VAR_7) &&
    VAR_14->state == VAR_2 &&
    VAR_14->iw_mode == VAR_10){
    struct ieee80211_network VAR_27;
    struct ieee80211_network *VAR_28 = &VAR_27;

    if (0 == (VAR_20=FUNC_4(VAR_14,VAR_15, &VAR_23))){
     VAR_14->state=VAR_4;
     VAR_14->assoc_id = VAR_23;
     VAR_14->softmac_stats.rx_ass_ok++;


     if(VAR_14->qos_support) {
      VAR_24 = (struct ieee80211_assoc_response_frame*)VAR_15->data;
      FUNC_17(VAR_28, 0, sizeof(*VAR_28));
      if (FUNC_11(VAR_14,VAR_24->info_element, VAR_16->len - sizeof(*VAR_24), VAR_28,VAR_16)){


       return 1;
      }
      else
      {
       FUNC_16(VAR_14->pHTInfo->PeerHTCapBuf, VAR_28->bssht.bdHTCapBuf, VAR_28->bssht.bdHTCapLen);
       FUNC_16(VAR_14->pHTInfo->PeerHTInfoBuf, VAR_28->bssht.bdHTInfoBuf, VAR_28->bssht.bdHTInfoLen);
      }
      if (VAR_14->handle_assoc_response != ((void*)0))
       VAR_14->handle_assoc_response(VAR_14->dev, (struct ieee80211_assoc_response_frame*)VAR_19, VAR_28);
     }
     FUNC_7(VAR_14);
    } else {

     VAR_14->softmac_stats.rx_ass_err++;
     FUNC_18(
      "Association response status code 0x%x\n",
      VAR_20);
     FUNC_0(
      "Association response status code 0x%x\n",
      VAR_20);
     if(VAR_14->AsocRetryCount < VAR_13) {
      FUNC_19(VAR_14->wq, &VAR_14->associate_procedure_wq);
     } else {
      FUNC_6(VAR_14);
     }
    }
   }
   break;

  case 136:
  case 129:

   if ((VAR_14->softmac_features & VAR_7) &&
    VAR_14->iw_mode == VAR_11)

    FUNC_13(VAR_14, VAR_15);
   break;

  case 134:

   if (VAR_14->softmac_features & VAR_7){
    if (VAR_14->state == VAR_3 &&
    VAR_14->iw_mode == VAR_10){

      FUNC_0("Received authentication response");

      if (0 == (VAR_20=FUNC_5(VAR_15, &VAR_21, &VAR_22))){
       if(VAR_14->open_wep || !VAR_21){
        VAR_14->state = VAR_2;
        VAR_14->softmac_stats.rx_auth_rs_ok++;
        if(!(VAR_14->pHTInfo->IOTAction&VAR_0))
        {
         if (!VAR_14->GetNmodeSupportBySecCfg(VAR_14->dev))
         {

          if(FUNC_1(VAR_14))
          {
           VAR_25 = 1;
           VAR_26 = 1;
          }
          else
          {
           VAR_25 = 0;
           VAR_26 = 0;
          }
         FUNC_18("==========>to link with AP using SEC(%d, %d)", VAR_25, VAR_26);
         }
        }

        if(VAR_25) {

         VAR_14->SetWirelessMode(VAR_14->dev, VAR_14->current_network.mode);

        }else{


         VAR_14->SetWirelessMode(VAR_14->dev, VAR_5);
        }

        if (VAR_14->current_network.mode == VAR_6 && VAR_26 == 1)
        {
         FUNC_18("===============>entern half N mode\n");
         VAR_14->bHalfWirelessN24GMode = 1;
        }
        else
         VAR_14->bHalfWirelessN24GMode = 0;

        FUNC_8(VAR_14);
       }else{
        FUNC_9(VAR_14, VAR_21, VAR_22);
       }
      }else{
       VAR_14->softmac_stats.rx_auth_rs_err++;
       FUNC_0("Authentication respose status code 0x%x",VAR_20);

       FUNC_18("Authentication respose status code 0x%x",VAR_20);
       FUNC_6(VAR_14);
      }

     }else if (VAR_14->iw_mode == VAR_11){
      FUNC_14(VAR_14, VAR_15);
     }
    }
   break;

  case 130:

   if ((VAR_14->softmac_features & VAR_8) &&
    ((VAR_14->iw_mode == VAR_9 ||
    VAR_14->iw_mode == VAR_11) &&
    VAR_14->state == VAR_4)){
    FUNC_15(VAR_14, VAR_15);
   }
   break;

  case 132:
  case 133:



   if ((VAR_14->softmac_features & VAR_7) &&
    VAR_14->state == VAR_4 &&
    VAR_14->iw_mode == VAR_10){
    FUNC_18("==========>received disassoc/deauth(%x) frame, reason code:%x\n",FUNC_3(VAR_19->frame_ctl), ((struct ieee80211_disassoc*)VAR_15->data)->reason);
    VAR_14->state = VAR_1;
    VAR_14->softmac_stats.reassoc++;
    VAR_14->is_roaming = 1;
    FUNC_10(VAR_14);


    FUNC_2(VAR_14, VAR_19->addr2);
    if(VAR_14->LedControlHandler != ((void*)0))
            VAR_14->LedControlHandler(VAR_14->dev, VAR_12);
    FUNC_19(VAR_14->wq, &VAR_14->associate_procedure_wq);
   }
   break;
  case 131:
   FUNC_12(VAR_14,VAR_15);
   break;
  default:
   return -1;
   break;
 }


 return 0;
}
