
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct pvr2_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pvr2_context* FUNC_0 (struct usb_interface*,struct usb_device_id const*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct usb_interface*,struct pvr2_context*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_4,
       const struct usb_device_id *VAR_5)
{
 struct pvr2_context *VAR_6;


 VAR_6 = FUNC_0(VAR_4,VAR_5,VAR_3);
 if (!VAR_6) {
  FUNC_1(VAR_1,
      "Failed to create hdw handler");
  return -VAR_0;
 }

 FUNC_1(VAR_2,"pvr_probe(pvr=%p)",VAR_6);

 FUNC_2(VAR_4, VAR_6);

 return 0;
}
