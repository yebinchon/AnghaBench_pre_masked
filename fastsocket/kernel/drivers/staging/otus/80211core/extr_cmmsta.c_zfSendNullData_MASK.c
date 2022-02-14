
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_5__ {int txUnicastFrm; } ;
struct TYPE_4__ {int* bssid; scalar_t__ wmeConnected; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ commTally; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_0 (int *,int*,int,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,int*,int*,int ,int *,int ,int ) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_8, u8_t VAR_9)
{
    zbuf_t* VAR_10;


    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13[(34+8+1)/2];
    u16_t VAR_14[3] = {0xffff,0xffff,0xffff};
    u16_t *VAR_15;

    FUNC_6(VAR_8);

    if ((VAR_10 = FUNC_2(VAR_8, 1024)) == ((void*)0))
    {
        FUNC_5(VAR_1, "Alloc mm buf Fail!");
        return;
    }

    FUNC_4(VAR_8, VAR_10, 0);



    if ( VAR_7->wlanMode == VAR_2)
    {
        VAR_15 = VAR_14;
    }
    else
    {
        VAR_15 = VAR_7->sta.bssid;
    }

    if (VAR_7->sta.wmeConnected != 0)
    {

        VAR_12 = FUNC_1(VAR_8, VAR_6, VAR_15, VAR_13, 0, VAR_10, 0, 0);
    }
    else
    {
        VAR_12 = FUNC_1(VAR_8, VAR_5, VAR_15, VAR_13, 0, VAR_10, 0, 0);
    }

    if (VAR_7->wlanMode == VAR_3)
    {
        VAR_13[4] |= 0x0100;
    }

    if ( VAR_9 == 1 )
    {
        VAR_13[4] |= 0x1000;
    }
    VAR_7->commTally.txUnicastFrm++;

    if ((VAR_11 = FUNC_0(VAR_8, VAR_13, VAR_12, ((void*)0), 0, ((void*)0), 0, VAR_10, 0,
            VAR_0, 0, 0xff)) != VAR_4)
    {
        goto zlError;
    }


    return;

zlError:

    FUNC_3(VAR_8, VAR_10, 0);
    return;

}
