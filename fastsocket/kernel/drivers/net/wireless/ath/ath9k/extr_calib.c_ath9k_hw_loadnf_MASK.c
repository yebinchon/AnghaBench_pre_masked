
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee80211_conf {int dummy; } ;
struct ath_hw {int rxchainmask; int * nf_regs; TYPE_2__* caldata; } ;
struct ath_common {TYPE_1__* hw; } ;
struct ath9k_nfcal_hist {scalar_t__ privNF; } ;
struct ath9k_channel {int dummy; } ;
typedef scalar_t__ s16 ;
typedef int int32_t ;
struct TYPE_4__ {struct ath9k_nfcal_hist* nfCalHist; } ;
struct TYPE_3__ {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*) ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_8 (struct ath_common*,int ,char*,int) ;
 int FUNC_9 (struct ieee80211_conf*) ;
 int FUNC_10 (int) ;

void FUNC_11(struct ath_hw *VAR_7, struct ath9k_channel *VAR_8)
{
 struct ath9k_nfcal_hist *VAR_9 = ((void*)0);
 unsigned VAR_10, VAR_11;
 int32_t VAR_12;
 u8 VAR_13 = (VAR_7->rxchainmask << 3) | VAR_7->rxchainmask;
 struct ath_common *VAR_14 = FUNC_6(VAR_7);
 struct ieee80211_conf *VAR_15 = &VAR_14->hw->conf;
 s16 VAR_16 = FUNC_7(VAR_7, VAR_8);

 if (VAR_7->caldata)
  VAR_9 = VAR_7->caldata->nfCalHist;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_13 & (1 << VAR_10)) {
   s16 VAR_17;

   if ((VAR_10 >= VAR_1) && !FUNC_9(VAR_15))
    continue;

   if (VAR_9)
    VAR_17 = VAR_9[VAR_10].privNF;
   else
    VAR_17 = VAR_16;

   VAR_12 = FUNC_3(VAR_7, VAR_7->nf_regs[VAR_10]);
   VAR_12 &= 0xFFFFFE00;
   VAR_12 |= (((u32) VAR_17 << 1) & 0x1ff);
   FUNC_5(VAR_7, VAR_7->nf_regs[VAR_10], VAR_12);
  }
 }





 FUNC_2(VAR_7, VAR_2,
      VAR_3);
 FUNC_2(VAR_7, VAR_2,
      VAR_5);
 FUNC_4(VAR_7, VAR_2, VAR_4);







 for (VAR_11 = 0; VAR_11 < 10000; VAR_11++) {
  if ((FUNC_3(VAR_7, VAR_2) &
       VAR_4) == 0)
   break;
  FUNC_10(10);
 }
 if (VAR_11 == 10000) {
  FUNC_8(VAR_14, VAR_0,
   "Timeout while waiting for nf to load: AR_PHY_AGC_CONTROL=0x%x\n",
   FUNC_3(VAR_7, VAR_2));
  return;
 }






 FUNC_0(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if (VAR_13 & (1 << VAR_10)) {
   if ((VAR_10 >= VAR_1) && !FUNC_9(VAR_15))
    continue;

   VAR_12 = FUNC_3(VAR_7, VAR_7->nf_regs[VAR_10]);
   VAR_12 &= 0xFFFFFE00;
   VAR_12 |= (((u32) (-50) << 1) & 0x1ff);
   FUNC_5(VAR_7, VAR_7->nf_regs[VAR_10], VAR_12);
  }
 }
 FUNC_1(VAR_7);
}
