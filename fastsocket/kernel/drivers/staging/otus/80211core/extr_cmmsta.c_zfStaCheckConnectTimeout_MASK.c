
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ connectState; scalar_t__ connectTimer; int failCntOfReasso; scalar_t__ authMode; int bssid; int connectTimeoutCount; scalar_t__ connectByReasso; } ;
struct TYPE_4__ {scalar_t__ wlanMode; scalar_t__ tick; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_11)
{
    FUNC_5(VAR_11);
    FUNC_3();

    if ( VAR_10->wlanMode != VAR_3 )
    {
        return;
    }

    if ( !FUNC_1(VAR_11) )
    {
        return;
    }

    FUNC_4(VAR_11);
    if ( (VAR_10->sta.connectState == VAR_6)||
         (VAR_10->sta.connectState == VAR_7)||
         (VAR_10->sta.connectState == VAR_8)||
         (VAR_10->sta.connectState == VAR_5) )
    {
        if ( (VAR_10->tick - VAR_10->sta.connectTimer) > VAR_2 )
        {
            if ( VAR_10->sta.connectByReasso )
            {
                VAR_10->sta.failCntOfReasso++;
                if ( VAR_10->sta.failCntOfReasso > 2 )
                {
                    VAR_10->sta.connectByReasso = VAR_0;
                }
            }

            VAR_10->sta.connectState = VAR_9;
            FUNC_2("connect timeout, state = ", VAR_10->sta.connectState);

            goto failed;
        }
    }

    FUNC_6(VAR_11);
    return;

failed:
    FUNC_6(VAR_11);
    if(VAR_10->sta.authMode == VAR_1)
 {
            VAR_10->sta.connectTimeoutCount++;
 }
    FUNC_0(VAR_11, VAR_4, VAR_10->sta.bssid, 2);
    return;
}
