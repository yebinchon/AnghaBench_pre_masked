
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int halReInit; scalar_t__ usbRxTransferLen; scalar_t__ usbRxPadLen; scalar_t__ usbRxPktLen; scalar_t__ usbRxRemainLen; int * remainBuf; scalar_t__ rxStrongRSSI; scalar_t__ strongRSSI; } ;
struct TYPE_2__ {scalar_t__ hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *) ;

u16_t FUNC_11(zdev_t* VAR_7, u32_t VAR_8)
{
    u16_t VAR_9;
    FUNC_10(VAR_7);

    ((struct zsHpPriv*)VAR_2->hpPrivate)->halReInit = 1;

    ((struct zsHpPriv*)VAR_2->hpPrivate)->strongRSSI = 0;
    ((struct zsHpPriv*)VAR_2->hpPrivate)->rxStrongRSSI = 0;
    FUNC_4(VAR_7);
    FUNC_0(VAR_7);



    if ((VAR_9 = FUNC_1(VAR_7, (u32_t*)VAR_3,
            (u32_t)VAR_4, VAR_0)) != VAR_1)
    {


    }
    FUNC_5(VAR_7);


    FUNC_6(VAR_7, VAR_8, 0);

    FUNC_7(VAR_7, VAR_8);







    FUNC_2(VAR_7, 0xAABBCCDD);

    return 0;
}
