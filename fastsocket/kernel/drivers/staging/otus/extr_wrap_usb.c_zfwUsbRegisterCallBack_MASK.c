
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_2__ zdev_t ;
struct zfCbUsbFuncTbl {int zfcbUsbOutComplete; int zfcbUsbRegIn; int zfcbUsbRecv; } ;
struct TYPE_4__ {int zfcbUsbOutComplete; int zfcbUsbRegIn; int zfcbUsbRecv; } ;
struct usbdrv_private {TYPE_1__ usbCbFunctions; } ;



void FUNC_0(zdev_t* VAR_0, struct zfCbUsbFuncTbl *VAR_1) {
    struct usbdrv_private *VAR_2 = VAR_0->ml_priv;

    VAR_2->usbCbFunctions.zfcbUsbRecv = VAR_1->zfcbUsbRecv;
    VAR_2->usbCbFunctions.zfcbUsbRegIn = VAR_1->zfcbUsbRegIn;
    VAR_2->usbCbFunctions.zfcbUsbOutComplete = VAR_1->zfcbUsbOutComplete;

    return;
}
