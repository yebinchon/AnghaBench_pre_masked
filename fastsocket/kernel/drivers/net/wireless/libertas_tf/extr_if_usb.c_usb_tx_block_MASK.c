
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ u8 ;
struct urb {int transfer_flags; } ;
struct if_usb_card {TYPE_2__* udev; int ep_out; struct urb* cmd_urb; struct urb* tx_urb; TYPE_1__* priv; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ surpriseremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct urb*,TYPE_2__*,int ,int *,int ,int ,struct if_usb_card*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_7(struct if_usb_card *VAR_4, uint8_t *VAR_5,
   uint16_t VAR_6, u8 VAR_7)
{
 int VAR_8 = -1;
 struct urb *VAR_9;

 FUNC_0(VAR_1);

 if (VAR_4->priv->surpriseremoved) {
  FUNC_3(&VAR_4->udev->dev, "Device removed\n");
  goto tx_ret;
 }

 if (VAR_7)
  VAR_9 = VAR_4->tx_urb;
 else
  VAR_9 = VAR_4->cmd_urb;

 FUNC_4(VAR_9, VAR_4->udev,
     FUNC_5(VAR_4->udev,
       VAR_4->ep_out),
     VAR_5, VAR_6, VAR_3, VAR_4);

 VAR_9->transfer_flags |= VAR_2;

 if (FUNC_6(VAR_9, VAR_0)) {
  FUNC_3(&VAR_4->udev->dev,
   "usb_submit_urb failed: %d\n", VAR_8);
  goto tx_ret;
 }

 FUNC_2(&VAR_4->udev->dev, "usb_submit_urb success\n");

 VAR_8 = 0;

tx_ret:
 FUNC_1(VAR_1);
 return VAR_8;
}
