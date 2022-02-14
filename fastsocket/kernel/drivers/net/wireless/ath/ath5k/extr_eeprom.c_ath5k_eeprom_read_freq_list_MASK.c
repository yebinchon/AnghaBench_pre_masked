
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ath5k_eeprom_info {scalar_t__* ee_n_piers; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_chan_pcal_info {void* freq; } ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (struct ath5k_eeprom_info*,int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_2(struct ath5k_hw *VAR_0, int *VAR_1, int VAR_2,
   struct ath5k_chan_pcal_info *VAR_3, unsigned int VAR_4)
{
 struct ath5k_eeprom_info *VAR_5 = &VAR_0->ah_capabilities.cap_eeprom;
 int VAR_6 = *VAR_1;
 int VAR_7 = 0;
 u8 VAR_8, VAR_9;
 u16 VAR_10;

 VAR_5->ee_n_piers[VAR_4] = 0;
 while (VAR_7 < VAR_2) {
  FUNC_0(VAR_6++, VAR_10);

  VAR_8 = VAR_10 & 0xff;
  if (!VAR_8)
   break;

  VAR_3[VAR_7++].freq = FUNC_1(VAR_5,
    VAR_8, VAR_4);
  VAR_5->ee_n_piers[VAR_4]++;

  VAR_9 = (VAR_10 >> 8) & 0xff;
  if (!VAR_9)
   break;

  VAR_3[VAR_7++].freq = FUNC_1(VAR_5,
    VAR_9, VAR_4);
  VAR_5->ee_n_piers[VAR_4]++;
 }


 *VAR_1 = VAR_6;

 return 0;
}
