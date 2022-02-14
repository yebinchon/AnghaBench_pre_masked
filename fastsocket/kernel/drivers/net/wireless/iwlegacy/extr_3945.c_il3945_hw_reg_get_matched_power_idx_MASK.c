
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {scalar_t__ eeprom; } ;
struct il3945_eeprom_txpower_sample {size_t power; size_t gain_idx; } ;
struct il3945_eeprom_txpower_group {struct il3945_eeprom_txpower_sample* samples; } ;
struct il3945_eeprom {struct il3945_eeprom_txpower_group* groups; } ;
typedef int s8 ;
typedef size_t s32 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct il_priv *VAR_1, s8 VAR_2,
        s32 VAR_3, s32 *VAR_4)
{
 const struct il3945_eeprom_txpower_group *VAR_5 = ((void*)0);
 struct il3945_eeprom *VAR_6 = (struct il3945_eeprom *)VAR_1->eeprom;
 s32 VAR_7, VAR_8;
 s32 VAR_9 = 2 * VAR_2;
 s32 VAR_10;
 const struct il3945_eeprom_txpower_sample *VAR_11;
 s32 VAR_12, VAR_13;
 s32 VAR_14;
 s32 VAR_15;

 VAR_5 = &VAR_6->groups[VAR_3];
 VAR_11 = VAR_5->samples;
 for (VAR_10 = 0; VAR_10 < 5; VAR_10++) {
  if (VAR_9 == VAR_11[VAR_10].power) {
   *VAR_4 = VAR_11[VAR_10].gain_idx;
   return 0;
  }
 }

 if (VAR_9 > VAR_11[1].power) {
  VAR_7 = 0;
  VAR_8 = 1;
 } else if (VAR_9 > VAR_11[2].power) {
  VAR_7 = 1;
  VAR_8 = 2;
 } else if (VAR_9 > VAR_11[3].power) {
  VAR_7 = 2;
  VAR_8 = 3;
 } else {
  VAR_7 = 3;
  VAR_8 = 4;
 }

 VAR_15 = (s32) VAR_11[VAR_8].power - (s32) VAR_11[VAR_7].power;
 if (VAR_15 == 0)
  return -VAR_0;
 VAR_12 = (s32) VAR_11[VAR_7].gain_idx * (1 << 19);
 VAR_13 = (s32) VAR_11[VAR_8].gain_idx * (1 << 19);
 VAR_14 =
     VAR_12 + (VAR_13 - VAR_12) * ((s32) VAR_9 -
       (s32) VAR_11[VAR_7].power) /
     VAR_15 + (1 << 18);
 *VAR_4 = VAR_14 >> 19;
 return 0;
}
