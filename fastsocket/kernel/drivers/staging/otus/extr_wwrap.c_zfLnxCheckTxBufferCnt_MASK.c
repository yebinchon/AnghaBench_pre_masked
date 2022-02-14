
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u16_t ;
struct usbdrv_private {int cs_lock; int TxBufCnt; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

u16_t FUNC_2(zdev_t *VAR_0)
{
    struct usbdrv_private *VAR_1 = VAR_0->ml_priv;
    u16_t VAR_2;
    unsigned long VAR_3;

    FUNC_0(&VAR_1->cs_lock, VAR_3);

    VAR_2 = VAR_1->TxBufCnt;

    FUNC_1(&VAR_1->cs_lock, VAR_3);
    return VAR_2;
}
