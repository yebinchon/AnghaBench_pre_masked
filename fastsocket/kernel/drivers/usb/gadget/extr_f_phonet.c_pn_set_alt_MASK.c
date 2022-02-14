
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct usb_function {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct phonet_port {int lock; struct f_phonet* usb; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {TYPE_2__* config; } ;
struct f_phonet {int * out_reqv; TYPE_4__* in_ep; TYPE_4__* out_ep; struct net_device* dev; TYPE_3__ function; } ;
struct TYPE_12__ {unsigned int bInterfaceNumber; } ;
struct TYPE_11__ {unsigned int bInterfaceNumber; } ;
struct TYPE_10__ {struct f_phonet* driver_data; } ;
struct TYPE_8__ {TYPE_1__* cdev; } ;
struct TYPE_7__ {struct usb_gadget* gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_function*) ;
 struct usb_endpoint_descriptor* FUNC_1 (struct usb_gadget*,int *,int *) ;
 struct f_phonet* FUNC_2 (struct usb_function*) ;
 struct phonet_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct f_phonet*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_9(struct usb_function *VAR_9, unsigned VAR_10, unsigned VAR_11)
{
 struct f_phonet *VAR_12 = FUNC_2(VAR_9);
 struct usb_gadget *VAR_13 = VAR_12->function.config->cdev->gadget;

 if (VAR_10 == VAR_3.bInterfaceNumber)

  return (VAR_11 > 0) ? -VAR_0 : 0;

 if (VAR_10 == VAR_4.bInterfaceNumber) {
  struct net_device *VAR_14 = VAR_12->dev;
  struct phonet_port *VAR_15 = FUNC_3(VAR_14);


  if (VAR_11 > 1)
   return -VAR_0;

  FUNC_6(&VAR_15->lock);
  FUNC_0(VAR_9);
  if (VAR_11 == 1) {
   struct usb_endpoint_descriptor *VAR_16, *VAR_17;
   int VAR_18;

   VAR_16 = FUNC_1(VAR_13,
     &VAR_7,
     &VAR_5);
   VAR_17 = FUNC_1(VAR_13,
     &VAR_8,
     &VAR_6);
   FUNC_8(VAR_12->out_ep, VAR_16);
   FUNC_8(VAR_12->in_ep, VAR_17);

   VAR_15->usb = VAR_12;
   VAR_12->out_ep->driver_data = VAR_12;
   VAR_12->in_ep->driver_data = VAR_12;

   FUNC_4(VAR_14);
   for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++)
    FUNC_5(VAR_12, VAR_12->out_reqv[VAR_18], VAR_1);
  }
  FUNC_7(&VAR_15->lock);
  return 0;
 }

 return -VAR_0;
}
