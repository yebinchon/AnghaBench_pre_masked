
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int reset_resume; int dev; } ;
struct hif_device_usb {int fw_name; struct usb_device* udev; int fw_done; struct usb_device_id const* usb_device_id; struct usb_interface* interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct hif_device_usb*) ;
 struct hif_device_usb* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,int ,int *,int ,struct hif_device_usb*,int ) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_interface*,struct hif_device_usb*) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_7,
          const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_4(VAR_7);
 struct hif_device_usb *VAR_10;
 int VAR_11 = 0;

 if (VAR_8->driver_info == VAR_4)
  return FUNC_8(VAR_7);

 VAR_10 = FUNC_6(sizeof(struct hif_device_usb), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err_alloc;
 }

 FUNC_9(VAR_9);

 VAR_10->udev = VAR_9;
 VAR_10->interface = VAR_7;
 VAR_10->usb_device_id = VAR_8;



 FUNC_11(VAR_7, VAR_10);

 FUNC_3(&VAR_10->fw_done);



 if (FUNC_0(VAR_8->driver_info))
  VAR_10->fw_name = VAR_1;
 else
  VAR_10->fw_name = VAR_2;

 VAR_11 = FUNC_7(VAR_5, 1, VAR_10->fw_name,
          &VAR_10->udev->dev, VAR_3,
          VAR_10, VAR_6);
 if (VAR_11) {
  FUNC_1(&VAR_10->udev->dev,
   "ath9k_htc: Async request for firmware %s failed\n",
   VAR_10->fw_name);
  goto err_fw_req;
 }

 FUNC_2(&VAR_10->udev->dev, "ath9k_htc: Firmware %s requested\n",
   VAR_10->fw_name);

 return 0;

err_fw_req:
 FUNC_11(VAR_7, ((void*)0));
 FUNC_5(VAR_10);
 FUNC_10(VAR_9);
err_alloc:
 return VAR_11;
}
