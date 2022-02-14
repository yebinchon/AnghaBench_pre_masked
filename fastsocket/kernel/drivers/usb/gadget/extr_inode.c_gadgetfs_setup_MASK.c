
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_request {int length; int zero; scalar_t__ status; TYPE_4__* buf; int * context; int dma; } ;
struct usb_qualifier_descriptor {int dummy; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wIndex; int wLength; int wValue; } ;
struct TYPE_8__ {scalar_t__ speed; struct usb_ctrlrequest setup; } ;
struct usb_gadgetfs_event {TYPE_1__ u; } ;
struct usb_gadget {scalar_t__ speed; TYPE_5__* ep0; } ;
struct dev_data {int setup_abort; scalar_t__ state; int current_config; int setup_can_stall; int setup_in; int setup_wLength; int lock; struct usb_request* req; int setup_out_error; int setup_out_ready; int usermode_setup; TYPE_3__* config; TYPE_2__* hs_config; TYPE_4__* dev; TYPE_4__* rbuf; } ;
struct TYPE_12__ {int maxpacket; } ;
struct TYPE_11__ {int bMaxPacketSize0; } ;
struct TYPE_10__ {int bConfigurationValue; int bMaxPower; } ;
struct TYPE_9__ {int bConfigurationValue; int bMaxPower; } ;


 int FUNC_0 (struct dev_data*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dev_data*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dev_data*,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct dev_data*,char*,char*,int,int,int,int,int) ;
 int FUNC_4 (TYPE_5__*,struct usb_request*) ;
 int FUNC_5 (struct dev_data*,int,int) ;
 int FUNC_6 (struct dev_data*) ;
 scalar_t__ FUNC_7 (struct usb_gadget*) ;
 struct dev_data* FUNC_8 (struct usb_gadget*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dev_data*) ;
 int FUNC_11 (int,int) ;
 struct usb_gadgetfs_event* FUNC_12 (struct dev_data*,int ) ;
 int FUNC_13 (TYPE_5__*,struct usb_request*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_5__*,struct usb_request*,int ) ;
 int FUNC_18 (struct usb_gadget*,int) ;

__attribute__((used)) static int
FUNC_19 (struct usb_gadget *VAR_11, const struct usb_ctrlrequest *VAR_12)
{
 struct dev_data *VAR_13 = FUNC_8 (VAR_11);
 struct usb_request *VAR_14 = VAR_13->req;
 int VAR_15 = -VAR_2;
 struct usb_gadgetfs_event *VAR_16;
 u16 VAR_17 = FUNC_9(VAR_12->wValue);
 u16 VAR_18 = FUNC_9(VAR_12->wLength);

 FUNC_14 (&VAR_13->lock);
 VAR_13->setup_abort = 0;
 if (VAR_13->state == VAR_8) {
  if (FUNC_7(VAR_11)
    && VAR_11->speed == VAR_10
    && VAR_13->hs_config == ((void*)0)) {
   FUNC_15(&VAR_13->lock);
   FUNC_1 (VAR_13, "no high speed config??\n");
   return -VAR_1;
  }

  VAR_13->state = VAR_6;
  VAR_13->dev->bMaxPacketSize0 = VAR_11->ep0->maxpacket;

  FUNC_2 (VAR_13, "connected\n");
  VAR_16 = FUNC_12 (VAR_13, VAR_3);
  VAR_16->u.speed = VAR_11->speed;
  FUNC_6 (VAR_13);






 } else if (VAR_13->state == VAR_7)
  VAR_13->setup_abort = 1;

 VAR_14->buf = VAR_13->rbuf;
 VAR_14->dma = VAR_0;
 VAR_14->context = ((void*)0);
 VAR_15 = -VAR_2;
 switch (VAR_12->bRequest) {

 case 129:
  if (VAR_12->bRequestType != VAR_9)
   goto unrecognized;
  switch (VAR_17 >> 8) {

  case 134:
   VAR_15 = FUNC_11 (VAR_18, (u16) sizeof *VAR_13->dev);
   VAR_14->buf = VAR_13->dev;
   break;
  case 135:
   VAR_15 = FUNC_5 (VAR_13,
     VAR_17 >> 8,
     VAR_17 & 0xff);
   if (VAR_15 >= 0)
    VAR_15 = FUNC_11 (VAR_18, (u16) VAR_15);
   break;
  case 131:
   goto unrecognized;

  default:
   break;
  }
  break;


 case 128:
  if (VAR_12->bRequestType != 0)
   goto unrecognized;
  if (0 == (u8) VAR_17) {
   VAR_15 = 0;
   VAR_13->current_config = 0;
   FUNC_18(VAR_11, 8 );

  } else {
   u8 VAR_19, VAR_20;

   if (FUNC_7(VAR_11)
     && VAR_11->speed == VAR_10) {
    VAR_19 = VAR_13->hs_config->bConfigurationValue;
    VAR_20 = VAR_13->hs_config->bMaxPower;
   } else {
    VAR_19 = VAR_13->config->bConfigurationValue;
    VAR_20 = VAR_13->config->bMaxPower;
   }

   if (VAR_19 == (u8) VAR_17) {
    VAR_15 = 0;
    VAR_13->current_config = VAR_19;
    FUNC_18(VAR_11, 2 * VAR_20);
   }
  }
  if (VAR_15 == 0) {
   FUNC_2 (VAR_13, "configuration #%d\n", VAR_13->current_config);
   if (VAR_13->usermode_setup) {
    VAR_13->setup_can_stall = 0;
    goto delegate;
   }
  }
  break;



 case 130:
  if (VAR_12->bRequestType != 0x80)
   goto unrecognized;
  *(u8 *)VAR_14->buf = VAR_13->current_config;
  VAR_15 = FUNC_11 (VAR_18, (u16) 1);
  break;


 default:
unrecognized:
  FUNC_3 (VAR_13, "%s req%02x.%02x v%04x i%04x l%d\n",
   VAR_13->usermode_setup ? "delegate" : "fail",
   VAR_12->bRequestType, VAR_12->bRequest,
   VAR_17, FUNC_9(VAR_12->wIndex), VAR_18);


  if (VAR_13->usermode_setup) {
   VAR_13->setup_can_stall = 1;
delegate:
   VAR_13->setup_in = (VAR_12->bRequestType & VAR_9)
      ? 1 : 0;
   VAR_13->setup_wLength = VAR_18;
   VAR_13->setup_out_ready = 0;
   VAR_13->setup_out_error = 0;
   VAR_15 = 0;


   if (FUNC_16 (!VAR_13->setup_in && VAR_18)) {
    VAR_15 = FUNC_13 (VAR_11->ep0, VAR_13->req,
       VAR_18);
    if (VAR_15 < 0)
     break;
    VAR_15 = FUNC_17 (VAR_11->ep0, VAR_13->req,
       VAR_5);
    if (VAR_15 < 0) {
     FUNC_4 (VAR_11->ep0, VAR_13->req);
     break;
    }


    VAR_13->setup_can_stall = 0;
   }


   VAR_16 = FUNC_12 (VAR_13, VAR_4);
   VAR_16->u.setup = *VAR_12;
   FUNC_6 (VAR_13);
   FUNC_15 (&VAR_13->lock);
   return 0;
  }
 }


 if (VAR_15 >= 0 && VAR_13->state != VAR_7) {
  VAR_14->length = VAR_15;
  VAR_14->zero = VAR_15 < VAR_18;
  VAR_15 = FUNC_17 (VAR_11->ep0, VAR_14, VAR_5);
  if (VAR_15 < 0) {
   FUNC_0 (VAR_13, "ep_queue --> %d\n", VAR_15);
   VAR_14->status = 0;
  }
 }


 FUNC_15 (&VAR_13->lock);
 return VAR_15;
}
