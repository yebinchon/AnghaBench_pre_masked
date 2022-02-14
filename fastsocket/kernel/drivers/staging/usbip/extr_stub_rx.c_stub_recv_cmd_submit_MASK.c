
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int seqnum; int direction; int ep; } ;
struct TYPE_12__ {scalar_t__ transfer_buffer_length; int setup; int number_of_packets; } ;
struct TYPE_13__ {TYPE_1__ cmd_submit; } ;
struct usbip_header {TYPE_3__ base; TYPE_2__ u; } ;
struct usbip_device {int dummy; } ;
struct usb_device {int dummy; } ;
struct stub_priv {TYPE_4__* urb; } ;
struct stub_device {TYPE_10__* interface; struct usbip_device ud; } ;
struct TYPE_15__ {int pipe; int complete; struct usb_device* dev; void* context; void* setup_packet; void* transfer_buffer; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct stub_device*,int ,int ) ;
 struct usb_device* FUNC_2 (TYPE_10__*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (void*,int *,int) ;
 int VAR_4 ;
 struct stub_priv* FUNC_5 (struct stub_device*,struct usbip_header*) ;
 int FUNC_6 (TYPE_4__*) ;
 void* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct usbip_header*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct usbip_device*,int ) ;
 int FUNC_14 (struct usbip_header*,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_15 (struct usbip_device*,TYPE_4__*) ;
 scalar_t__ FUNC_16 (struct usbip_device*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_17(struct stub_device *VAR_5,
     struct usbip_header *VAR_6)
{
 int VAR_7;
 struct stub_priv *VAR_8;
 struct usbip_device *VAR_9 = &VAR_5->ud;
 struct usb_device *VAR_10 = FUNC_2(VAR_5->interface);
 int VAR_11 = FUNC_1(VAR_5, VAR_6->base.ep, VAR_6->base.direction);


 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_8)
  return;


 if (FUNC_8(VAR_11))
  VAR_8->urb = FUNC_7(VAR_6->u.cmd_submit.number_of_packets,
        VAR_0);
 else
  VAR_8->urb = FUNC_7(0, VAR_0);

 if (!VAR_8->urb) {
  FUNC_0(&VAR_5->interface->dev, "malloc urb\n");
  FUNC_13(VAR_9, VAR_1);
  return;
 }


 if (VAR_6->u.cmd_submit.transfer_buffer_length > 0) {
  VAR_8->urb->transfer_buffer =
   FUNC_3(VAR_6->u.cmd_submit.transfer_buffer_length,
        VAR_0);
  if (!VAR_8->urb->transfer_buffer) {
   FUNC_0(&VAR_5->interface->dev, "malloc x_buff\n");
   FUNC_13(VAR_9, VAR_1);
   return;
  }
 }


 VAR_8->urb->setup_packet = FUNC_3(8, VAR_0);
 if (!VAR_8->urb->setup_packet) {
  FUNC_0(&VAR_5->interface->dev, "allocate setup_packet\n");
  FUNC_13(VAR_9, VAR_1);
  return;
 }
 FUNC_4(VAR_8->urb->setup_packet, &VAR_6->u.cmd_submit.setup, 8);


 VAR_8->urb->context = (void *) VAR_8;
 VAR_8->urb->dev = VAR_10;
 VAR_8->urb->pipe = VAR_11;
 VAR_8->urb->complete = VAR_4;

 FUNC_14(VAR_6, VAR_8->urb, VAR_3, 0);


 if (FUNC_16(VAR_9, VAR_8->urb) < 0)
  return;

 if (FUNC_15(VAR_9, VAR_8->urb) < 0)
  return;


 FUNC_6(VAR_8->urb);


 VAR_7 = FUNC_9(VAR_8->urb, VAR_0);

 if (VAR_7 == 0)
  FUNC_10("submit urb ok, seqnum %u\n",
       VAR_6->base.seqnum);
 else {
  FUNC_0(&VAR_5->interface->dev, "submit_urb error, %d\n", VAR_7);
  FUNC_11(VAR_6);
  FUNC_12(VAR_8->urb);





  FUNC_13(VAR_9, VAR_2);
 }

 FUNC_10("Leave\n");
 return;
}
