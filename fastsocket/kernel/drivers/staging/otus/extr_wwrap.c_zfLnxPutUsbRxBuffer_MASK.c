
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef int u16_t ;
struct usbdrv_private {int RxBufTail; int RxBufCnt; int cs_lock; int RxBufHead; int ** UsbRxBufQ; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

u32_t FUNC_3(zdev_t *VAR_1, zbuf_t *VAR_2)
{
    struct usbdrv_private *VAR_3 = VAR_1->ml_priv;
    u16_t VAR_4;
    unsigned long VAR_5;

    FUNC_1(&VAR_3->cs_lock, VAR_5);

    VAR_4 = ((VAR_3->RxBufTail+1) & (VAR_0 - 1));


    if (VAR_3->RxBufCnt != VAR_0)
    {
        VAR_3->UsbRxBufQ[VAR_3->RxBufTail] = VAR_2;
        VAR_3->RxBufTail = VAR_4;
        VAR_3->RxBufCnt++;
    }
    else
    {
        FUNC_0("RxBufQ inconsistent: RxBufHead: %d, RxBufTail: %d\n",
                VAR_3->RxBufHead, VAR_3->RxBufTail);
        FUNC_2(&VAR_3->cs_lock, VAR_5);
        return 0xffff;
    }

    FUNC_2(&VAR_3->cs_lock, VAR_5);
    return 0;
}
