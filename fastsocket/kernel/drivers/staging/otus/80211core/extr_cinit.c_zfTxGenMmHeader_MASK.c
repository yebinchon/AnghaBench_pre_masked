
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
struct TYPE_3__ {int currentFrequency; int* bssid; scalar_t__ wepStatus; scalar_t__ encryMode; scalar_t__ keyId; } ;
struct TYPE_4__ {scalar_t__ wlanMode; int frequency; int* macAddr; TYPE_1__ sta; int mmseq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_15, u8_t VAR_16, u16_t* VAR_17,
        u16_t* VAR_18, u16_t VAR_19, zbuf_t* VAR_20, u16_t VAR_21, u8_t VAR_22)
{

    u8_t VAR_23 = 32;

    FUNC_2(VAR_15);

    FUNC_0();



    VAR_18[0] = 24+VAR_19+4;
    if ((VAR_17[0] & 0x1) != 0)
    {
        VAR_18[1] = 0xc;
    }
    else
    {
        VAR_18[1] = 0x8;
    }

    if (VAR_14->wlanMode == VAR_2)
    {
        if (VAR_14->frequency < 3000)
        {

            VAR_18[2] = 0x0f00;
            VAR_18[3] = 0x0000;
        }
        else
        {

            VAR_18[2] = 0x0f01;
            VAR_18[3] = 0x000B;
        }
    }
    else
    {
        if (VAR_14->sta.currentFrequency < 3000)
        {

            VAR_18[2] = 0x0f00;
            VAR_18[3] = 0x0001;
        }
        else
        {

            VAR_18[2] = 0x0f01;
            VAR_18[3] = 0x000B;
        }
    }


    VAR_18[4+0] = VAR_16;

    VAR_18[4+1] = 0;

    if (VAR_14->wlanMode == VAR_4)
    {
        if ( VAR_16 == VAR_11 )
        {
            VAR_18[4+8] = 0xFFFF;
            VAR_18[4+9] = 0xFFFF;
            VAR_18[4+10] = 0xFFFF;
        }
        else if ( VAR_16 == VAR_10 ) {

        }
        else
        {
            VAR_18[4+8] = VAR_14->sta.bssid[0];
            VAR_18[4+9] = VAR_14->sta.bssid[1];
            VAR_18[4+10] = VAR_14->sta.bssid[2];
        }
    }
    else if (VAR_14->wlanMode == VAR_5)
    {

        VAR_18[4+8] = 0;
        VAR_18[4+9] = 0;
        VAR_18[4+10] = 0;
    }
    else if (VAR_14->wlanMode == VAR_3)
    {
        VAR_18[4+8] = VAR_14->sta.bssid[0];
        VAR_18[4+9] = VAR_14->sta.bssid[1];
        VAR_18[4+10] = VAR_14->sta.bssid[2];

        if ( VAR_16 == VAR_9 )
        {


            VAR_18[2] |= VAR_0;
        }
    }
    else if (VAR_14->wlanMode == VAR_2)
    {

        VAR_18[4+8] = VAR_14->macAddr[0];
        VAR_18[4+9] = VAR_14->macAddr[1];



        VAR_18[4+10] = VAR_14->macAddr[2] + (VAR_21<<8);





        if (VAR_16 == VAR_11)
        {
            VAR_18[4+8] = 0xFFFF;
            VAR_18[4+9] = 0xFFFF;
            VAR_18[4+10] = 0xFFFF;
        }
    }


    VAR_18[4+2] = VAR_17[0];
    VAR_18[4+3] = VAR_17[1];
    VAR_18[4+4] = VAR_17[2];


    VAR_18[4+5] = VAR_14->macAddr[0];
    VAR_18[4+6] = VAR_14->macAddr[1];
    if (VAR_14->wlanMode == VAR_2)
    {



        VAR_18[4+7] = VAR_14->macAddr[2] + (VAR_21<<8);

    }
    else
    {
        VAR_18[4+7] = VAR_14->macAddr[2];
    }


    FUNC_1(VAR_15);
    VAR_18[4+11] = ((VAR_14->mmseq++)<<4);
    FUNC_3(VAR_15);

    if( VAR_16 == VAR_13 )
    {

        VAR_18[4+12] = 0x0;
        VAR_23+=2;
        VAR_18[0]+=2;
    }

    if ( VAR_22 )
    {
        if ( VAR_14->sta.wepStatus == VAR_1 )
        {
            if ( (VAR_14->sta.encryMode == VAR_8)||
                 (VAR_14->sta.encryMode == VAR_6)||
                 (VAR_14->sta.encryMode == VAR_7) )
            {
                VAR_18[4] |= 0x4000;
                VAR_18[16] = 0x0;
                VAR_18[17] = 0x0;
                VAR_18[17] |= (((u16_t) VAR_14->sta.keyId) << 14);
                VAR_23 += 4;

                VAR_18[0] += 8;
                VAR_18[1] |= 0x40;
             }
        }
    }


    if ( VAR_16 != VAR_12 )
    {
        VAR_18[1] |= 0x200;
    }

    return VAR_23;
}
