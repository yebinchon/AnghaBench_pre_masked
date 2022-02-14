
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {int * shared; } ;
struct wacom_usbdev_data {int shared; int list; struct usb_device* dev; int kref; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct wacom_usbdev_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct wacom_usbdev_data* FUNC_5 (struct usb_device*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct wacom_wac *VAR_4,
     struct usb_device *VAR_5)
{
 struct wacom_usbdev_data *VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_3);

 VAR_6 = FUNC_5(VAR_5);
 if (!VAR_6) {
  VAR_6 = FUNC_1(sizeof(struct wacom_usbdev_data), VAR_1);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   goto out;
  }

  FUNC_0(&VAR_6->kref);
  VAR_6->dev = VAR_5;
  FUNC_2(&VAR_6->list, &VAR_2);
 }

 VAR_4->shared = &VAR_6->shared;

out:
 FUNC_4(&VAR_3);
 return VAR_7;
}
