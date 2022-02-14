
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
struct TYPE_3__ {int vapNumber; int* ssidLen; int** ssid; scalar_t__* wlanType; scalar_t__ uapsdEnabled; int* wpaSupport; int* stawpaLen; int * stawpaIe; } ;
struct TYPE_4__ {TYPE_1__ ap; int (* zfcbCencAsocNotify ) (int *,int*,int ,int,int) ;int (* zfcbAsocNotify ) (int *,int*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *,int*,int ,int,int) ;
 int FUNC_1 (int *,int*,int ,int,int) ;
 int FUNC_2 (int *,int*,int ,int,int) ;
 TYPE_2__* VAR_15 ;
 int FUNC_3 (int *,int*,int ,int,int,int,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int ,int,int) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int,int ) ;
 int FUNC_8 (int *,int ,int*,int,int,int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int) ;

void FUNC_14(zdev_t* VAR_16, zbuf_t* VAR_17, u16_t* VAR_18, u16_t VAR_19)
{
    u16_t VAR_20 = 0xffff;
    u8_t VAR_21;
    u16_t VAR_22;
    u8_t VAR_23 = 0;
    u8_t VAR_24 = 0;
    u8_t VAR_25 = 0;
    u8_t VAR_26;
    u16_t VAR_27, VAR_28, VAR_29;
    u16_t VAR_30 = 0;

    FUNC_12(VAR_16);

    if ((VAR_22 = FUNC_6(VAR_16, VAR_17, VAR_7)) != 0xffff)
    {
        VAR_29 = 0;
        for (VAR_28 = 0; VAR_28 < VAR_15->ap.vapNumber; VAR_28++)
        {
            if ((VAR_26 = FUNC_11(VAR_16, VAR_17, VAR_22+1))
                        != VAR_15->ap.ssidLen[VAR_28])
            {
                VAR_29++;
            }
        }
        if (VAR_29 == VAR_15->ap.vapNumber)
        {
            goto zlDeauth;
        }

        VAR_29 = 0;
        for (VAR_28 = 0; VAR_28 < VAR_15->ap.vapNumber; VAR_28++)
        {
            for (VAR_27=0; VAR_27<VAR_15->ap.ssidLen[VAR_28]; VAR_27++)
            {
                if ((VAR_26 = FUNC_11(VAR_16, VAR_17, VAR_22+2+VAR_27))
                        != VAR_15->ap.ssid[VAR_28][VAR_27])
                {
                    break;
                }
            }
            if (VAR_27 == VAR_15->ap.ssidLen[VAR_28])
            {
                VAR_19 = VAR_28;
            }
            else
            {
                VAR_29++;
            }
        }
        if (VAR_29 == VAR_15->ap.vapNumber)
        {
            goto zlDeauth;
        }
    }




    if ((VAR_22 = FUNC_6(VAR_16, VAR_17, VAR_4)) != 0xffff)
    {

        VAR_23 = 1;
    }

    if ((VAR_22 = FUNC_6(VAR_16, VAR_17, VAR_5)) != 0xffff)
    {

        VAR_23 = 2;
    }


    if (VAR_15->ap.wlanType[VAR_19] == VAR_14 && VAR_23 == 0)
    {
        FUNC_8(VAR_16, VAR_11, VAR_18, 3, 0, 0);
        return;
    }


    if (VAR_15->ap.wlanType[VAR_19] == VAR_13 && VAR_23 == 1)
    {
        VAR_23 = 0;
    }





    if ((VAR_22 = FUNC_7(VAR_16, VAR_17, 2, 0)) != 0xffff)
    {

        VAR_24 = 1;
        FUNC_9(VAR_0, "WME STA");

        if (VAR_15->ap.uapsdEnabled != 0)
        {
            VAR_25 = FUNC_13(VAR_16, VAR_17, VAR_22+8);
        }
    }

    if (VAR_15->ap.wpaSupport[VAR_19] == 1)
    {
        if ( (VAR_22 = FUNC_6(VAR_16, VAR_17, VAR_8)) != 0xffff )
        {

            u8_t VAR_31 = FUNC_13(VAR_16, VAR_17, VAR_22+1);
            if (VAR_31+2 < VAR_1)
            {
                FUNC_5(VAR_16, VAR_17, VAR_15->ap.stawpaIe[VAR_19], VAR_22, VAR_31+2);
                VAR_15->ap.stawpaLen[VAR_19] = VAR_31+2;
                VAR_30 = 1;


                FUNC_10(VAR_0, "WPA Mode zfwAsocNotify, apId=", VAR_19);


                if (VAR_15->zfcbAsocNotify != ((void*)0))
                {
                    VAR_15->zfcbAsocNotify(VAR_16, VAR_18, VAR_15->ap.stawpaIe[VAR_19], VAR_15->ap.stawpaLen[VAR_19], VAR_19);
                }
            }
            else
            {
                goto zlDeauth;
            }
        }
        else if ( (VAR_22 = FUNC_6(VAR_16, VAR_17, VAR_6)) != 0xffff )
        {

            u8_t VAR_32 = FUNC_13(VAR_16, VAR_17, VAR_22+1);
            if (VAR_32+2 < VAR_1)
            {
                FUNC_5(VAR_16, VAR_17, VAR_15->ap.stawpaIe[VAR_19], VAR_22, VAR_32+2);
                VAR_15->ap.stawpaLen[VAR_19] = VAR_32+2;
                VAR_30 = 1;

                FUNC_10(VAR_0, "RSN Mode zfwAsocNotify, apId=", VAR_19);


                if (VAR_15->zfcbAsocNotify != ((void*)0))
                {
                    VAR_15->zfcbAsocNotify(VAR_16, VAR_18, VAR_15->ap.stawpaIe[VAR_19], VAR_15->ap.stawpaLen[VAR_19], VAR_19);
                }
            }
            else
            {
                goto zlDeauth;
            }
        }
        else
        {
            FUNC_8(VAR_16, VAR_11, VAR_18, 6, 0, 0);
            return;
        }
    }

    if ((VAR_15->ap.wpaSupport[VAR_19] == 0) && (VAR_30 == 1))
    {
        FUNC_8(VAR_16, VAR_11, VAR_18, 6, 0, 0);
        return;
    }


    VAR_20 = FUNC_3(VAR_16, VAR_18, VAR_2, VAR_19, VAR_23, VAR_24, VAR_25);

    FUNC_4(VAR_16, VAR_17, VAR_20);

zlDeauth:

    if (VAR_20 != 0xffff)
    {
        VAR_21 = FUNC_13(VAR_16, VAR_17, 0);

        if (VAR_21 == VAR_9)
        {
            FUNC_8(VAR_16, VAR_10, VAR_18, 0, VAR_20+1, VAR_19);
        }
        else
        {
            FUNC_8(VAR_16, VAR_12, VAR_18, 0, VAR_20+1, VAR_19);
        }
    }
    else
    {

        FUNC_8(VAR_16, VAR_11, VAR_18, 6, 0, 0);
    }

    return;
}
