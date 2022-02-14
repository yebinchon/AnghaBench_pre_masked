
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
struct TYPE_5__ {int apBitmap; scalar_t__* hideSsid; int* ssidLen; int** ssid; } ;
struct TYPE_4__ {scalar_t__ adapterState; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ ap; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int*,int,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;

void FUNC_6(zdev_t* VAR_8, zbuf_t* VAR_9, u16_t* VAR_10)
{
    u16_t VAR_11;
    u8_t VAR_12;
    u16_t VAR_13, VAR_14;
    u8_t VAR_15;
    u16_t VAR_16;

    FUNC_4(VAR_8);


    if ((VAR_7->wlanMode != VAR_2) && (VAR_7->wlanMode != VAR_3))
    {
        FUNC_2(VAR_0, "Ignore probe req");
        return;
    }

    if ((VAR_7->wlanMode != VAR_2) && (VAR_7->sta.adapterState == VAR_4))
    {
        FUNC_2(VAR_0, "Packets dropped due to disconnect state");
        return;
    }

    if ( VAR_7->wlanMode == VAR_3 )
    {
        FUNC_1(VAR_8, VAR_6, VAR_10, 0, 0, 0);

        return;
    }


    if ((VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_5)) == 0xffff)
    {
        FUNC_2(VAR_0, "probe req SSID not found");
        return;
    }

    VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_11+1);

    for (VAR_13=0; VAR_13<VAR_1; VAR_13++)
    {
        if ((VAR_7->ap.apBitmap & (1<<VAR_13)) != 0)
        {
            FUNC_3(VAR_0, "len=", VAR_12);
            VAR_16 = 0;

            if (VAR_12 == 0)
            {
                if (VAR_7->ap.hideSsid[VAR_13] == 0)
                {
                    VAR_16 = 1;
                }
            }

            else if (VAR_7->ap.ssidLen[VAR_13] == VAR_12)
            {
                for (VAR_14=0; VAR_14<VAR_12; VAR_14++)
                {
                    if ((VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_11+2+VAR_14))
                            != VAR_7->ap.ssid[VAR_13][VAR_14])
                    {
                        break;
                    }
                }
                if (VAR_14 == VAR_12)
                {
                    VAR_16 = 1;
                }
            }
            if (VAR_16 == 1)
            {

                FUNC_1(VAR_8, VAR_6, VAR_10, VAR_13, 0, VAR_13);
            }
        }
    }
}
