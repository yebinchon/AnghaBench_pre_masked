
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct usba_udc {int lock; } ;
struct TYPE_2__ {unsigned long name; unsigned long maxpacket; } ;
struct usba_ep {int index; unsigned long fifo_size; int is_isoc; int is_in; int nr_banks; scalar_t__ can_dma; TYPE_1__ ep; struct usb_endpoint_descriptor const* desc; struct usba_udc* udc; int can_isoc; } ;
struct usb_ep {int dummy; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; scalar_t__ bDescriptorType; int wMaxPacketSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long FUNC_1 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned long VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;




 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct usba_ep* FUNC_6 (struct usb_ep*) ;
 scalar_t__ FUNC_7 (struct usb_endpoint_descriptor const*) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;
 scalar_t__ FUNC_9 (struct usba_ep*,int ) ;
 int FUNC_10 (struct usba_ep*,int ,unsigned long) ;
 unsigned long FUNC_11 (struct usba_udc*,int ) ;
 int FUNC_12 (struct usba_udc*,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_13(struct usb_ep *VAR_28, const struct usb_endpoint_descriptor *VAR_29)
{
 struct usba_ep *VAR_30 = FUNC_6(VAR_28);
 struct usba_udc *VAR_31 = VAR_30->udc;
 unsigned long VAR_32, VAR_33, VAR_34;
 unsigned int VAR_35;

 FUNC_0(VAR_4, "%s: ep_enable: desc=%p\n", VAR_30->ep.name, VAR_29);

 VAR_34 = FUNC_3(VAR_29->wMaxPacketSize) & 0x7ff;

 if (((VAR_29->bEndpointAddress & VAR_27) != VAR_30->index)
   || VAR_30->index == 0
   || VAR_29->bDescriptorType != VAR_26
   || VAR_34 == 0
   || VAR_34 > VAR_30->fifo_size) {
  FUNC_0(VAR_3, "ep_enable: Invalid argument");
  return -VAR_8;
 }

 VAR_30->is_isoc = 0;
 VAR_30->is_in = 0;

 if (VAR_34 <= 8)
  VAR_33 = FUNC_1(VAR_10, VAR_20);
 else

  VAR_33 = FUNC_1(VAR_10, FUNC_2(VAR_34 - 1) - 3);

 FUNC_0(VAR_5, "%s: EPT_SIZE = %lu (maxpacket = %lu)\n",
   VAR_30->ep.name, VAR_33, VAR_34);

 if (FUNC_7(VAR_29)) {
  VAR_30->is_in = 1;
  VAR_33 |= VAR_18;
 }

 switch (FUNC_8(VAR_29)) {
 case 130:
  VAR_33 |= FUNC_1(VAR_11, VAR_22);
  VAR_33 |= FUNC_1(VAR_0, VAR_16);
  break;
 case 128:
  if (!VAR_30->can_isoc) {
   FUNC_0(VAR_3, "ep_enable: %s is not isoc capable\n",
     VAR_30->ep.name);
   return -VAR_8;
  }





  VAR_35 = ((FUNC_3(VAR_29->wMaxPacketSize) >> 11) & 3) + 1;
  if (VAR_35 > 3)
   return -VAR_8;

  VAR_30->is_isoc = 1;
  VAR_33 |= FUNC_1(VAR_11, VAR_24);




  if (VAR_35 > 1 && VAR_30->nr_banks == 3)
   VAR_33 |= FUNC_1(VAR_0, VAR_17);
  else
   VAR_33 |= FUNC_1(VAR_0, VAR_15);
  VAR_33 |= FUNC_1(VAR_13, VAR_35);
  break;
 case 131:
  VAR_33 |= FUNC_1(VAR_11, VAR_21);
  VAR_33 |= FUNC_1(VAR_0, VAR_15);
  break;
 case 129:
  VAR_33 |= FUNC_1(VAR_11, VAR_23);
  VAR_33 |= FUNC_1(VAR_0, VAR_15);
  break;
 }

 FUNC_4(&VAR_30->udc->lock, VAR_32);

 if (VAR_30->desc) {
  FUNC_5(&VAR_30->udc->lock, VAR_32);
  FUNC_0(VAR_3, "ep%d already enabled\n", VAR_30->index);
  return -VAR_7;
 }

 VAR_30->desc = VAR_29;
 VAR_30->ep.maxpacket = VAR_34;

 FUNC_10(VAR_30, VAR_1, VAR_33);
 FUNC_10(VAR_30, VAR_2, VAR_19);

 if (VAR_30->can_dma) {
  u32 VAR_36;

  FUNC_12(VAR_31, VAR_12,
    (FUNC_11(VAR_31, VAR_12)
     | FUNC_1(VAR_9, 1 << VAR_30->index)
     | FUNC_1(VAR_6, 1 << VAR_30->index)));
  VAR_36 = VAR_14 | VAR_25;
  FUNC_10(VAR_30, VAR_2, VAR_36);
 } else {
  FUNC_12(VAR_31, VAR_12,
    (FUNC_11(VAR_31, VAR_12)
     | FUNC_1(VAR_9, 1 << VAR_30->index)));
 }

 FUNC_5(&VAR_31->lock, VAR_32);

 FUNC_0(VAR_5, "EPT_CFG%d after init: %#08lx\n", VAR_30->index,
   (unsigned long)FUNC_9(VAR_30, VAR_1));
 FUNC_0(VAR_5, "INT_ENB after init: %#08lx\n",
   (unsigned long)FUNC_11(VAR_31, VAR_12));

 return 0;
}
