
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int zbuf_t ;
struct usbdrv_private {scalar_t__ RxBufCnt; size_t RxBufHead; int cs_lock; int RxBufTail; int ** UsbRxBufQ; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

zbuf_t *FUNC_3(zdev_t *VAR_1)
{
    struct usbdrv_private *VAR_2 = VAR_1->ml_priv;

    zbuf_t *VAR_3;
    unsigned long VAR_4;

    FUNC_1(&VAR_2->cs_lock, VAR_4);




    if (VAR_2->RxBufCnt != 0)
    {
        VAR_3 = VAR_2->UsbRxBufQ[VAR_2->RxBufHead];
        VAR_2->RxBufHead = ((VAR_2->RxBufHead+1) & (VAR_0 - 1));
        VAR_2->RxBufCnt--;
    }
    else
    {
        FUNC_0("RxBufQ inconsistent: RxBufHead: %d, RxBufTail: %d\n",
                VAR_2->RxBufHead, VAR_2->RxBufTail);
        FUNC_2(&VAR_2->cs_lock, VAR_4);
        return ((void*)0);
    }

    FUNC_2(&VAR_2->cs_lock, VAR_4);
    return VAR_3;
}
