
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* clip_groups; } ;
struct il_priv {TYPE_2__ _3945; scalar_t__ eeprom; } ;
struct il3945_eeprom_txpower_group {int saturation_power; } ;
struct il3945_eeprom {struct il3945_eeprom_txpower_group* groups; } ;
typedef scalar_t__ s8 ;
typedef int s32 ;
struct TYPE_3__ {scalar_t__ clip_powers; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,int) ;



 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_2)
{
 u32 VAR_3;
 s32 VAR_4;
 struct il3945_eeprom *VAR_5 = (struct il3945_eeprom *)VAR_2->eeprom;
 const struct il3945_eeprom_txpower_group *VAR_6;

 FUNC_0("Initializing factory calib info from EEPROM\n");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  s8 *VAR_7;
  s8 VAR_8;
  VAR_6 = &VAR_5->groups[VAR_3];


  if (VAR_6->saturation_power < 40) {
   FUNC_1("Error: saturation power is %d, "
    "less than minimum expected 40\n",
    VAR_6->saturation_power);
   return;
  }
  VAR_7 = (s8 *) VAR_2->_3945.clip_groups[VAR_3].clip_powers;


  VAR_8 = (s8) (VAR_6->saturation_power >> 1);


  for (VAR_4 = 0; VAR_4 < VAR_1;
       VAR_4++, VAR_7++) {
   switch (VAR_4) {
   case 130:
    if (VAR_3 == 0)
     *VAR_7 = VAR_8;
    else
     *VAR_7 = VAR_8 - 5;
    break;
   case 129:
    if (VAR_3 == 0)
     *VAR_7 = VAR_8 - 7;
    else
     *VAR_7 = VAR_8 - 10;
    break;
   case 128:
    if (VAR_3 == 0)
     *VAR_7 = VAR_8 - 9;
    else
     *VAR_7 = VAR_8 - 12;
    break;
   default:
    *VAR_7 = VAR_8;
    break;
   }
  }
 }
}
