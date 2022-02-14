
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_eeprom_info {int ee_misc0; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_ee_version; TYPE_1__ ah_capabilities; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ath5k_hw*,int) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,int) ;

__attribute__((used)) static int
FUNC_5(struct ath5k_hw *VAR_4)
{
 struct ath5k_eeprom_info *VAR_5 = &VAR_4->ah_capabilities.cap_eeprom;
 int (*VAR_6)(struct ath5k_hw *VAR_7, int VAR_8);
 int VAR_9;
 int VAR_10;

 if ((VAR_4->ah_ee_version >= VAR_2) &&
   (FUNC_0(VAR_5->ee_misc0) == 1))
  VAR_6 = FUNC_3;
 else if ((VAR_4->ah_ee_version >= VAR_3) &&
   (FUNC_0(VAR_5->ee_misc0) == 2))
  VAR_6 = FUNC_1;
 else
  VAR_6 = FUNC_2;


 for (VAR_9 = VAR_0; VAR_9 <= VAR_1;
 VAR_9++) {
  VAR_10 = VAR_6(VAR_4, VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_4(VAR_4, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return 0;
}
