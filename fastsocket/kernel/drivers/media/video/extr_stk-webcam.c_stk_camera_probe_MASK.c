
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_6__ {int brightness; int mode; int palette; int hflip; int vflip; } ;
struct stk_camera {int frame_size; int sio_full; int sio_avail; TYPE_3__ vsettings; scalar_t__ isoc_ep; scalar_t__ n_sbufs; struct usb_interface* interface; struct usb_device* udev; int wait_frame; int spinlock; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct stk_camera*) ;
 struct stk_camera* FUNC_5 (int,int ) ;
 int FUNC_6 (struct stk_camera*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct stk_camera*) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_10 (struct usb_endpoint_descriptor*) ;
 int FUNC_11 (struct usb_interface*) ;
 int FUNC_12 (struct usb_interface*,struct stk_camera*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_7,
  const struct usb_device_id *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 struct stk_camera *VAR_11 = ((void*)0);
 struct usb_device *VAR_12 = FUNC_3(VAR_7);
 struct usb_host_interface *VAR_13;
 struct usb_endpoint_descriptor *VAR_14;

 VAR_11 = FUNC_5(sizeof(struct stk_camera), VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_1("Out of memory !\n");
  return -VAR_1;
 }

 FUNC_7(&VAR_11->spinlock);
 FUNC_2(&VAR_11->wait_frame);

 VAR_11->udev = VAR_12;
 VAR_11->interface = VAR_7;
 FUNC_11(VAR_7);

 VAR_11->vsettings.vflip = VAR_6;
 VAR_11->vsettings.hflip = VAR_5;
 VAR_11->n_sbufs = 0;
 FUNC_6(VAR_11);




 VAR_13 = VAR_7->cur_altsetting;

 for (VAR_9 = 0; VAR_9 < VAR_13->desc.bNumEndpoints; ++VAR_9) {
  VAR_14 = &VAR_13->endpoint[VAR_9].desc;

  if (!VAR_11->isoc_ep
   && FUNC_9(VAR_14)) {

   VAR_11->isoc_ep = FUNC_10(VAR_14);
   break;
  }
 }
 if (!VAR_11->isoc_ep) {
  FUNC_1("Could not find isoc-in endpoint");
  VAR_10 = -VAR_0;
  goto error;
 }
 VAR_11->vsettings.brightness = 0x7fff;
 VAR_11->vsettings.palette = VAR_4;
 VAR_11->vsettings.mode = VAR_3;
 VAR_11->frame_size = 640 * 480 * 2;

 FUNC_0(&VAR_11->sio_avail);
 FUNC_0(&VAR_11->sio_full);

 FUNC_12(VAR_7, VAR_11);

 VAR_10 = FUNC_8(VAR_11);
 if (VAR_10) {
  goto error;
 }

 return 0;

error:
 FUNC_4(VAR_11);
 return VAR_10;
}
