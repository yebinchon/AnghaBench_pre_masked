
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_6__* altsetting; int num_altsetting; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int idProduct; int idVendor; } ;
struct usb_device {TYPE_4__* config; } ;
struct sd_desc {int (* config ) (struct gspca_dev*,struct usb_device_id const*) ;int (* init ) (struct gspca_dev*) ;} ;
struct module {int dummy; } ;
struct TYPE_18__ {int * parent; } ;
struct TYPE_17__ {int * ctrls; } ;
struct gspca_dev {int audio; int nbufread; int empty_packet; int present; struct gspca_dev* usb_buf; scalar_t__ input_dev; TYPE_8__ vdev; struct module* module; int wq; int queue_lock; int usb_lock; TYPE_7__ cam; struct sd_desc const* sd_desc; int nbalt; int iface; struct usb_device* dev; } ;
struct TYPE_15__ {scalar_t__ bInterfaceClass; } ;
struct TYPE_16__ {TYPE_5__ desc; } ;
struct TYPE_13__ {int bNumInterfaces; } ;
struct TYPE_14__ {struct usb_interface** interface; TYPE_3__ desc; } ;
struct TYPE_11__ {int bInterfaceNumber; } ;
struct TYPE_12__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct gspca_dev*) ;
 struct gspca_dev* FUNC_10 (int ,int ) ;
 struct gspca_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_8__*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct gspca_dev*,struct usb_device_id const*) ;
 int FUNC_15 (struct gspca_dev*) ;
 int FUNC_16 (struct usb_interface*,struct gspca_dev*) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (TYPE_8__*,int ,int) ;

int FUNC_19(struct usb_interface *VAR_7,
  const struct usb_device_id *VAR_8,
  const struct sd_desc *VAR_9,
  int VAR_10,
  struct module *VAR_11)
{
 struct gspca_dev *VAR_12;
 struct usb_device *VAR_13 = FUNC_8(VAR_7);
 int VAR_14;

 FUNC_0(VAR_0, "probing %04x:%04x", VAR_8->idVendor, VAR_8->idProduct);


 if (VAR_10 < sizeof *VAR_12)
  VAR_10 = sizeof *VAR_12;
 VAR_12 = FUNC_11(VAR_10, VAR_2);
 if (!VAR_12) {
  FUNC_2("couldn't kzalloc gspca struct");
  return -VAR_1;
 }
 VAR_12->usb_buf = FUNC_10(VAR_3, VAR_2);
 if (!VAR_12->usb_buf) {
  FUNC_2("out of memory");
  VAR_14 = -VAR_1;
  goto out;
 }
 VAR_12->dev = VAR_13;
 VAR_12->iface = VAR_7->cur_altsetting->desc.bInterfaceNumber;
 VAR_12->nbalt = VAR_7->num_altsetting;


 if (VAR_13->config->desc.bNumInterfaces != 1) {
  int VAR_15;
  struct usb_interface *VAR_16;

  for (VAR_15 = 0; VAR_15 < VAR_13->config->desc.bNumInterfaces; VAR_15++) {
   VAR_16 = VAR_13->config->interface[VAR_15];
   if (VAR_16 != ((void*)0)
    && VAR_16->altsetting != ((void*)0)
    && VAR_16->altsetting->desc.bInterfaceClass ==
      VAR_4) {
    VAR_12->audio = 1;
    break;
   }
  }
 }

 VAR_12->sd_desc = VAR_9;
 VAR_12->nbufread = 2;
 VAR_12->empty_packet = -1;


 VAR_14 = VAR_9->config(VAR_12, VAR_8);
 if (VAR_14 < 0)
  goto out;
 if (VAR_12->cam.ctrls != ((void*)0))
  FUNC_1(VAR_12);
 VAR_14 = VAR_9->init(VAR_12);
 if (VAR_14 < 0)
  goto out;
 FUNC_5(VAR_12);

 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14)
  goto out;

 FUNC_13(&VAR_12->usb_lock);
 FUNC_13(&VAR_12->queue_lock);
 FUNC_6(&VAR_12->wq);


 FUNC_12(&VAR_12->vdev, &VAR_6, sizeof VAR_6);
 VAR_12->vdev.parent = &VAR_7->dev;
 VAR_12->module = VAR_11;
 VAR_12->present = 1;
 VAR_14 = FUNC_18(&VAR_12->vdev,
      VAR_5,
      -1);
 if (VAR_14 < 0) {
  FUNC_2("video_register_device err %d", VAR_14);
  goto out;
 }

 FUNC_16(VAR_7, VAR_12);
 FUNC_0(VAR_0, "%s created", FUNC_17(&VAR_12->vdev));

 FUNC_4(VAR_12);

 return 0;
out:




 FUNC_9(VAR_12->usb_buf);
 FUNC_9(VAR_12);
 return VAR_14;
}
