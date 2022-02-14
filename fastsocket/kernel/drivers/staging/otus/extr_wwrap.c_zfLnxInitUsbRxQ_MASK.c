
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct usbdrv_private {int ** UsbRxBufQ; int * WlanRxDataUrb; scalar_t__ RxBufTail; scalar_t__ RxBufHead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

void FUNC_4(zdev_t* VAR_2)
{
    u16_t VAR_3;
    zbuf_t *VAR_4;
    struct usbdrv_private *VAR_5 = VAR_2->ml_priv;


    FUNC_1(VAR_5->UsbRxBufQ, 0, sizeof(zbuf_t *) * VAR_1);

    VAR_5->RxBufHead = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {

        VAR_4 = FUNC_0(VAR_0);
        VAR_5->UsbRxBufQ[VAR_3] = VAR_4;
    }


    VAR_5->RxBufTail = 0;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        FUNC_2(VAR_2, VAR_5->UsbRxBufQ[VAR_3]);
        FUNC_3(VAR_2, VAR_5->WlanRxDataUrb[VAR_3], VAR_5->UsbRxBufQ[VAR_3]);
    }
}
