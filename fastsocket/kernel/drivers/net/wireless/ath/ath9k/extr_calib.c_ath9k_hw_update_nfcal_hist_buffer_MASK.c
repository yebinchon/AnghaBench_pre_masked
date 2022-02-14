
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_nf_limits {scalar_t__ max; } ;
struct ath_hw {int rxchainmask; int curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_nfcal_hist {size_t currIndex; scalar_t__ invalidNFcount; scalar_t__ privNF; void** nfCalBuffer; } ;
struct ath9k_hw_cal_data {int nfcal_interference; struct ath9k_nfcal_hist* nfCalHist; } ;
typedef void* int16_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (void**) ;
 struct ath_nf_limits* FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,scalar_t__,scalar_t__,char*) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_4,
           struct ath9k_hw_cal_data *VAR_5,
           int16_t *VAR_6)
{
 struct ath_common *VAR_7 = FUNC_1(VAR_4);
 struct ath_nf_limits *VAR_8;
 struct ath9k_nfcal_hist *VAR_9;
 bool VAR_10 = 0;
 u8 VAR_11 = (VAR_4->rxchainmask << 3) | VAR_4->rxchainmask;
 int VAR_12;

 VAR_9 = VAR_5->nfCalHist;
 VAR_8 = FUNC_3(VAR_4, VAR_4->curchan);

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (!(VAR_11 & (1 << VAR_12)) ||
      ((VAR_12 >= VAR_0) && !FUNC_0(VAR_4->curchan)))
   continue;

  VAR_9[VAR_12].nfCalBuffer[VAR_9[VAR_12].currIndex] = VAR_6[VAR_12];

  if (++VAR_9[VAR_12].currIndex >= VAR_1)
   VAR_9[VAR_12].currIndex = 0;

  if (VAR_9[VAR_12].invalidNFcount > 0) {
   VAR_9[VAR_12].invalidNFcount--;
   VAR_9[VAR_12].privNF = VAR_6[VAR_12];
  } else {
   VAR_9[VAR_12].privNF =
    FUNC_2(VAR_9[VAR_12].nfCalBuffer);
  }

  if (!VAR_9[VAR_12].privNF)
   continue;

  if (VAR_9[VAR_12].privNF > VAR_8->max) {
   VAR_10 = 1;

   FUNC_4(VAR_7, VAR_2,
    "NFmid[%d] (%d) > MAX (%d), %s\n",
    VAR_12, VAR_9[VAR_12].privNF, VAR_8->max,
    (VAR_5->nfcal_interference ?
     "not corrected (due to interference)" :
     "correcting to MAX"));
   if (!VAR_5->nfcal_interference)
    VAR_9[VAR_12].privNF = VAR_8->max;
  }
 }






 if (!VAR_10)
  VAR_5->nfcal_interference = 0;
}
