
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u32_t ;
typedef int u16_t ;
struct TYPE_6__ {size_t bssidCount; TYPE_1__* bssidInfo; } ;
struct TYPE_7__ {scalar_t__ currentAuthMode; int* wpaIe; scalar_t__ wepStatus; int* rsnIe; TYPE_2__ pmkidInfo; scalar_t__ bssid; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;
struct TYPE_5__ {int* pmkid; scalar_t__ bssid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int FUNC_0 (int *,int *,int*,int,int) ;
 int FUNC_1 (int*,int*,int) ;
 scalar_t__ FUNC_2 (int*,int*,int) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_12, zbuf_t* VAR_13, u16_t VAR_14, u8_t VAR_15)
{
    u32_t VAR_16;
    u8_t VAR_17[64]={

                        0xdd,

                        0x18,

                        0x00, 0x50, 0xf2, 0x01,

                        0x01, 0x00,

                        0x00, 0x50, 0xf2, 0x02,

                        0x01, 0x00,

                        0x00, 0x50, 0xf2, 0x02,

                        0x01, 0x00,

                        0x00, 0x50, 0xf2, 0x02,

                        0x00, 0x00
                    };

    u8_t VAR_18[64]={

                        0x30,

                        0x14,

                        0x01, 0x00,

                        0x00, 0x0f, 0xac, 0x02,

                        0x01, 0x00,

                        0x00, 0x0f, 0xac, 0x02,

                        0x01, 0x00,

                        0x00, 0x0f, 0xac, 0x02,

                        0x00, 0x00
                    };

    FUNC_3(VAR_12);

    if ( VAR_7->sta.currentAuthMode == VAR_3 )
    {

        FUNC_1(VAR_17+8, VAR_7->sta.wpaIe+8, 4);

        if ( VAR_7->sta.wepStatus == VAR_4 )
        {

            FUNC_1(VAR_17+14, VAR_10, 4);
        }

        FUNC_0(VAR_12, VAR_13, VAR_17, VAR_14, VAR_17[1]+2);
        FUNC_1(VAR_7->sta.wpaIe, VAR_17, VAR_17[1]+2);
        VAR_14 += (VAR_17[1]+2);
    }
    else if ( VAR_7->sta.currentAuthMode == VAR_0 )
    {

        FUNC_1(VAR_17+8, VAR_7->sta.wpaIe+8, 4);

        FUNC_1(VAR_17+20, VAR_11, 4);

        if ( VAR_7->sta.wepStatus == VAR_4 )
        {

            FUNC_1(VAR_17+14, VAR_10, 4);
        }

        FUNC_0(VAR_12, VAR_13, VAR_17, VAR_14, VAR_17[1]+2);
        FUNC_1(VAR_7->sta.wpaIe, VAR_17, VAR_17[1]+2);
        VAR_14 += (VAR_17[1]+2);
    }
    else if ( VAR_7->sta.currentAuthMode == VAR_2 )
    {

        FUNC_1(VAR_18+4, VAR_7->sta.rsnIe+4, 4);

        if ( VAR_7->sta.wepStatus == VAR_4 )
        {

            FUNC_1(VAR_18+10, VAR_8, 4);
        }

        if ( VAR_15 == VAR_6 )
        {
            for(VAR_16=0; VAR_16<VAR_7->sta.pmkidInfo.bssidCount; VAR_16++)
            {
                if ( FUNC_2((u8_t*) VAR_7->sta.pmkidInfo.bssidInfo[VAR_16].bssid,
                                     (u8_t*) VAR_7->sta.bssid, 6) )
                {

                    break;
                }

                if ( VAR_16 < VAR_7->sta.pmkidInfo.bssidCount )
                {

                    VAR_18[22] = 0x01;
                    VAR_18[23] = 0x00;


                    FUNC_1(VAR_18+24,
                                 VAR_7->sta.pmkidInfo.bssidInfo[VAR_16].pmkid, 16);
                    VAR_18[1] += 18;
                }
            }
        }

        FUNC_0(VAR_12, VAR_13, VAR_18, VAR_14, VAR_18[1]+2);
        FUNC_1(VAR_7->sta.rsnIe, VAR_18, VAR_18[1]+2);
        VAR_14 += (VAR_18[1]+2);
    }
    else if ( VAR_7->sta.currentAuthMode == VAR_1 )
    {

        FUNC_1(VAR_18+4, VAR_7->sta.rsnIe+4, 4);

        FUNC_1(VAR_18+16, VAR_9, 4);

        if ( VAR_7->sta.wepStatus == VAR_4 )
        {

            FUNC_1(VAR_18+10, VAR_8, 4);
        }

        if (( VAR_15 == VAR_6 || ( VAR_15 == VAR_5 )))
        {

            if (VAR_7->sta.pmkidInfo.bssidCount != 0) {

                VAR_18[22] = 1;
                VAR_18[23] = 0;




                for(VAR_16=0; VAR_16<VAR_7->sta.pmkidInfo.bssidCount; VAR_16++)
                {
                    if ( FUNC_2((u8_t*) VAR_7->sta.pmkidInfo.bssidInfo[VAR_16].bssid, (u8_t*) VAR_7->sta.bssid, 6) )
                    {
                        FUNC_1(VAR_18+24, VAR_7->sta.pmkidInfo.bssidInfo[VAR_16].pmkid, 16);
                        break;
                    }
                }
                VAR_18[1] += 18;
            }

        }

        FUNC_0(VAR_12, VAR_13, VAR_18, VAR_14, VAR_18[1]+2);
        FUNC_1(VAR_7->sta.rsnIe, VAR_18, VAR_18[1]+2);
        VAR_14 += (VAR_18[1]+2);
    }

    return VAR_14;
}
