
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ath5k_eeprom_info {int ee_header; int ee_misc4; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ath5k_eeprom_info*,int) ;

__attribute__((used)) static unsigned int
FUNC_4(struct ath5k_eeprom_info *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->ee_misc4);

 switch (VAR_3) {
 case 128:
  if (FUNC_2(VAR_2->ee_header))
   VAR_4 += FUNC_3(VAR_2,
     129) +
     VAR_0 / 2;

 case 129:
  if (FUNC_1(VAR_2->ee_header))
   VAR_4 += FUNC_3(VAR_2,
     130) +
     VAR_1 / 2;

 case 130:
  break;
 default:
  break;
 }

 return VAR_4;
}
