
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef scalar_t__ u32_t ;
struct usbdrv_private {int cs_lock; scalar_t__ TxBufCnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

u32_t FUNC_2(zdev_t* VAR_1)
{
    struct usbdrv_private *VAR_2 = VAR_1->ml_priv;
    u32_t VAR_3;
    unsigned long VAR_4;



    FUNC_0(&VAR_2->cs_lock, VAR_4);

    VAR_3 = VAR_0 - VAR_2->TxBufCnt;


    FUNC_1(&VAR_2->cs_lock, VAR_4);

    return VAR_3;
}
