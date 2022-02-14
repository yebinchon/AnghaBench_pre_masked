
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsBssInfo {int* wpaIe; int* rsnIe; } ;
struct TYPE_3__ {scalar_t__ wepStatus; int authMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_7, struct zsBssInfo* VAR_8)
{
    u8_t VAR_9=VAR_1;
    u8_t VAR_10;
    u8_t VAR_11;
    u16_t VAR_12 = 0;

    FUNC_0(VAR_7);

    if ( VAR_6->sta.wepStatus == VAR_4 )
    {
        VAR_12 = VAR_5;
    }
    else if ( VAR_6->sta.wepStatus == VAR_3 )
    {
        VAR_12 = VAR_2;
    }

    switch(VAR_6->sta.authMode)
    {
        case 131:
        case 128:
            if ( VAR_8->wpaIe[1] == 0 )
            {
                VAR_9 = VAR_0;
                break;
            }

            VAR_10 = VAR_8->wpaIe[12];
            for(VAR_11=0; VAR_11 < VAR_10; VAR_11++)
            {
                if ( VAR_8->wpaIe[17 + 4*VAR_11] == VAR_12 )
                {
                    VAR_9 = VAR_1;
                    goto done;
                }
            }

            VAR_9 = VAR_0;
            break;

        case 130:
        case 129:
            if ( VAR_8->rsnIe[1] == 0 )
            {
                VAR_9 = VAR_0;
                break;
            }

            VAR_10 = VAR_8->rsnIe[8];
            for(VAR_11=0; VAR_11 < VAR_10; VAR_11++)
            {
                if ( VAR_8->rsnIe[13 + 4*VAR_11] == VAR_12 )
                {
                    VAR_9 = VAR_1;
                    goto done;
                }
            }

            VAR_9 = VAR_0;
            break;
    }

done:
    return VAR_9;
}
