
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsHpPriv {int * usbAcSendBytes; int usbSendBytes; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int*,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int*,int,int*,int,int*,int,int *,int) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int *,int,int) ;

u16_t FUNC_12(zdev_t* VAR_5, u16_t* VAR_6, u16_t VAR_7,
                u16_t* VAR_8, u16_t VAR_9,
                u16_t* VAR_10, u16_t VAR_11, zbuf_t* VAR_12, u16_t VAR_13,
                u16_t VAR_14, u8_t VAR_15, u8_t VAR_16)
{
    struct zsHpPriv* VAR_17;

    FUNC_8(VAR_5);
    VAR_17=VAR_4->hpPrivate;

    FUNC_6(VAR_2, "zfHpSend(), len = ", 12 + VAR_7-8 + VAR_9 + FUNC_3(VAR_5, VAR_12) + 4 + 8);


    FUNC_0(VAR_5, VAR_6, VAR_12);


    VAR_17->usbSendBytes += FUNC_3(VAR_5, VAR_12);
    VAR_17->usbAcSendBytes[VAR_15&0x3] += FUNC_3(VAR_5, VAR_12);


    FUNC_5(VAR_5, VAR_1, (u8_t *)VAR_6, VAR_7,
                  (u8_t *)VAR_8, VAR_9, (u8_t *)VAR_10, VAR_11, VAR_12, VAR_13);
    return VAR_3;
}
