
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u16_t ;
struct usbdrv_private {int TxUrbHead; int TxUrbCnt; int cs_lock; int TxUrbTail; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(zdev_t *VAR_1)
{
    struct usbdrv_private *VAR_2 = VAR_1->ml_priv;
    u16_t VAR_3;
    unsigned long VAR_4;

    FUNC_1(&VAR_2->cs_lock, VAR_4);

    VAR_3 = ((VAR_2->TxUrbHead + 1) & (VAR_0 - 1));


    if (VAR_2->TxUrbCnt < VAR_0)
    {
        VAR_2->TxUrbHead = VAR_3;
        VAR_2->TxUrbCnt++;
    }
    else
    {
        FUNC_0("UsbTxUrbQ inconsistent: TxUrbHead: %d, TxUrbTail: %d\n",
                VAR_2->TxUrbHead, VAR_2->TxUrbTail);
    }

    FUNC_2(&VAR_2->cs_lock, VAR_4);
}
