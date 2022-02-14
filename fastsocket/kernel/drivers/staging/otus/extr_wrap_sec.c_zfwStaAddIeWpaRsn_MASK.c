
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct usbdrv_private {scalar_t__* supIe; } ;


 int FUNC_0 (TYPE_1__*,int *,scalar_t__*,int ,scalar_t__) ;

u16_t FUNC_1(zdev_t* VAR_0, zbuf_t* VAR_1, u16_t VAR_2, u8_t VAR_3)
{
    struct usbdrv_private *VAR_4 = VAR_0->ml_priv;

    if (VAR_4->supIe[1] != 0)
    {
        FUNC_0(VAR_0, VAR_1, VAR_4->supIe, VAR_2, VAR_4->supIe[1]+2);

        VAR_2 += (VAR_4->supIe[1]+2);
    }

    return VAR_2;
}
