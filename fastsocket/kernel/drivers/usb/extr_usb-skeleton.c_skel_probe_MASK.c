
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_skel {size_t bulk_in_size; int kref; scalar_t__ bulk_out_endpointAddr; scalar_t__ bulk_in_endpointAddr; int bulk_in_urb; int bulk_in_buffer; struct usb_interface* interface; int udev; int bulk_in_completion; int submitted; int err_lock; int io_mutex; int limit_sem; } ;
struct usb_interface {int minor; int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 struct usb_skel* FUNC_8 (int,int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_15 (struct usb_endpoint_descriptor*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct usb_interface*,int *) ;
 int FUNC_18 (struct usb_interface*,struct usb_skel*) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_5,
        const struct usb_device_id *VAR_6)
{
 struct usb_skel *VAR_7;
 struct usb_host_interface *VAR_8;
 struct usb_endpoint_descriptor *VAR_9;
 size_t VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_0;


 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_1("Out of memory");
  goto error;
 }
 FUNC_6(&VAR_7->kref);
 FUNC_11(&VAR_7->limit_sem, VAR_2);
 FUNC_10(&VAR_7->io_mutex);
 FUNC_12(&VAR_7->err_lock);
 FUNC_3(&VAR_7->submitted);
 FUNC_2(&VAR_7->bulk_in_completion);

 VAR_7->udev = FUNC_16(FUNC_4(VAR_5));
 VAR_7->interface = VAR_5;



 VAR_8 = VAR_5->cur_altsetting;
 for (VAR_11 = 0; VAR_11 < VAR_8->desc.bNumEndpoints; ++VAR_11) {
  VAR_9 = &VAR_8->endpoint[VAR_11].desc;

  if (!VAR_7->bulk_in_endpointAddr &&
      FUNC_14(VAR_9)) {

   VAR_10 = FUNC_9(VAR_9->wMaxPacketSize);
   VAR_7->bulk_in_size = VAR_10;
   VAR_7->bulk_in_endpointAddr = VAR_9->bEndpointAddress;
   VAR_7->bulk_in_buffer = FUNC_5(VAR_10, VAR_1);
   if (!VAR_7->bulk_in_buffer) {
    FUNC_1("Could not allocate bulk_in_buffer");
    goto error;
   }
   VAR_7->bulk_in_urb = FUNC_13(0, VAR_1);
   if (!VAR_7->bulk_in_urb) {
    FUNC_1("Could not allocate bulk_in_urb");
    goto error;
   }
  }

  if (!VAR_7->bulk_out_endpointAddr &&
      FUNC_15(VAR_9)) {

   VAR_7->bulk_out_endpointAddr = VAR_9->bEndpointAddress;
  }
 }
 if (!(VAR_7->bulk_in_endpointAddr && VAR_7->bulk_out_endpointAddr)) {
  FUNC_1("Could not find both bulk-in and bulk-out endpoints");
  goto error;
 }


 FUNC_18(VAR_5, VAR_7);


 VAR_12 = FUNC_17(VAR_5, &VAR_3);
 if (VAR_12) {

  FUNC_1("Not able to get a minor for this device.");
  FUNC_18(VAR_5, ((void*)0));
  goto error;
 }


 FUNC_0(&VAR_5->dev,
   "USB Skeleton device now attached to USBSkel-%d",
   VAR_5->minor);
 return 0;

error:
 if (VAR_7)

  FUNC_7(&VAR_7->kref, VAR_4);
 return VAR_12;
}
