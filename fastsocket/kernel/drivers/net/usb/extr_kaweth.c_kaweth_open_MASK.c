
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct kaweth_device {int opened; int intf; int rx_urb; TYPE_1__* irq_urb; int intbufferhandle; int intbuffer; int dev; } ;
struct TYPE_3__ {int transfer_flags; int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (struct kaweth_device*) ;
 int FUNC_3 (struct kaweth_device*,int ) ;
 struct kaweth_device* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ,int ,int ,struct kaweth_device*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5)
{
 struct kaweth_device *VAR_6 = FUNC_4(VAR_5);
 int VAR_7;

 FUNC_0("Opening network device.");

 VAR_7 = FUNC_7(VAR_6->intf);
 if (VAR_7) {
  FUNC_1("Interface cannot be resumed.");
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7)
  goto err_out;

 FUNC_8(
  VAR_6->irq_urb,
  VAR_6->dev,
  FUNC_10(VAR_6->dev, 3),
  VAR_6->intbuffer,
  VAR_2,
  VAR_4,
  VAR_6,
  250);
 VAR_6->irq_urb->transfer_dma = VAR_6->intbufferhandle;
 VAR_6->irq_urb->transfer_flags |= VAR_3;

 VAR_7 = FUNC_11(VAR_6->irq_urb, VAR_1);
 if (VAR_7) {
  FUNC_9(VAR_6->rx_urb);
  goto err_out;
 }
 VAR_6->opened = 1;

 FUNC_5(VAR_5);

 FUNC_2(VAR_6);
 return 0;

err_out:
 FUNC_6(VAR_6->intf);
 return -VAR_0;
}
