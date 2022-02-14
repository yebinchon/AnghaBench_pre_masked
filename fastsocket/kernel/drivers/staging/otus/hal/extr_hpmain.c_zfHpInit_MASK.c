
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int* ledMode; int slotType; int aggPktNum; int enableBBHeavyClip; int hwBBHeavyClip; scalar_t__ setValueHeavyClip; scalar_t__ doBBHeavyClip; scalar_t__ usbRxTransferLen; scalar_t__ usbRxPadLen; scalar_t__ usbRxPktLen; scalar_t__ usbRxRemainLen; int * remainBuf; scalar_t__ eepromImageRdReq; scalar_t__ eepromImageIndex; scalar_t__ rxStrongRSSI; scalar_t__ strongRSSI; scalar_t__ disableDfsCh; scalar_t__ hwExtOffset; scalar_t__ hwBw40; scalar_t__ hwFrequency; int halCapability; } ;
struct TYPE_2__ {scalar_t__ modeMDKEnable; int * hpPrivate; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_10 ;
 int FUNC_12 (int *) ;

u16_t FUNC_13(zdev_t* VAR_11, u32_t VAR_12)
{
    u16_t VAR_13;
    FUNC_12(VAR_11);


    VAR_3->hpPrivate = &VAR_10;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->halCapability = VAR_1;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->hwFrequency = 0;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->hwBw40 = 0;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->hwExtOffset = 0;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->disableDfsCh = 0;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->ledMode[0] = 1;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->ledMode[1] = 1;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->strongRSSI = 0;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->rxStrongRSSI = 0;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->slotType = 1;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->aggPktNum = 0x10000a;

    ((struct zsHpPriv*)VAR_3->hpPrivate)->eepromImageIndex = 0;


    ((struct zsHpPriv*)VAR_3->hpPrivate)->eepromImageRdReq = 0;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->enableBBHeavyClip = 1;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->hwBBHeavyClip = 1;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->doBBHeavyClip = 0;
    ((struct zsHpPriv*)VAR_3->hpPrivate)->setValueHeavyClip = 0;



    FUNC_5(VAR_11);


    FUNC_10(VAR_11);




    if (VAR_3->modeMDKEnable)
    {

        if ((VAR_13 = FUNC_1(VAR_11, (u32_t*)VAR_4,
                (u32_t)VAR_5, VAR_0)) != VAR_2)
        {


        }
    }
    else
    {


        if ((VAR_13 = FUNC_1(VAR_11, (u32_t*)VAR_8,
                (u32_t)VAR_9, VAR_0)) != VAR_2)
        {


        }
    }
    if(!VAR_3->modeMDKEnable)
    {

        FUNC_6(VAR_11);



        FUNC_7(VAR_11, VAR_12, 0);


        FUNC_8(VAR_11, VAR_12);
    }


    FUNC_3(VAR_11, 0xAABBCCDD);

    return 0;
}
