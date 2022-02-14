
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
typedef int s8_t ;
struct TYPE_5__ {scalar_t__* bssid; TYPE_1__* oppositeInfo; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ aliveCounter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int *,int ,scalar_t__*,int) ;
 int FUNC_1 (int *,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,scalar_t__) ;

void FUNC_10(zdev_t* VAR_7, zbuf_t* VAR_8)
{
    u16_t VAR_9[3];

    FUNC_7(VAR_7);
    FUNC_5();


    if ( VAR_6->wlanMode == VAR_1 )
    {
        VAR_9[0] = FUNC_9(VAR_7, VAR_8, VAR_5);
        VAR_9[1] = FUNC_9(VAR_7, VAR_8, VAR_5+2);
        VAR_9[2] = FUNC_9(VAR_7, VAR_8, VAR_5+4);
   if ((VAR_9[0] == VAR_6->sta.bssid[0]) && (VAR_9[1] == VAR_6->sta.bssid[1]) && (VAR_9[2] == VAR_6->sta.bssid[2]))
        {
            if (FUNC_4(VAR_7, VAR_8) >= 24+2)
            {
                if ( FUNC_2(VAR_7) )
                {
                    FUNC_0(VAR_7, VAR_3, VAR_6->sta.bssid, 2);
                }
                else if (FUNC_3(VAR_7))
                {
                    FUNC_0(VAR_7, VAR_2, VAR_6->sta.bssid, 3);
                }
                else
                {
                }
            }
        }
    }
    else if ( VAR_6->wlanMode == VAR_0 )
    {
        u16_t VAR_10[3];
        u8_t VAR_11;
        s8_t VAR_12;

        if ( FUNC_2(VAR_7) )
        {
            VAR_10[0] = FUNC_9(VAR_7, VAR_8, VAR_4);
            VAR_10[1] = FUNC_9(VAR_7, VAR_8, VAR_4+2);
            VAR_10[2] = FUNC_9(VAR_7, VAR_8, VAR_4+4);

            FUNC_6(VAR_7);
            VAR_12 = FUNC_1(VAR_7, VAR_10, &VAR_11);
            if ( VAR_12 == 0 )
            {
                VAR_6->sta.oppositeInfo[VAR_11].aliveCounter = 0;
            }
            FUNC_8(VAR_7);
        }
    }
}
