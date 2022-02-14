
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_5__ {int counter; int* ledMode; scalar_t__ txTraffic; scalar_t__ rxTraffic; } ;
struct TYPE_4__ {scalar_t__ bChannelScan; scalar_t__ bAutoReconnect; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__ ledStruct; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_3)
{
    FUNC_4(VAR_3);

    if (FUNC_3(VAR_3) != VAR_0)
    {

        if(VAR_2->ledStruct.counter % 2 != 0)
     {






            return;
        }

        if (((VAR_2->state == VAR_1) && (VAR_2->sta.bChannelScan))
            || ((VAR_2->state != VAR_1) && (VAR_2->sta.bAutoReconnect)))
        {

            FUNC_1(VAR_3, 0);
        }
        else
        {

            FUNC_0(VAR_3, 0, 0);
            FUNC_0(VAR_3, 1, 0);
        }
    }
    else
    {
        if( VAR_2->sta.bChannelScan )
        {

            if(VAR_2->ledStruct.counter % 2 != 0)
                return;
            FUNC_1(VAR_3, 1);
            return;
        }

        if ((FUNC_2(VAR_3)) && ((VAR_2->ledStruct.ledMode[0] & 0x8) == 0))
        {

            FUNC_0(VAR_3, 0, 0);
            FUNC_0(VAR_3, 1, 0);
        }
        else
        {

            if ((VAR_2->ledStruct.counter & 1) == 0)
            {

                FUNC_0(VAR_3, 0, 1);
                FUNC_0(VAR_3, 1, 1);
            }
            else
            {
                if ((VAR_2->ledStruct.txTraffic > 0) || (VAR_2->ledStruct.rxTraffic > 0))
                {





                    VAR_2->ledStruct.txTraffic = VAR_2->ledStruct.rxTraffic = 0;
                    FUNC_0(VAR_3, 0, 0);
                    FUNC_0(VAR_3, 1, 0);
                }
            }
        }
    }
}
