
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u32_t ;
struct usbdrv_private {int regUsbReadBuf; int udev; int RegInUrb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,TYPE_1__*,int) ;

u32_t FUNC_1(zdev_t *VAR_4)
{
    u32_t VAR_5;
    struct usbdrv_private *VAR_6 = VAR_4->ml_priv;
    VAR_5 = FUNC_0(VAR_6->RegInUrb, VAR_6->udev,
            VAR_1, VAR_0, VAR_6->regUsbReadBuf,
            VAR_2, VAR_3, VAR_4, 1);

    return VAR_5;
}
