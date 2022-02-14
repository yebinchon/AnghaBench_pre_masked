
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath5k_pdgain_info {unsigned int pd_points; int* pd_pwr; scalar_t__* pd_step; } ;
struct ath5k_eeprom_info {size_t** ee_pdc_to_idx; unsigned int* ee_n_piers; unsigned int* ee_pd_gains; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf2413 {int* pwr_i; int** pwr; scalar_t__** pddac; scalar_t__* pddac_i; } ;
struct ath5k_chan_pcal_info {int min_pwr; int max_pwr; struct ath5k_pdgain_info* pd_curves; struct ath5k_chan_pcal_info_rf2413 rf2413_info; } ;
typedef int s16 ;


 unsigned int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,int) ;
 void* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_4, int VAR_5,
    struct ath5k_chan_pcal_info *VAR_6)
{
 struct ath5k_eeprom_info *VAR_7 = &VAR_4->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info_rf2413 *VAR_8;
 u8 *VAR_9 = VAR_7->ee_pdc_to_idx[VAR_5];
 unsigned int VAR_10, VAR_11, VAR_12;


 for (VAR_10 = 0; VAR_10 < VAR_7->ee_n_piers[VAR_5]; VAR_10++) {

  VAR_8 = &VAR_6[VAR_10].rf2413_info;


  VAR_6[VAR_10].pd_curves =
    FUNC_1(VAR_0,
     sizeof(struct ath5k_pdgain_info),
     VAR_3);

  if (!VAR_6[VAR_10].pd_curves)
   goto err_out;


  for (VAR_11 = 0; VAR_11 < VAR_7->ee_pd_gains[VAR_5]; VAR_11++) {

   u8 VAR_13 = VAR_9[VAR_11];
   struct ath5k_pdgain_info *VAR_14 =
     &VAR_6[VAR_10].pd_curves[VAR_13];



   if (VAR_11 == VAR_7->ee_pd_gains[VAR_5] - 1)
    VAR_14->pd_points = VAR_1;
   else
    VAR_14->pd_points = VAR_1 - 1;


   VAR_14->pd_step = FUNC_1(VAR_14->pd_points,
     sizeof(u8), VAR_3);

   if (!VAR_14->pd_step)
    goto err_out;

   VAR_14->pd_pwr = FUNC_1(VAR_14->pd_points,
     sizeof(s16), VAR_3);

   if (!VAR_14->pd_pwr)
    goto err_out;




   VAR_14->pd_step[0] = VAR_8->pddac_i[VAR_11];
   VAR_14->pd_pwr[0] = 4 * VAR_8->pwr_i[VAR_11];

   for (VAR_12 = 1; VAR_12 < VAR_14->pd_points; VAR_12++) {

    VAR_14->pd_pwr[VAR_12] = VAR_14->pd_pwr[VAR_12 - 1] +
     2 * VAR_8->pwr[VAR_11][VAR_12 - 1];

    VAR_14->pd_step[VAR_12] = VAR_14->pd_step[VAR_12 - 1] +
      VAR_8->pddac[VAR_11][VAR_12 - 1];

   }


   if (VAR_11 == 0)
    VAR_6[VAR_10].min_pwr = VAR_14->pd_pwr[0];


   if (VAR_11 == VAR_7->ee_pd_gains[VAR_5] - 1)
    VAR_6[VAR_10].max_pwr =
     VAR_14->pd_pwr[VAR_14->pd_points - 1];
  }
 }

 return 0;

err_out:
 FUNC_0(VAR_4, VAR_5);
 return -VAR_2;
}
