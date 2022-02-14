
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
struct zsHpPriv {int * eepromImage; } ;
struct ar5416Eeprom {size_t* ctlIndex; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_2, u8_t VAR_3)
{
    u8_t VAR_4;
    struct zsHpPriv* VAR_5;
    struct ar5416Eeprom* VAR_6;

    FUNC_0(VAR_2);

    VAR_5 = VAR_1->hpPrivate;

    VAR_6 = (struct ar5416Eeprom*)&(VAR_5->eepromImage[(1024+512)/4]);


    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        if(VAR_3 == VAR_6->ctlIndex[VAR_4])
            break;
    }
    return VAR_4;
}
