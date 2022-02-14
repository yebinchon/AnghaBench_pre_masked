
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ep {unsigned int maxpacket; int name; } ;
struct usb_endpoint_descriptor {scalar_t__ bDescriptorType; int bmAttributes; int bEndpointAddress; int wMaxPacketSize; } ;
struct TYPE_3__ {int name; } ;
struct dummy_ep {scalar_t__ wedged; scalar_t__ halted; struct usb_endpoint_descriptor const* desc; TYPE_1__ ep; } ;
struct TYPE_4__ {int speed; } ;
struct dummy {TYPE_2__ gadget; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int FUNC_0 (int ,char*,int ,int,char*,int ,unsigned int) ;
 int VAR_4 ;
 struct dummy* FUNC_1 (struct dummy_ep*) ;
 int FUNC_2 (struct dummy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dummy*) ;
 struct dummy_ep* FUNC_6 (struct usb_ep*) ;

__attribute__((used)) static int
FUNC_7 (struct usb_ep *VAR_5, const struct usb_endpoint_descriptor *VAR_6)
{
 struct dummy *VAR_7;
 struct dummy_ep *VAR_8;
 unsigned VAR_9;
 int VAR_10;

 VAR_8 = FUNC_6 (VAR_5);
 if (!VAR_5 || !VAR_6 || VAR_8->desc || VAR_5->name == VAR_4
   || VAR_6->bDescriptorType != VAR_3)
  return -VAR_0;
 VAR_7 = FUNC_1 (VAR_8);
 if (!VAR_7->driver || !FUNC_2 (VAR_7))
  return -VAR_1;
 VAR_9 = FUNC_3(VAR_6->wMaxPacketSize) & 0x3ff;
 VAR_10 = -VAR_0;
 switch (VAR_6->bmAttributes & 0x03) {
 case 132:
  if (FUNC_4 (VAR_8->ep.name, "-iso")
    || FUNC_4 (VAR_8->ep.name, "-int")) {
   goto done;
  }
  switch (VAR_7->gadget.speed) {
  case 128:
   if (VAR_9 == 512)
    break;
   goto done;
  case 129:
   if (VAR_9 == 8 || VAR_9 == 16 || VAR_9 == 32 || VAR_9 == 64)

    break;

  default:
   goto done;
  }
  break;
 case 131:
  if (FUNC_4 (VAR_8->ep.name, "-iso"))
   goto done;

  switch (VAR_7->gadget.speed) {
  case 128:
   if (VAR_9 <= 1024)
    break;

  case 129:
   if (VAR_9 <= 64)
    break;

  default:
   if (VAR_9 <= 8)
    break;
   goto done;
  }
  break;
 case 130:
  if (FUNC_4 (VAR_8->ep.name, "-bulk")
    || FUNC_4 (VAR_8->ep.name, "-int"))
   goto done;

  switch (VAR_7->gadget.speed) {
  case 128:
   if (VAR_9 <= 1024)
    break;

  case 129:
   if (VAR_9 <= 1023)
    break;

  default:
   goto done;
  }
  break;
 default:

  goto done;
 }

 VAR_5->maxpacket = VAR_9;
 VAR_8->desc = VAR_6;

 FUNC_0 (FUNC_5(VAR_7), "enabled %s (ep%d%s-%s) maxpacket %d\n",
  VAR_5->name,
  VAR_6->bEndpointAddress & 0x0f,
  (VAR_6->bEndpointAddress & VAR_2) ? "in" : "out",
  ({ char *VAR_11;
   switch (VAR_6->bmAttributes & 0x03) {
   case 132: VAR_11 = "bulk"; break;
   case 130: VAR_11 = "iso"; break;
   case 131: VAR_11 = "intr"; break;
   default: VAR_11 = "ctrl"; break;
   }; VAR_11; }),
  VAR_9);




 VAR_8->halted = VAR_8->wedged = 0;
 VAR_10 = 0;
done:
 return VAR_10;
}
