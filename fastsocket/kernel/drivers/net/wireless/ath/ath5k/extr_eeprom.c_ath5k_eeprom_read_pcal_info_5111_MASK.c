
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ath5k_eeprom_info {int* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_g; int ee_header; struct ath5k_chan_pcal_info* ee_pwr_cal_b; struct ath5k_chan_pcal_info* ee_pwr_cal_a; int ee_version; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info_rf5111 {int pcdac_max; int pcdac_min; int* pwr; int pcdac; } ;
struct ath5k_chan_pcal_info {int freq; struct ath5k_chan_pcal_info_rf5111 rf5111_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;
 int VAR_6 ;
 int FUNC_5 (struct ath5k_hw*,int,struct ath5k_chan_pcal_info*) ;
 int FUNC_6 (struct ath5k_hw*,int ) ;
 int FUNC_7 (struct ath5k_hw*,int,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct ath5k_hw *VAR_7, int VAR_8)
{
 struct ath5k_eeprom_info *VAR_9 = &VAR_7->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 u16 VAR_14;

 VAR_11 = FUNC_0(VAR_9->ee_version);
 switch (VAR_8) {
 case 130:
  if (!FUNC_1(VAR_9->ee_header))
   return 0;

  VAR_12 = FUNC_6(VAR_7,
   VAR_11 + VAR_0);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_11 += VAR_1;
  VAR_10 = VAR_9->ee_pwr_cal_a;
  break;
 case 129:
  if (!FUNC_2(VAR_9->ee_header) &&
      !FUNC_3(VAR_9->ee_header))
   return 0;

  VAR_10 = VAR_9->ee_pwr_cal_b;
  VAR_11 += VAR_2;


  VAR_10[0].freq = 2412;
  VAR_10[1].freq = 2447;
  VAR_10[2].freq = 2484;
  VAR_9->ee_n_piers[VAR_8] = 3;
  break;
 case 128:
  if (!FUNC_3(VAR_9->ee_header))
   return 0;

  VAR_10 = VAR_9->ee_pwr_cal_g;
  VAR_11 += VAR_3;


  VAR_10[0].freq = 2312;
  VAR_10[1].freq = 2412;
  VAR_10[2].freq = 2484;
  VAR_9->ee_n_piers[VAR_8] = 3;
  break;
 default:
  return -VAR_6;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9->ee_n_piers[VAR_8]; VAR_13++) {
  struct ath5k_chan_pcal_info_rf5111 *VAR_15 =
   &VAR_10[VAR_13].rf5111_info;

  FUNC_4(VAR_11++, VAR_14);
  VAR_15->pcdac_max = ((VAR_14 >> 10) & VAR_4);
  VAR_15->pcdac_min = ((VAR_14 >> 4) & VAR_4);
  VAR_15->pwr[0] = ((VAR_14 << 2) & VAR_5);

  FUNC_4(VAR_11++, VAR_14);
  VAR_15->pwr[0] |= ((VAR_14 >> 14) & 0x3);
  VAR_15->pwr[1] = ((VAR_14 >> 8) & VAR_5);
  VAR_15->pwr[2] = ((VAR_14 >> 2) & VAR_5);
  VAR_15->pwr[3] = ((VAR_14 << 4) & VAR_5);

  FUNC_4(VAR_11++, VAR_14);
  VAR_15->pwr[3] |= ((VAR_14 >> 12) & 0xf);
  VAR_15->pwr[4] = ((VAR_14 >> 6) & VAR_5);
  VAR_15->pwr[5] = (VAR_14 & VAR_5);

  FUNC_4(VAR_11++, VAR_14);
  VAR_15->pwr[6] = ((VAR_14 >> 10) & VAR_5);
  VAR_15->pwr[7] = ((VAR_14 >> 4) & VAR_5);
  VAR_15->pwr[8] = ((VAR_14 << 2) & VAR_5);

  FUNC_4(VAR_11++, VAR_14);
  VAR_15->pwr[8] |= ((VAR_14 >> 14) & 0x3);
  VAR_15->pwr[9] = ((VAR_14 >> 8) & VAR_5);
  VAR_15->pwr[10] = ((VAR_14 >> 2) & VAR_5);

  FUNC_7(VAR_7, VAR_15->pcdac_min,
   VAR_15->pcdac_max, VAR_15->pcdac);
 }

 return FUNC_5(VAR_7, VAR_8, VAR_10);
}
