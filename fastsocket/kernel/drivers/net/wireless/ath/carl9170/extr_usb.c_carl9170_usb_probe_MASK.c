
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int driver_info; } ;
struct usb_device {int dev; } ;
struct ar9170 {struct usb_device* udev; int rx_pool_urbs; int rx_anch_urbs; int rx_work_urbs; int tx_anch_urbs; int tx_cmd_urbs; int usb_tasklet; int fw_load_wait; int fw_boot_wait; int cmd_wait; int tx_err; int tx_cmd; int tx_anch; int tx_wait; int rx_work; int rx_pool; int rx_anch; int hw; int features; struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 struct ar9170* FUNC_4 (int) ;
 int FUNC_5 (struct ar9170*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int ,int,int ,int *,int ,struct ar9170*,int ) ;
 int FUNC_10 (int *,int ,unsigned long) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_interface*,struct ar9170*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_6,
         const struct usb_device_id *VAR_7)
{
 struct ar9170 *VAR_8;
 struct usb_device *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_12(FUNC_8(VAR_6));
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_4(sizeof(*VAR_8));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_8(VAR_6);
 FUNC_11(VAR_9);
 VAR_8->udev = VAR_9;
 VAR_8->intf = VAR_6;
 VAR_8->features = VAR_7->driver_info;

 FUNC_13(VAR_6, VAR_8);
 FUNC_2(VAR_8->hw, &VAR_6->dev);

 FUNC_7(&VAR_8->rx_anch);
 FUNC_7(&VAR_8->rx_pool);
 FUNC_7(&VAR_8->rx_work);
 FUNC_7(&VAR_8->tx_wait);
 FUNC_7(&VAR_8->tx_anch);
 FUNC_7(&VAR_8->tx_cmd);
 FUNC_7(&VAR_8->tx_err);
 FUNC_6(&VAR_8->cmd_wait);
 FUNC_6(&VAR_8->fw_boot_wait);
 FUNC_6(&VAR_8->fw_load_wait);
 FUNC_10(&VAR_8->usb_tasklet, VAR_5,
       (unsigned long)VAR_8);

 FUNC_3(&VAR_8->tx_cmd_urbs, 0);
 FUNC_3(&VAR_8->tx_anch_urbs, 0);
 FUNC_3(&VAR_8->rx_work_urbs, 0);
 FUNC_3(&VAR_8->rx_anch_urbs, 0);
 FUNC_3(&VAR_8->rx_pool_urbs, 0);

 FUNC_11(VAR_8->udev);

 FUNC_5(VAR_8, VAR_1);

 return FUNC_9(VAR_3, 1, VAR_0,
  &VAR_8->udev->dev, VAR_2, VAR_8, VAR_4);
}
