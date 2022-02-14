
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct ath9k_nfcal_hist {void** nfCalBuffer; int invalidNFcount; void* privNF; scalar_t__ currIndex; } ;
struct ath9k_channel {int chanmode; int channelFlags; int channel; } ;
typedef void* s16 ;
struct TYPE_2__ {struct ath9k_nfcal_hist* nfCalHist; int chanmode; int channelFlags; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct ath_hw*,struct ath9k_channel*) ;

void FUNC_1(struct ath_hw *VAR_3,
      struct ath9k_channel *VAR_4)
{
 struct ath9k_nfcal_hist *VAR_5;
 s16 VAR_6;
 int VAR_7, VAR_8;

 VAR_3->caldata->channel = VAR_4->channel;
 VAR_3->caldata->channelFlags = VAR_4->channelFlags;
 VAR_3->caldata->chanmode = VAR_4->chanmode;
 VAR_5 = VAR_3->caldata->nfCalHist;
 VAR_6 = FUNC_0(VAR_3, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5[VAR_7].currIndex = 0;
  VAR_5[VAR_7].privNF = VAR_6;
  VAR_5[VAR_7].invalidNFcount = VAR_0;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_5[VAR_7].nfCalBuffer[VAR_8] = VAR_6;
  }
 }
}
