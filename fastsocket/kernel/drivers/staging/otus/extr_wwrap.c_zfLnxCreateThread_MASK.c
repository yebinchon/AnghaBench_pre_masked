
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u8_t ;
struct usbdrv_private {int ioctl_sem; int kevent; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

u8_t FUNC_2(zdev_t *VAR_1)
{
    struct usbdrv_private *VAR_2 = VAR_1->ml_priv;


    FUNC_0(&VAR_2->kevent, VAR_0);
    FUNC_1(&VAR_2->ioctl_sem);

    return 0;
}
