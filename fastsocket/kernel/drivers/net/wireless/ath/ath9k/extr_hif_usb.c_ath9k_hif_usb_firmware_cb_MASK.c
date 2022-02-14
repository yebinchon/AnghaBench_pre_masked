
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hif_device_usb {int * htc_handle; int fw_done; int flags; TYPE_3__* usb_device_id; TYPE_2__* udev; TYPE_1__* interface; int fw_size; int fw_data; int fw_name; } ;
struct firmware {int size; int data; } ;
struct TYPE_6__ {int driver_info; int idProduct; } ;
struct TYPE_5__ {int product; int dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hif_device_usb*) ;
 int FUNC_1 (struct hif_device_usb*) ;
 int FUNC_2 (struct hif_device_usb*) ;
 int * FUNC_3 (struct hif_device_usb*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct firmware const*) ;

__attribute__((used)) static void FUNC_9(const struct firmware *VAR_3, void *VAR_4)
{
 struct hif_device_usb *VAR_5 = VAR_4;
 int VAR_6;

 if (!VAR_3) {
  FUNC_7(&VAR_5->udev->dev,
   "ath9k_htc: Failed to get firmware %s\n",
   VAR_5->fw_name);
  goto err_fw;
 }

 VAR_5->htc_handle = FUNC_3(VAR_5, &VAR_2,
       &VAR_5->udev->dev);
 if (VAR_5->htc_handle == ((void*)0))
  goto err_dev_alloc;

 VAR_5->fw_data = VAR_3->data;
 VAR_5->fw_size = VAR_3->size;



 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto err_dev_init;

 VAR_6 = FUNC_5(VAR_5->htc_handle,
    &VAR_5->interface->dev,
    VAR_5->usb_device_id->idProduct,
    VAR_5->udev->product,
    VAR_5->usb_device_id->driver_info);
 if (VAR_6) {
  VAR_6 = -VAR_0;
  goto err_htc_hw_init;
 }

 FUNC_8(VAR_3);
 VAR_5->flags |= VAR_1;
 FUNC_6(&VAR_5->fw_done);

 return;

err_htc_hw_init:
 FUNC_0(VAR_5);
err_dev_init:
 FUNC_4(VAR_5->htc_handle);
err_dev_alloc:
 FUNC_8(VAR_3);
err_fw:
 FUNC_2(VAR_5);
}
