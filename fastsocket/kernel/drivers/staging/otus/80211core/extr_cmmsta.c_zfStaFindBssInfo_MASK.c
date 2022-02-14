
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsWlanProbeRspFrameHeader {scalar_t__* bssid; int* ssid; } ;
struct zsBssInfo {scalar_t__* bssid; int* ssid; int frequency; struct zsBssInfo* next; } ;
struct TYPE_4__ {scalar_t__ bssCount; struct zsBssInfo* head; } ;
struct TYPE_5__ {int currentFrequency; TYPE_1__ bssList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;

struct zsBssInfo* FUNC_5(zdev_t* VAR_2, zbuf_t* VAR_3, struct zsWlanProbeRspFrameHeader *VAR_4)
{
    u8_t VAR_5;
    u8_t VAR_6;
    u8_t VAR_7;
    u8_t VAR_8, VAR_9, VAR_10;
    u16_t VAR_11, VAR_12;
    struct zsBssInfo* VAR_13;

    FUNC_3(VAR_2);

    if ((VAR_13 = VAR_1->sta.bssList.head) == ((void*)0))
    {
        return ((void*)0);
    }

    for( VAR_5=0; VAR_5<VAR_1->sta.bssList.bssCount; VAR_5++ )
    {



        for( VAR_6=0; VAR_6<6; VAR_6++ )
        {
            if ( VAR_13->bssid[VAR_6] != VAR_4->bssid[VAR_6] )
            {
                break;
            }
        }


        if (VAR_6 == 6)
        {
            if (VAR_4->ssid[1] <= 32)
            {

                VAR_8 = 1;
    if((VAR_4->ssid[1] != 0) && (VAR_13->ssid[1] != 0))
    {
                for( VAR_7=1; VAR_7<VAR_4->ssid[1] + 1; VAR_7++ )
                {
                    if ( VAR_13->ssid[VAR_7] != VAR_4->ssid[VAR_7] )
                    {
                        VAR_8 = 0;
                        break;
                    }
                }
            }
            }
            else
            {
                VAR_8 = 0;
            }
        }
        else
        {
            VAR_8 = 0;
        }



        if (VAR_8) {
            if ((VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_0)) != 0xffff) {
                if ((VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_11+1)) == 1) {
                    VAR_10 = FUNC_4(VAR_2, VAR_3, VAR_11+2);
                    if (FUNC_2(VAR_2, FUNC_0(VAR_2, VAR_10, 0)) == 0) {
                        VAR_12 = 0;
                    } else {
                        VAR_12 = FUNC_0(VAR_2, VAR_10, 0);;
                    }
                } else {
                    VAR_12 = 0;
                }
            } else {
                VAR_12 = VAR_1->sta.currentFrequency;
            }

            if (VAR_12 != 0) {
                if ( ((VAR_12 > 3000) && (VAR_13->frequency > 3000))
                     || ((VAR_12 < 3000) && (VAR_13->frequency < 3000)) ) {

                    break;
                }
            }
        }

        VAR_13 = VAR_13->next;
    }

    if ( VAR_5 == VAR_1->sta.bssList.bssCount )
    {
        VAR_13 = ((void*)0);
    }

    return VAR_13;
}
