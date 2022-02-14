
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_3__ {int speed; } ;
struct qe_udc {int ep0_dir; int dev; int lock; int ep0_state; TYPE_1__ gadget; struct qe_ep* eps; } ;
struct TYPE_4__ {int maxpacket; int name; } ;
struct qe_ep {scalar_t__ tm; int init; int dir; TYPE_2__ ep; int rxframe; int rxbuffer; int * txframe; scalar_t__ stopped; struct usb_endpoint_descriptor const* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;







 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qe_udc*,unsigned char) ;
 int FUNC_5 (struct qe_udc*,unsigned char) ;
 int FUNC_6 (struct qe_ep*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct qe_udc *VAR_7,
        unsigned char VAR_8,
        const struct usb_endpoint_descriptor *VAR_9)
{
 struct qe_ep *VAR_10 = &VAR_7->eps[VAR_8];
 unsigned long VAR_11;
 int VAR_12 = 0;
 u16 VAR_13 = 0;

 VAR_13 = FUNC_3(VAR_9->wMaxPacketSize);




 if (VAR_8 != 0) {
  switch (VAR_9->bmAttributes & VAR_5) {
  case 134:
   if (FUNC_10(VAR_10->ep.name, "-iso")
     || FUNC_10(VAR_10->ep.name, "-int"))
    goto en_done;
   switch (VAR_7->gadget.speed) {
   case 129:
   if ((VAR_13 == 128) || (VAR_13 == 256) || (VAR_13 == 512))
    break;
   default:
    switch (VAR_13) {
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
     break;
    default:
    case 128:
     goto en_done;
    }
   }
   break;
  case 132:
   if (FUNC_10(VAR_10->ep.name, "-iso"))
    goto en_done;
   switch (VAR_7->gadget.speed) {
   case 129:
    if (VAR_13 <= 1024)
     break;
   case 130:
    if (VAR_13 <= 64)
     break;
   default:
    if (VAR_13 <= 8)
     break;
    goto en_done;
   }
   break;
  case 131:
   if (FUNC_10(VAR_10->ep.name, "-bulk")
    || FUNC_10(VAR_10->ep.name, "-int"))
    goto en_done;
   switch (VAR_7->gadget.speed) {
   case 129:
    if (VAR_13 <= 1024)
     break;
   case 130:
    if (VAR_13 <= 1023)
     break;
   default:
    goto en_done;
   }
   break;
  case 133:
   if (FUNC_10(VAR_10->ep.name, "-iso")
    || FUNC_10(VAR_10->ep.name, "-int"))
    goto en_done;
   switch (VAR_7->gadget.speed) {
   case 129:
   case 130:
    switch (VAR_13) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 16:
    case 32:
    case 64:
     break;
    default:
     goto en_done;
    }
   case 128:
    switch (VAR_13) {
    case 1:
    case 2:
    case 4:
    case 8:
     break;
    default:
     goto en_done;
    }
   default:
    goto en_done;
   }
   break;

  default:
   goto en_done;
  }
 }

 FUNC_8(&VAR_7->lock, VAR_11);


 VAR_10->ep.maxpacket = VAR_13;
 VAR_10->tm = (u8)(VAR_9->bmAttributes & VAR_5);
 VAR_10->desc = VAR_9;
 VAR_10->stopped = 0;
 VAR_10->init = 1;

 if (VAR_8 == 0) {
  VAR_10->dir = VAR_3;
  VAR_7->ep0_dir = 135;
  VAR_7->ep0_state = VAR_6;
 } else {
  switch (VAR_9->bEndpointAddress & VAR_4) {
  case 135:
   VAR_10->dir = 135;
   break;
  case 136:
   VAR_10->dir = 136;
  default:
   break;
  }
 }


 FUNC_4(VAR_7, VAR_8);
 if ((VAR_10->tm == VAR_2) || (VAR_10->dir == 135)) {
  VAR_12 = FUNC_6(VAR_10);
  if (VAR_12)
   goto en_done1;
 }

 if ((VAR_10->tm == VAR_2) || (VAR_10->dir == 136)) {
  VAR_10->txframe = FUNC_2(sizeof(*VAR_10->txframe), VAR_1);
  if (VAR_10->txframe == ((void*)0)) {
   FUNC_0(VAR_7->dev, "malloc txframe failed\n");
   goto en_done2;
  }
  FUNC_7(VAR_10->txframe);
 }

 FUNC_5(VAR_7, VAR_8);



 FUNC_9(&VAR_7->lock, VAR_11);

 return 0;
en_done2:
 FUNC_1(VAR_10->rxbuffer);
 FUNC_1(VAR_10->rxframe);
en_done1:
 FUNC_9(&VAR_7->lock, VAR_11);
en_done:
 FUNC_0(VAR_7->dev, "failed to initialize %s\n", VAR_10->ep.name);
 return -VAR_0;
}
