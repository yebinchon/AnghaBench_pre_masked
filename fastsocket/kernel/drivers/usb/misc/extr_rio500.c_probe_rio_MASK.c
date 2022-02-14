
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int devnum; } ;
struct rio_usb_data {int present; int lock; void* ibuf; void* obuf; struct usb_device* rio_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,void*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 struct rio_usb_data VAR_4 ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int VAR_5 ;
 int FUNC_9 (struct usb_interface*,struct rio_usb_data*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_6,
       const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_3(VAR_6);
 struct rio_usb_data *VAR_9 = &VAR_4;
 int VAR_10;

 FUNC_1(&VAR_6->dev, "USB Rio found at address %d\n", VAR_8->devnum);

 VAR_10 = FUNC_8(VAR_6, &VAR_5);
 if (VAR_10) {
  FUNC_2("Not able to get a minor for this device.");
  return -VAR_0;
 }

 VAR_9->rio_dev = VAR_8;

 if (!(VAR_9->obuf = FUNC_5(VAR_3, VAR_1))) {
  FUNC_2("probe_rio: Not enough memory for the output buffer");
  FUNC_7(VAR_6, &VAR_5);
  return -VAR_0;
 }
 FUNC_0("probe_rio: obuf address:%p", VAR_9->obuf);

 if (!(VAR_9->ibuf = FUNC_5(VAR_2, VAR_1))) {
  FUNC_2("probe_rio: Not enough memory for the input buffer");
  FUNC_7(VAR_6, &VAR_5);
  FUNC_4(VAR_9->obuf);
  return -VAR_0;
 }
 FUNC_0("probe_rio: ibuf address:%p", VAR_9->ibuf);

 FUNC_6(&(VAR_9->lock));

 FUNC_9 (VAR_6, VAR_9);
 VAR_9->present = 1;

 return 0;
}
