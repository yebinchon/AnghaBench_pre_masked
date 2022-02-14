
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int status; } ;
struct vhci_device {TYPE_2__* udev; TYPE_1__ ud; int rhport; } ;
struct usb_hcd {int dummy; } ;
struct usb_ctrlrequest {int bRequest; int wValue; } ;
struct urb {int status; TYPE_2__* dev; scalar_t__ setup_packet; int pipe; scalar_t__ transfer_buffer_length; int transfer_buffer; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ __u8 ;
struct TYPE_7__ {int lock; int pending_port; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int,int ) ;
 struct vhci_device* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_3__* VAR_5 ;
 int FUNC_8 (int ,struct urb*,int) ;
 int FUNC_9 (struct usb_hcd*,struct urb*) ;
 int FUNC_10 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (struct urb*) ;

__attribute__((used)) static int FUNC_16(struct usb_hcd *VAR_6, struct urb *VAR_7,
       gfp_t VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev->dev;
 int VAR_10 = 0;
 unsigned long VAR_11;

 FUNC_13("enter, usb_hcd %p urb %p mem_flags %d\n",
      VAR_6, VAR_7, VAR_8);


 FUNC_0(!VAR_7->transfer_buffer && VAR_7->transfer_buffer_length);

 FUNC_5(&VAR_5->lock, VAR_11);

 if (VAR_7->status != -VAR_0) {
  FUNC_1(VAR_9, "URB already unlinked!, status %d\n", VAR_7->status);
  FUNC_7(&VAR_5->lock, VAR_11);
  return VAR_7->status;
 }

 VAR_10 = FUNC_9(VAR_6, VAR_7);
 if (VAR_10)
  goto no_need_unlink;
 if (FUNC_11(VAR_7->pipe) == 0) {
  __u8 VAR_12 = FUNC_12(VAR_7->pipe);
  struct usb_ctrlrequest *VAR_13 =
    (struct usb_ctrlrequest *) VAR_7->setup_packet;
  struct vhci_device *VAR_14 =
    FUNC_3(VAR_5->pending_port);

  if (VAR_12 != VAR_2 || !VAR_13) {
   FUNC_1(VAR_9, "invalid request to devnum 0\n");
   VAR_10 = -VAR_1;
   goto no_need_xmit;
  }

  switch (VAR_13->bRequest) {
  case 128:

   FUNC_2(VAR_9, "SetAddress Request (%d) to port %d\n",
     VAR_13->wValue, VAR_14->rhport);

   VAR_14->udev = VAR_7->dev;

   FUNC_4(&VAR_14->ud.lock);
   VAR_14->ud.status = VAR_4;
   FUNC_6(&VAR_14->ud.lock);

   if (VAR_7->status == -VAR_0) {


    VAR_7->status = 0;
   }

   goto no_need_xmit;

  case 129:
   if (VAR_13->wValue == (VAR_3 << 8))
    FUNC_13("Not yet?: "
      "Get_Descriptor to device 0 "
      "(get max pipe size)\n");


   VAR_14->udev = VAR_7->dev;
   goto out;

  default:

   FUNC_1(VAR_9, "invalid request to devnum 0 bRequest %u, "
    "wValue %u\n", VAR_13->bRequest,
    VAR_13->wValue);
   VAR_10 = -VAR_1;
   goto no_need_xmit;
  }

 }

out:
 FUNC_15(VAR_7);

 FUNC_7(&VAR_5->lock, VAR_11);

 return 0;

no_need_xmit:
 FUNC_10(VAR_6, VAR_7);
no_need_unlink:
 FUNC_7(&VAR_5->lock, VAR_11);

 FUNC_8(FUNC_14(VAR_5), VAR_7, VAR_7->status);

 return VAR_10;
}
