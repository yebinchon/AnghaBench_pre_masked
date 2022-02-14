
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int last_temperature; scalar_t__ eeprom; } ;
struct il3945_eeprom {TYPE_1__* groups; } ;
struct TYPE_2__ {int temperature; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct il_priv*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_1)
{
 struct il3945_eeprom *VAR_2 = (struct il3945_eeprom *)VAR_1->eeprom;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);



 FUNC_0("Temperature: %d\n", VAR_3 + VAR_0);


 if (FUNC_3(VAR_3)) {
  FUNC_1("Error bad temperature value  %d\n", VAR_3);



  if (VAR_1->last_temperature > 100)
   VAR_3 = VAR_2->groups[2].temperature;
  else
   VAR_3 = VAR_1->last_temperature;
 }

 return VAR_3;
}
