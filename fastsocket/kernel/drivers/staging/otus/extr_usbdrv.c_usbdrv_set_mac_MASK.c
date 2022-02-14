
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int isolate_lock; scalar_t__ driver_isolated; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
    struct usbdrv_private *VAR_2;
    int VAR_3 = -1;

    VAR_2 = VAR_0->ml_priv;
    FUNC_0(&(VAR_2->isolate_lock));

    if (VAR_2->driver_isolated) {
        goto exit;
    }

    VAR_3 = 0;


exit:
    FUNC_1(&(VAR_2->isolate_lock));
    return VAR_3;
}
