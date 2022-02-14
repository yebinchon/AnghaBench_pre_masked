
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int needs_remote_wakeup; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {scalar_t__ bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct usb_device {TYPE_3__ dev; } ;
struct ati_remote2 {struct usb_interface** intf; int name; int phys; int channel_mask; int mode_mask; int ** ep; struct usb_device* udev; } ;
struct TYPE_5__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ati_remote2*) ;
 int FUNC_1 (struct ati_remote2*,int ) ;
 int FUNC_2 (struct ati_remote2*) ;
 int FUNC_3 (struct ati_remote2*) ;
 int VAR_5 ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct ati_remote2*) ;
 struct ati_remote2* FUNC_6 (int,int ) ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct usb_interface*,struct ati_remote2*) ;
 int FUNC_11 (int *,struct usb_interface*) ;
 struct usb_interface* FUNC_12 (struct usb_device*,int) ;
 int FUNC_13 (struct usb_device*,int ,int) ;
 int FUNC_14 (struct usb_interface*,struct ati_remote2*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_7, const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_4(VAR_7);
 struct usb_host_interface *VAR_10 = VAR_7->cur_altsetting;
 struct ati_remote2 *VAR_11;
 int VAR_12;

 if (VAR_10->desc.bInterfaceNumber)
  return -VAR_0;

 VAR_11 = FUNC_6(sizeof (struct ati_remote2), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->udev = VAR_9;

 VAR_11->intf[0] = VAR_7;
 VAR_11->ep[0] = &VAR_10->endpoint[0].desc;

 VAR_11->intf[1] = FUNC_12(VAR_9, 1);
 VAR_12 = FUNC_10(&VAR_4, VAR_11->intf[1], VAR_11);
 if (VAR_12)
  goto fail1;
 VAR_10 = VAR_11->intf[1]->cur_altsetting;
 VAR_11->ep[1] = &VAR_10->endpoint[0].desc;

 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12)
  goto fail2;

 VAR_11->channel_mask = VAR_5;
 VAR_11->mode_mask = VAR_6;

 VAR_12 = FUNC_1(VAR_11, VAR_11->channel_mask);
 if (VAR_12)
  goto fail2;

 FUNC_13(VAR_9, VAR_11->phys, sizeof(VAR_11->phys));
 FUNC_7(VAR_11->phys, "/input0", sizeof(VAR_11->phys));

 FUNC_7(VAR_11->name, "ATI Remote Wonder II", sizeof(VAR_11->name));

 VAR_12 = FUNC_8(&VAR_9->dev.kobj, &VAR_3);
 if (VAR_12)
  goto fail2;

 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12)
  goto fail3;

 FUNC_14(VAR_7, VAR_11);

 VAR_7->needs_remote_wakeup = 1;

 return 0;

 fail3:
 FUNC_9(&VAR_9->dev.kobj, &VAR_3);
 fail2:
 FUNC_2(VAR_11);
 FUNC_11(&VAR_4, VAR_11->intf[1]);
 fail1:
 FUNC_5(VAR_11);

 return VAR_12;
}
