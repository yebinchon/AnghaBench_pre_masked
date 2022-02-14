
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct usbdrv_private {int regUsbWriteBuf; int udev; int RegOutUrb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int ,TYPE_1__*,int) ;

u32_t FUNC_3(zdev_t* VAR_3, u32_t* VAR_4, u16_t VAR_5)
{
    struct usbdrv_private *VAR_6 = VAR_3->ml_priv;
    u32_t VAR_7;
    FUNC_1(VAR_6->regUsbWriteBuf, VAR_4, VAR_5);



    VAR_7 = FUNC_2(VAR_6->RegOutUrb, VAR_6->udev,
            VAR_1, VAR_0, VAR_6->regUsbWriteBuf,
            VAR_5, VAR_2, VAR_3, 1);

    return VAR_7;
}
