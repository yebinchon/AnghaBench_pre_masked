
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {int** ee_pdc_to_idx; int* ee_x_gain; int* ee_pd_gains; scalar_t__ ee_version; int* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; int ee_header; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf5112 {int* pcdac_x0; int* pwr_x3; int* pcdac_x3; void** pwr_x0; } ;
struct ath5k_chan_pcal_info {void* max_pwr; struct ath5k_chan_pcal_info_rf5112 rf5112_info; } ;
typedef void* s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ath5k_hw*,int,struct ath5k_chan_pcal_info*) ;
 int FUNC_5 (struct ath5k_hw*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct ath5k_hw *VAR_7, int VAR_8)
{
 struct ath5k_eeprom_info *VAR_9 = &VAR_7->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info_rf5112 *VAR_10;
 struct ath5k_chan_pcal_info *VAR_11;
 u8 *VAR_12 = VAR_9->ee_pdc_to_idx[VAR_8];
 u32 VAR_13;
 u8 VAR_14, VAR_15;
 u16 VAR_16;
 u8 VAR_17 = 0;






 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {

  if ((VAR_9->ee_x_gain[VAR_8] >> VAR_14) & 0x1)
   VAR_12[VAR_17++] = VAR_14;
 }
 VAR_9->ee_pd_gains[VAR_8] = VAR_17;

 if (VAR_17 == 0 || VAR_17 > 2)
  return -VAR_6;

 switch (VAR_8) {
 case 130:



  VAR_13 = FUNC_0(VAR_9->ee_version);
  FUNC_5(VAR_7, VAR_13);

  VAR_13 += VAR_0;
  VAR_11 = VAR_9->ee_pwr_cal_a;
  break;
 case 129:
  VAR_13 = FUNC_0(VAR_9->ee_version);
  if (FUNC_1(VAR_9->ee_header))
   VAR_13 += VAR_1;


  VAR_11 = VAR_9->ee_pwr_cal_b;
  break;
 case 128:
  VAR_13 = FUNC_0(VAR_9->ee_version);
  if (FUNC_1(VAR_9->ee_header))
   VAR_13 += VAR_2;
  else if (FUNC_2(VAR_9->ee_header))
   VAR_13 += VAR_0;


  VAR_11 = VAR_9->ee_pwr_cal_g;
  break;
 default:
  return -VAR_6;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9->ee_n_piers[VAR_8]; VAR_14++) {
  VAR_10 = &VAR_11[VAR_14].rf5112_info;




  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   FUNC_3(VAR_13++, VAR_16);
   VAR_10->pwr_x0[VAR_15] = (s8) (VAR_16 & 0xff);
   VAR_10->pwr_x0[++VAR_15] = (s8) ((VAR_16 >> 8) & 0xff);
  }




  FUNC_3(VAR_13++, VAR_16);
  VAR_10->pcdac_x0[1] = (VAR_16 & 0x1f);
  VAR_10->pcdac_x0[2] = ((VAR_16 >> 5) & 0x1f);
  VAR_10->pcdac_x0[3] = ((VAR_16 >> 10) & 0x1f);




  FUNC_3(VAR_13++, VAR_16);
  VAR_10->pwr_x3[0] = (s8) (VAR_16 & 0xff);
  VAR_10->pwr_x3[1] = (s8) ((VAR_16 >> 8) & 0xff);

  FUNC_3(VAR_13++, VAR_16);
  VAR_10->pwr_x3[2] = (VAR_16 & 0xff);




  VAR_10->pcdac_x3[0] = 20;
  VAR_10->pcdac_x3[1] = 35;
  VAR_10->pcdac_x3[2] = 63;

  if (VAR_9->ee_version >= VAR_5) {
   VAR_10->pcdac_x0[0] = ((VAR_16 >> 8) & 0x3f);


   VAR_11[VAR_14].max_pwr = VAR_10->pwr_x0[3];
  } else {
   VAR_10->pcdac_x0[0] = 1;
   VAR_11[VAR_14].max_pwr = (s8) ((VAR_16 >> 8) & 0xff);
  }

 }

 return FUNC_4(VAR_7, VAR_8, VAR_11);
}
