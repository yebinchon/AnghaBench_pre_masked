
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
struct TYPE_3__ {int* bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; int* macAddr; int mmseq; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_6, u16_t* VAR_7,
        u16_t* VAR_8, u16_t VAR_9, zbuf_t* VAR_10, u16_t VAR_11, u8_t VAR_12)
{
    u8_t VAR_13 = 32;


    FUNC_2(VAR_6);

    FUNC_0();





    VAR_8[0] = 24+VAR_9+4;
    VAR_8[1] = 0x8;







    VAR_8[2] = 0x0f01;
    VAR_8[3] = 0x000B;






    VAR_8[4+0] = VAR_4;



    VAR_8[4+1] = 0;

    if (VAR_5->wlanMode == VAR_2)
    {
        VAR_8[4+8] = VAR_5->sta.bssid[0];
        VAR_8[4+9] = VAR_5->sta.bssid[1];
        VAR_8[4+10] = VAR_5->sta.bssid[2];
    }
    else if (VAR_5->wlanMode == VAR_3)
    {

        VAR_8[4+8] = 0;
        VAR_8[4+9] = 0;
        VAR_8[4+10] = 0;
    }
    else if (VAR_5->wlanMode == VAR_1)
    {
        VAR_8[4+8] = VAR_5->sta.bssid[0];
        VAR_8[4+9] = VAR_5->sta.bssid[1];
        VAR_8[4+10] = VAR_5->sta.bssid[2];
    }
    else if (VAR_5->wlanMode == VAR_0)
    {

        VAR_8[4+8] = VAR_5->macAddr[0];
        VAR_8[4+9] = VAR_5->macAddr[1];
        VAR_8[4+10] = VAR_5->macAddr[2] + (VAR_11<<8);
    }


    VAR_8[4+2] = VAR_7[0];
    VAR_8[4+3] = VAR_7[1];
    VAR_8[4+4] = VAR_7[2];


    VAR_8[4+5] = VAR_5->macAddr[0];
    VAR_8[4+6] = VAR_5->macAddr[1];
    if (VAR_5->wlanMode == VAR_0)
    {
        VAR_8[4+7] = VAR_5->macAddr[2] + (VAR_11<<8);
    }
    else
    {
        VAR_8[4+7] = VAR_5->macAddr[2];
    }


    FUNC_1(VAR_6);
    VAR_8[4+11] = ((VAR_5->mmseq++)<<4);
    FUNC_3(VAR_6);


    return VAR_13;
}
