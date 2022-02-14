
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int apBitmap; scalar_t__* hideSsid; int* ssidLen; scalar_t__** ssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int*,int,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

void FUNC_5(zdev_t* VAR_7, zbuf_t* VAR_8, u16_t* VAR_9)
{
    u16_t VAR_10;
    u8_t VAR_11;
    u16_t VAR_12, VAR_13;
    u16_t VAR_14;

    FUNC_3(VAR_7);


    if ((VAR_6->wlanMode != VAR_2) || (VAR_6->wlanMode != VAR_3))
    {
        FUNC_2(VAR_0, "Ignore probe req");
        return;
    }


    if ((VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_4)) == 0xffff)
    {
        FUNC_2(VAR_0, "probe req SSID not found");
        return;
    }

    VAR_11 = FUNC_4(VAR_7, VAR_8, VAR_10+1);

    for (VAR_12=0; VAR_12<VAR_1; VAR_12++)
    {
        if ((VAR_6->ap.apBitmap & (VAR_12<<VAR_12)) != 0)
        {
            VAR_14 = 0;

            if ((VAR_11 == 0) && (VAR_6->ap.hideSsid[VAR_12] == 0))
            {
                VAR_14 = 1;
            }

            else if (VAR_6->ap.ssidLen[VAR_12] == VAR_11)
            {
                for (VAR_13=0; VAR_13<VAR_11; VAR_13++)
                {
                    if (FUNC_4(VAR_7, VAR_8, VAR_10+1+VAR_13)
                            != VAR_6->ap.ssid[VAR_12][VAR_13])
                    {
                        break;
                    }
                }
                if (VAR_13 == VAR_11)
                {
                    VAR_14 = 1;
                }
            }
            if (VAR_14 == 1)
            {

                FUNC_1(VAR_7, VAR_5, VAR_9, VAR_12, 0, 0);
            }
        }
    }
}
