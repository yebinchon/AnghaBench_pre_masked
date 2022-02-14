
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; int* ee_n_piers; struct ath5k_chan_pcal_info* ee_pwr_cal_a; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {int ah_ee_version; TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {int freq; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ath5k_eeprom_info*,int,size_t) ;
 int FUNC_3 (struct ath5k_hw*,int*,int,struct ath5k_chan_pcal_info*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct ath5k_hw *VAR_3, int VAR_4)
{
 struct ath5k_eeprom_info *VAR_5 = &VAR_3->ah_capabilities.cap_eeprom;
 struct ath5k_chan_pcal_info *VAR_6 = VAR_5->ee_pwr_cal_a;
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 if (VAR_5->ee_version >= VAR_2) {
  FUNC_3(VAR_3, &VAR_4,
   VAR_1, VAR_6,
   VAR_0);
 } else {
  VAR_9 = FUNC_0(VAR_3->ah_ee_version);

  FUNC_1(VAR_4++, VAR_8);
  VAR_6[0].freq = (VAR_8 >> 9) & VAR_9;
  VAR_6[1].freq = (VAR_8 >> 2) & VAR_9;
  VAR_6[2].freq = (VAR_8 << 5) & VAR_9;

  FUNC_1(VAR_4++, VAR_8);
  VAR_6[2].freq |= (VAR_8 >> 11) & 0x1f;
  VAR_6[3].freq = (VAR_8 >> 4) & VAR_9;
  VAR_6[4].freq = (VAR_8 << 3) & VAR_9;

  FUNC_1(VAR_4++, VAR_8);
  VAR_6[4].freq |= (VAR_8 >> 13) & 0x7;
  VAR_6[5].freq = (VAR_8 >> 6) & VAR_9;
  VAR_6[6].freq = (VAR_8 << 1) & VAR_9;

  FUNC_1(VAR_4++, VAR_8);
  VAR_6[6].freq |= (VAR_8 >> 15) & 0x1;
  VAR_6[7].freq = (VAR_8 >> 8) & VAR_9;
  VAR_6[8].freq = (VAR_8 >> 1) & VAR_9;
  VAR_6[9].freq = (VAR_8 << 6) & VAR_9;

  FUNC_1(VAR_4++, VAR_8);
  VAR_6[9].freq |= (VAR_8 >> 10) & 0x3f;


  VAR_5->ee_n_piers[VAR_0] = 10;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   VAR_6[VAR_7].freq = FUNC_2(VAR_5,
    VAR_6[VAR_7].freq, VAR_0);
  }
 }

 return 0;
}
