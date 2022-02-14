
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; int device_type; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {struct usb_host_interface* endpoint; } ;
struct hid_descriptor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct usb_host_interface*,int ,struct hid_descriptor**) ;
 int FUNC_2 (struct usb_interface*,struct hid_descriptor*,struct wacom_features*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_5,
  struct wacom_features *VAR_6)
{
 int VAR_7 = 0;
 struct usb_host_interface *VAR_8 = VAR_5->cur_altsetting;
 struct hid_descriptor *VAR_9;


 VAR_6->device_type = VAR_0;


 if ((VAR_6->type != VAR_3) && (VAR_6->type != VAR_4))
  goto out;

 if (FUNC_1(VAR_8, VAR_1, &VAR_9)) {
  if (FUNC_1(&VAR_8->endpoint[0],
    VAR_2, &VAR_9)) {
   FUNC_0("wacom: can not retrieve extra class descriptor\n");
   VAR_7 = 1;
   goto out;
  }
 }
 VAR_7 = FUNC_2(VAR_5, VAR_9, VAR_6);
 if (VAR_7)
  goto out;

 out:
 return VAR_7;
}
