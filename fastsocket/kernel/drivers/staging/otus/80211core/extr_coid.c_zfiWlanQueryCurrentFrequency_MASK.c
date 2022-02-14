
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_3__ {int currentFrequency; } ;
struct TYPE_4__ {int supportMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u32_t FUNC_3(zdev_t* VAR_3, u8_t VAR_4)
{
    u32_t VAR_5;

    FUNC_2(VAR_3);

    switch (VAR_4)
    {
    case 0:
        if (VAR_2->sta.currentFrequency > 3000)
        {
            if (VAR_2->supportMode & VAR_1)
            {
                VAR_5 = VAR_2->sta.currentFrequency;
            }
            else if (VAR_2->supportMode & VAR_0)
            {
                VAR_5 = FUNC_0(VAR_3);
            }
            else
            {
                VAR_5 = 0;
            }
        }
        else
        {
            if (VAR_2->supportMode & VAR_0)
            {
                VAR_5 = VAR_2->sta.currentFrequency;
            }
            else if (VAR_2->supportMode & VAR_1)
            {
                VAR_5 = FUNC_1(VAR_3);
            }
            else
            {
                VAR_5 = 0;
            }
        }
        break;

    case 1:
        VAR_5 = VAR_2->sta.currentFrequency;
        break;

    default:
        VAR_5 = 0;
    }

    return (VAR_5*1000);
}
