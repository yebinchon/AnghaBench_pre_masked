
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_lcd {size_t bulk_in_size; int kref; TYPE_4__* udev; scalar_t__ bulk_out_endpointAddr; scalar_t__ bulk_in_endpointAddr; int bulk_in_buffer; struct usb_interface* interface; int submitted; int limit_sem; } ;
struct usb_interface {int minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_7__ {int bcdDevice; int idProduct; } ;
struct TYPE_8__ {int devnum; TYPE_3__ descriptor; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct usb_lcd* FUNC_8 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_12 (struct usb_endpoint_descriptor*) ;
 TYPE_4__* FUNC_13 (int ) ;
 int FUNC_14 (struct usb_interface*,int *) ;
 int FUNC_15 (struct usb_interface*,struct usb_lcd*) ;

__attribute__((used)) static int FUNC_16(struct usb_interface *VAR_6, const struct usb_device_id *VAR_7)
{
 struct usb_lcd *VAR_8 = ((void*)0);
 struct usb_host_interface *VAR_9;
 struct usb_endpoint_descriptor *VAR_10;
 size_t VAR_11;
 int VAR_12;
 int VAR_13 = -VAR_1;


 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_2("Out of memory");
  goto error;
 }
 FUNC_6(&VAR_8->kref);
 FUNC_10(&VAR_8->limit_sem, VAR_3);
 FUNC_3(&VAR_8->submitted);

 VAR_8->udev = FUNC_13(FUNC_4(VAR_6));
 VAR_8->interface = VAR_6;

 if (FUNC_9(VAR_8->udev->descriptor.idProduct) != 0x0001) {
  FUNC_1(&VAR_6->dev, "USBLCD model not supported.\n");
  VAR_13 = -VAR_0;
  goto error;
 }



 VAR_9 = VAR_6->cur_altsetting;
 for (VAR_12 = 0; VAR_12 < VAR_9->desc.bNumEndpoints; ++VAR_12) {
  VAR_10 = &VAR_9->endpoint[VAR_12].desc;

  if (!VAR_8->bulk_in_endpointAddr &&
      FUNC_11(VAR_10)) {

   VAR_11 = FUNC_9(VAR_10->wMaxPacketSize);
   VAR_8->bulk_in_size = VAR_11;
   VAR_8->bulk_in_endpointAddr = VAR_10->bEndpointAddress;
   VAR_8->bulk_in_buffer = FUNC_5(VAR_11, VAR_2);
   if (!VAR_8->bulk_in_buffer) {
    FUNC_2("Could not allocate bulk_in_buffer");
    goto error;
   }
  }

  if (!VAR_8->bulk_out_endpointAddr &&
      FUNC_12(VAR_10)) {

   VAR_8->bulk_out_endpointAddr = VAR_10->bEndpointAddress;
  }
 }
 if (!(VAR_8->bulk_in_endpointAddr && VAR_8->bulk_out_endpointAddr)) {
  FUNC_2("Could not find both bulk-in and bulk-out endpoints");
  goto error;
 }


 FUNC_15(VAR_6, VAR_8);


 VAR_13 = FUNC_14(VAR_6, &VAR_4);
 if (VAR_13) {

  FUNC_2("Not able to get a minor for this device.");
  FUNC_15(VAR_6, ((void*)0));
  goto error;
 }

 VAR_12 = FUNC_9(VAR_8->udev->descriptor.bcdDevice);

 FUNC_0(&VAR_6->dev, "USBLCD Version %1d%1d.%1d%1d found "
   "at address %d\n", (VAR_12 & 0xF000)>>12, (VAR_12 & 0xF00)>>8,
   (VAR_12 & 0xF0)>>4,(VAR_12 & 0xF), VAR_8->udev->devnum);


 FUNC_0(&VAR_6->dev, "USB LCD device now attached to USBLCD-%d\n",
   VAR_6->minor);
 return 0;

error:
 if (VAR_8)
  FUNC_7(&VAR_8->kref, VAR_5);
 return VAR_13;
}
