
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct sd {int dummy; } ;
struct gspca_dev {int vdev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct usb_interface*,struct usb_device_id const*,int *,int,int ) ;
 int VAR_2 ;
 struct gspca_dev* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_3,
    const struct usb_device_id *VAR_4)
{
 struct gspca_dev *VAR_5;
 s32 VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4,
   &VAR_2, sizeof(struct sd), VAR_1);

 if (VAR_6 >= 0) {
  VAR_5 = FUNC_2(VAR_3);

  FUNC_0(VAR_0,
   "Camera is now controlling video device %s",
   FUNC_3(&VAR_5->vdev));
 }

 return VAR_6;
}
