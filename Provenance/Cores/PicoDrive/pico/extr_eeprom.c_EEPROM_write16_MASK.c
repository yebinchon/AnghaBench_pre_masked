
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int eeprom_status; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;

void FUNC_4(unsigned int VAR_3)
{

  if (FUNC_2() - VAR_2 < 16) {

    FUNC_3(VAR_0, "eeprom: skip because cycles=%i",
        FUNC_2() - VAR_2);
    FUNC_0(VAR_3);
  } else {
    int VAR_4 = VAR_1.m.eeprom_status;
    FUNC_1(VAR_4 >> 6);
    FUNC_0(VAR_3);
    if ((VAR_4 ^ VAR_1.m.eeprom_status) & 0xc0)
      VAR_2 = FUNC_2();
  }
}
