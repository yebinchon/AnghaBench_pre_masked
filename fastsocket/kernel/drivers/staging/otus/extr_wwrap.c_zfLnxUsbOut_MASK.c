
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_2__ zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_7__ {int (* zfcbUsbOutComplete ) (TYPE_2__*,int *,int ,int *) ;} ;
struct usbdrv_private {TYPE_1__ usbCbFunctions; } ;


 int FUNC_0 (TYPE_2__*,int *,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int *,int ,int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

u32_t FUNC_3(zdev_t* VAR_0, u8_t *VAR_1, u16_t VAR_2, u8_t *VAR_3, u16_t VAR_4,
        u8_t *VAR_5, u16_t VAR_6, zbuf_t *VAR_7, u16_t VAR_8)
{
    u32_t VAR_9;
    struct usbdrv_private *VAR_10 = VAR_0->ml_priv;





    if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8) == 0xffff)
    {



        VAR_10->usbCbFunctions.zfcbUsbOutComplete(VAR_0, VAR_7, 0, VAR_1);
        return 0xffff;
    }



    VAR_9 = FUNC_2(VAR_0);
    return VAR_9;
}
