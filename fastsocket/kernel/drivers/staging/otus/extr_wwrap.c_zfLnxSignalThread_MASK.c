
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
struct usbdrv_private {int kevent_ready; int kevent; int kevent_flags; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

void FUNC_3(zdev_t *VAR_0, int VAR_1)
{
    struct usbdrv_private *VAR_2 = VAR_0->ml_priv;

    if (VAR_2 == ((void*)0))
    {
        FUNC_0("macp is NULL\n");
        return;
    }

    if (0 && VAR_2->kevent_ready != 1)
    {
        FUNC_0("Kevent not ready\n");
        return;
    }

    FUNC_2(VAR_1, &VAR_2->kevent_flags);

    if (!FUNC_1(&VAR_2->kevent))
    {


    }
}
