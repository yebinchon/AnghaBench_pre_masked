
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
struct zsHpPriv {int dummy; } ;
struct TYPE_5__ {struct zsHpPriv* hpPrivate; } ;
struct TYPE_4__ {scalar_t__ bChannel; scalar_t__ flag; } ;
typedef TYPE_1__ CAL_CTL_EDGES ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (int *) ;

u32_t FUNC_2(zdev_t* VAR_4, u32_t VAR_5, CAL_CTL_EDGES *VAR_6, u8_t VAR_7)
{
    u32_t VAR_8 = 0;
    u8_t VAR_9;
    u8_t VAR_10;
    struct zsHpPriv* VAR_11;

    FUNC_1(VAR_4);

    VAR_11 = VAR_3->hpPrivate;

    if(VAR_5 > VAR_2)
        VAR_10 = 0;
    else
        VAR_10 = 1;


    if (VAR_7)
    {
        VAR_8 |= 0xf0;
    }


    for (VAR_9 = 0; (VAR_9 < VAR_1) && (VAR_6[VAR_9].bChannel != VAR_0) ; VAR_9++)
    {
        if (VAR_5 == FUNC_0(VAR_6[VAR_9].bChannel, VAR_10))
        {
            if (VAR_6[VAR_9].flag == 0)
            {
                VAR_8 |= 0xf;
            }
            break;
        }
    }


    return VAR_8;
}
