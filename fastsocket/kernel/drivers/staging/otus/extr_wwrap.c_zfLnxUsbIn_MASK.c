
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
struct TYPE_7__ {int data; } ;
typedef TYPE_2__ zbuf_t ;
typedef int urb_t ;
typedef int u32_t ;
struct usbdrv_private {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int ,TYPE_1__*) ;

u32_t FUNC_1(zdev_t* VAR_4, urb_t *VAR_5, zbuf_t *VAR_6)
{
    u32_t VAR_7;
    struct usbdrv_private *VAR_8 = VAR_4->ml_priv;


    VAR_7 = FUNC_0(VAR_5, VAR_8->udev, VAR_1,
            VAR_0, VAR_6->data, VAR_2,
            VAR_3, VAR_4);




    return VAR_7;
}
