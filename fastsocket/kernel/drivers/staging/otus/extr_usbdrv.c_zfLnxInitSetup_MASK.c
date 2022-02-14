
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_2__ {unsigned long data; void* function; } ;
struct usbdrv_private {TYPE_1__ hbTimer10ms; int cs_lock; } ;
struct net_device {int* dev_addr; int flags; int * netdev_ops; struct iw_handler_def* wireless_handlers; } ;
struct iw_handler_def {int dummy; } ;


 int VAR_0 ;
 void** VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct net_device*,void**) ;

u8_t FUNC_4(struct net_device *VAR_5, struct usbdrv_private *VAR_6)
{







    FUNC_1(&(VAR_6->cs_lock));
    VAR_5->wireless_handlers = (struct iw_handler_def *)&VAR_3;

    VAR_5->netdev_ops = &VAR_2;

    VAR_5->flags |= VAR_0;

    VAR_5->dev_addr[0] = 0x00;
    VAR_5->dev_addr[1] = 0x03;
    VAR_5->dev_addr[2] = 0x7f;
    VAR_5->dev_addr[3] = 0x11;
    VAR_5->dev_addr[4] = 0x22;
    VAR_5->dev_addr[5] = 0x33;


    FUNC_0(&VAR_6->hbTimer10ms);
    VAR_6->hbTimer10ms.data = (unsigned long)VAR_5;
    VAR_6->hbTimer10ms.function = (void *)&VAR_4;



    FUNC_2();

    return 1;
}
