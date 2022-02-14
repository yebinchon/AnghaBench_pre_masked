
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u32_t ;
struct TYPE_3__ {int bssid; scalar_t__ connectState; int connectTimer; scalar_t__ leapEnabled; } ;
struct TYPE_4__ {TYPE_1__ sta; int tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int *,int ,int ,int,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_7, u8_t VAR_8)
{
    u32_t VAR_9, VAR_10;
    u8_t VAR_11;

    FUNC_4(VAR_7);
    FUNC_2();


    if ( VAR_8 )
    {

        VAR_11 = VAR_4;
        FUNC_1("ZM_STA_CONN_STATE_AUTH_SHARE_1");
        VAR_9 = VAR_2;
    }
    else
    {

        VAR_11 = VAR_3;
        FUNC_1("ZM_STA_CONN_STATE_AUTH_OPEN");
        if( VAR_6->sta.leapEnabled )
            VAR_9 = VAR_0;
        else
            VAR_9 = VAR_1;
    }


    VAR_10 = 0x0;

    FUNC_3(VAR_7);
    VAR_6->sta.connectTimer = VAR_6->tick;
    VAR_6->sta.connectState = VAR_11;
    FUNC_5(VAR_7);


    FUNC_0(VAR_7, VAR_5, VAR_6->sta.bssid, VAR_9, VAR_10, 0);

    return;
}
