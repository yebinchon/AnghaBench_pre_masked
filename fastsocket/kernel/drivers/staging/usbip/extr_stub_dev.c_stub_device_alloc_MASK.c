
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct TYPE_3__ {int unusable; int reset; int shutdown; } ;
struct TYPE_4__ {TYPE_1__ eh_ops; int * tcp_socket; int lock; int status; int side; int tcp_tx; int tcp_rx; } ;
struct stub_device {int devid; TYPE_2__ ud; int tx_waitq; int priv_lock; int unlink_tx; int unlink_free; int priv_free; int priv_tx; int priv_init; struct usb_interface* interface; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*) ;
 struct stub_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static struct stub_device *FUNC_11(struct usb_interface *VAR_8)
{
 struct stub_device *VAR_9;
 int VAR_10 = FUNC_4(VAR_8);
 int VAR_11 = FUNC_5(VAR_8);

 FUNC_1(&VAR_8->dev, "allocating stub device");


 VAR_9 = FUNC_6(sizeof(struct stub_device), VAR_0);
 if (!VAR_9) {
  FUNC_2(&VAR_8->dev, "no memory for stub_device\n");
  return ((void*)0);
 }

 VAR_9->interface = VAR_8;






 VAR_9->devid = (VAR_10 << 16) | VAR_11;

 FUNC_9(&VAR_9->ud.tcp_rx, "stub_rx", VAR_5);
 FUNC_9(&VAR_9->ud.tcp_tx, "stub_tx", VAR_7);

 VAR_9->ud.side = VAR_2;
 VAR_9->ud.status = VAR_1;

 FUNC_7(&VAR_9->ud.lock);
 VAR_9->ud.tcp_socket = ((void*)0);

 FUNC_0(&VAR_9->priv_init);
 FUNC_0(&VAR_9->priv_tx);
 FUNC_0(&VAR_9->priv_free);
 FUNC_0(&VAR_9->unlink_free);
 FUNC_0(&VAR_9->unlink_tx);

 FUNC_7(&VAR_9->priv_lock);

 FUNC_3(&VAR_9->tx_waitq);

 VAR_9->ud.eh_ops.shutdown = VAR_6;
 VAR_9->ud.eh_ops.reset = VAR_3;
 VAR_9->ud.eh_ops.unusable = VAR_4;

 FUNC_8(&VAR_9->ud);

 FUNC_10("register new interface\n");
 return VAR_9;
}
