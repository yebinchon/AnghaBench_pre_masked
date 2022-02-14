
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_eeprom_info {int* ee_pd_gains; unsigned int* ee_n_piers; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(struct ath5k_eeprom_info *VAR_0, unsigned int VAR_1)
{
 static const unsigned int VAR_2[] = { 4, 6, 9, 12 };
 unsigned int VAR_3;

 VAR_3 = VAR_2[VAR_0->ee_pd_gains[VAR_1] - 1];
 VAR_3 *= VAR_0->ee_n_piers[VAR_1];

 return VAR_3;
}
