
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath5k_pdgain_info {unsigned int pd_points; int * pd_pwr; scalar_t__* pd_step; } ;
struct ath5k_eeprom_info {size_t** ee_pdc_to_idx; unsigned int* ee_n_piers; unsigned int* ee_pd_gains; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf5112 {scalar_t__* pcdac_x3; int * pwr_x3; scalar_t__* pcdac_x0; int * pwr_x0; } ;
struct ath5k_chan_pcal_info {int min_pwr; struct ath5k_pdgain_info* pd_curves; struct ath5k_chan_pcal_info_rf5112 rf5112_info; } ;
typedef int s16 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 void* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_5, int VAR_6,
    struct ath5k_chan_pcal_info *VAR_7)
{
 struct ath5k_eeprom_info *VAR_8 = &VAR_5->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info_rf5112 *VAR_9;
 u8 *VAR_10 = VAR_8->ee_pdc_to_idx[VAR_6];
 unsigned int VAR_11, VAR_12, VAR_13;


 for (VAR_11 = 0; VAR_11 < VAR_8->ee_n_piers[VAR_6]; VAR_11++) {

  VAR_9 = &VAR_7[VAR_11].rf5112_info;


  VAR_7[VAR_11].pd_curves =
    FUNC_1(VAR_0,
     sizeof(struct ath5k_pdgain_info),
     VAR_4);

  if (!VAR_7[VAR_11].pd_curves)
   goto err_out;


  for (VAR_12 = 0; VAR_12 < VAR_8->ee_pd_gains[VAR_6]; VAR_12++) {

   u8 VAR_14 = VAR_10[VAR_12];
   struct ath5k_pdgain_info *VAR_15 =
     &VAR_7[VAR_11].pd_curves[VAR_14];


   if (VAR_12 == 0) {

    VAR_15->pd_points = VAR_1;


    VAR_15->pd_step = FUNC_1(VAR_15->pd_points,
      sizeof(u8), VAR_4);

    if (!VAR_15->pd_step)
     goto err_out;

    VAR_15->pd_pwr = FUNC_1(VAR_15->pd_points,
      sizeof(s16), VAR_4);

    if (!VAR_15->pd_pwr)
     goto err_out;



    VAR_15->pd_step[0] = VAR_9->pcdac_x0[0];
    VAR_15->pd_pwr[0] = VAR_9->pwr_x0[0];

    for (VAR_13 = 1; VAR_13 < VAR_15->pd_points;
    VAR_13++) {

     VAR_15->pd_pwr[VAR_13] =
      VAR_9->pwr_x0[VAR_13];


     VAR_15->pd_step[VAR_13] =
      VAR_15->pd_step[VAR_13 - 1] +
      VAR_9->pcdac_x0[VAR_13];
    }


    VAR_7[VAR_11].min_pwr = VAR_15->pd_pwr[0];


   } else if (VAR_12 == 1) {

    VAR_15->pd_points = VAR_2;


    VAR_15->pd_step = FUNC_1(VAR_15->pd_points,
      sizeof(u8), VAR_4);

    if (!VAR_15->pd_step)
     goto err_out;

    VAR_15->pd_pwr = FUNC_1(VAR_15->pd_points,
      sizeof(s16), VAR_4);

    if (!VAR_15->pd_pwr)
     goto err_out;



    for (VAR_13 = 0; VAR_13 < VAR_15->pd_points;
    VAR_13++) {

     VAR_15->pd_pwr[VAR_13] =
      VAR_9->pwr_x3[VAR_13];


     VAR_15->pd_step[VAR_13] =
      VAR_9->pcdac_x3[VAR_13];
    }



    VAR_7[VAR_11].min_pwr = VAR_15->pd_pwr[0];
   }
  }
 }

 return 0;

err_out:
 FUNC_0(VAR_5, VAR_6);
 return -VAR_3;
}
