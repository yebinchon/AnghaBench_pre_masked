
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
struct zsHpPriv {int * eepromImage; } ;
struct ar5416Eeprom {int dummy; } ;
struct TYPE_5__ {struct zsHpPriv* hpPrivate; } ;
struct TYPE_4__ {scalar_t__ bChannel; size_t tPower; scalar_t__ flag; } ;
typedef TYPE_1__ CAL_CTL_EDGES ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

u8_t FUNC_4(zdev_t* VAR_5, CAL_CTL_EDGES *VAR_6, u32_t VAR_7)
{
    u8_t VAR_8;
    u8_t VAR_9;
    u8_t VAR_10;
    struct zsHpPriv* VAR_11;
    struct ar5416Eeprom* VAR_12;

    FUNC_3(VAR_5);

    VAR_11 = VAR_4->hpPrivate;

    VAR_12 = (struct ar5416Eeprom*)&(VAR_11->eepromImage[(1024+512)/4]);

    if(VAR_7 > VAR_3)
        VAR_10 = 0;
    else
        VAR_10 = 1;

    VAR_9 = VAR_1;


    for (VAR_8 = 0; (VAR_8 < VAR_2) && (VAR_6[VAR_8].bChannel != VAR_0) ; VAR_8++)
    {




        if (VAR_7 == FUNC_0(VAR_6[VAR_8].bChannel, VAR_10))
        {
            VAR_9 = VAR_6[VAR_8].tPower;



            break;
        }
        else if ((VAR_8 > 0) && (VAR_7 < FUNC_0(VAR_6[VAR_8].bChannel, VAR_10)))
        {
            if (FUNC_0(VAR_6[VAR_8 - 1].bChannel, VAR_10) < VAR_7 && VAR_6[VAR_8 - 1].flag)
            {
                VAR_9 = VAR_6[VAR_8 - 1].tPower;



            }

            break;
        }

    }

    if( VAR_8 == VAR_2 )
    {
        if (VAR_7 > FUNC_0(VAR_6[VAR_8 - 1].bChannel, VAR_10) && VAR_6[VAR_8 - 1].flag)
        {
            VAR_9 = VAR_6[VAR_8 - 1].tPower;



        }
    }

    FUNC_1(VAR_9 > 0);







    return VAR_9;
}
