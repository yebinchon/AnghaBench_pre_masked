
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_channel {int center_freq; } ;
struct ath5k_pdgain_info {int pd_points; int pd_step; int * pd_pwr; } ;
struct TYPE_4__ {size_t** tmpL; size_t** tmpR; int txp_offset; int txp_setup; int txp_min_idx; void* txp_max_pwr; void* txp_min_pwr; } ;
struct ath5k_eeprom_info {size_t** ee_pdc_to_idx; int* ee_pd_gains; } ;
struct TYPE_3__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_2__ ah_txpower; TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {int min_pwr; int max_pwr; scalar_t__ freq; struct ath5k_pdgain_info* pd_curves; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int*,int*,int) ;
 int FUNC_1 (struct ath5k_hw*,int*,int*,int) ;
 int FUNC_2 (int,int,int *,int ,int,size_t*,size_t) ;
 int FUNC_3 (struct ath5k_hw*,int*,int*) ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*,struct ath5k_chan_pcal_info**,struct ath5k_chan_pcal_info**) ;
 void* FUNC_5 (int ,int,int,int,int) ;
 int FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct ath5k_hw *VAR_3,
   struct ieee80211_channel *VAR_4,
   u8 VAR_5, u8 VAR_6)
{
 struct ath5k_pdgain_info *VAR_7, *VAR_8;
 struct ath5k_chan_pcal_info *VAR_9;
 struct ath5k_chan_pcal_info *VAR_10;
 struct ath5k_eeprom_info *VAR_11 = &VAR_3->ah_capabilities.cap_eeprom;
 u8 *VAR_12 = VAR_11->ee_pdc_to_idx[VAR_5];
 s16 VAR_13[VAR_0];
 s16 VAR_14[VAR_0];
 u8 *VAR_15;
 u8 *VAR_16;
 u32 VAR_17 = VAR_4->center_freq;
 int VAR_18, VAR_19;


 FUNC_4(VAR_3, VAR_4,
      &VAR_9,
      &VAR_10);



 for (VAR_18 = 0; VAR_18 < VAR_11->ee_pd_gains[VAR_5]; VAR_18++) {





  u8 VAR_20 = VAR_12[VAR_18];


  VAR_7 = &VAR_9->pd_curves[VAR_20];
  VAR_8 = &VAR_10->pd_curves[VAR_20];


  VAR_15 = VAR_3->ah_txpower.tmpL[VAR_18];
  VAR_16 = VAR_3->ah_txpower.tmpR[VAR_18];







  VAR_13[VAR_18] = FUNC_8(VAR_7->pd_pwr[0],
     VAR_8->pd_pwr[0]) / 2;

  VAR_14[VAR_18] = FUNC_7(VAR_7->pd_pwr[VAR_7->pd_points - 1],
    VAR_8->pd_pwr[VAR_8->pd_points - 1]) / 2;




  switch (VAR_6) {
  case 130:


   VAR_13[VAR_18] = FUNC_8(VAR_7->pd_pwr[0],
      VAR_8->pd_pwr[0]);

   VAR_14[VAR_18] =
    FUNC_7(VAR_7->pd_pwr[VAR_7->pd_points - 1],
     VAR_8->pd_pwr[VAR_8->pd_points - 1]);






   if (!(VAR_11->ee_pd_gains[VAR_5] > 1 && VAR_18 == 0)) {

    VAR_13[VAR_18] =
     FUNC_6(VAR_7->pd_step,
        VAR_8->pd_step,
        VAR_7->pd_pwr,
        VAR_8->pd_pwr);





    if (VAR_14[VAR_18] - VAR_13[VAR_18] > 126)
     VAR_13[VAR_18] = VAR_14[VAR_18] - 126;
   }


  case 129:
  case 128:

   FUNC_2(VAR_13[VAR_18],
      VAR_14[VAR_18],
      VAR_7->pd_pwr,
      VAR_7->pd_step,
      VAR_7->pd_points, VAR_15, VAR_6);




   if (VAR_9 == VAR_10)
    continue;

   FUNC_2(VAR_13[VAR_18],
      VAR_14[VAR_18],
      VAR_8->pd_pwr,
      VAR_8->pd_step,
      VAR_8->pd_points, VAR_16, VAR_6);
   break;
  default:
   return -VAR_2;
  }






  for (VAR_19 = 0; (VAR_19 < (u16) (VAR_14[VAR_18] - VAR_13[VAR_18])) &&
  (VAR_19 < VAR_1); VAR_19++) {
   VAR_15[VAR_19] = (u8) FUNC_5(VAR_17,
       (s16) VAR_9->freq,
       (s16) VAR_10->freq,
       (s16) VAR_15[VAR_19],
       (s16) VAR_16[VAR_19]);
  }
 }
 VAR_3->ah_txpower.txp_min_pwr = FUNC_5(VAR_17,
     (s16) VAR_9->freq,
     (s16) VAR_10->freq,
     VAR_9->min_pwr, VAR_10->min_pwr);

 VAR_3->ah_txpower.txp_max_pwr = FUNC_5(VAR_17,
     (s16) VAR_9->freq,
     (s16) VAR_10->freq,
     VAR_9->max_pwr, VAR_10->max_pwr);


 switch (VAR_6) {
 case 130:



  FUNC_0(VAR_3, VAR_13, VAR_14,
      VAR_11->ee_pd_gains[VAR_5]);




  VAR_3->ah_txpower.txp_offset = 64 - (VAR_14[0] / 2);
  break;
 case 129:


  FUNC_3(VAR_3, VAR_13, VAR_14);


  VAR_3->ah_txpower.txp_min_idx = 0;
  VAR_3->ah_txpower.txp_offset = 0;
  break;
 case 128:


  FUNC_1(VAR_3, VAR_13, VAR_14,
      VAR_11->ee_pd_gains[VAR_5]);



  VAR_3->ah_txpower.txp_offset = VAR_13[0];
  break;
 default:
  return -VAR_2;
 }

 VAR_3->ah_txpower.txp_setup = 1;

 return 0;
}
