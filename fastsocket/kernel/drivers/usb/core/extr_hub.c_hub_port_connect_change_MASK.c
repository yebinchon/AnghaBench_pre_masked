
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct usb_hub {int mA_per_port; struct usb_device* hdev; int leds; int * indicator; scalar_t__ has_indicators; int removed_bits; int change_bits; TYPE_2__* descriptor; struct device* intfdev; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct TYPE_8__ {scalar_t__ bDeviceClass; int bcdUSB; } ;
struct device {int dummy; } ;
struct usb_device {scalar_t__ state; int bus_mA; scalar_t__ speed; scalar_t__ devnum; scalar_t__ parent; struct usb_device** children; TYPE_3__ descriptor; struct device dev; int wusb; scalar_t__ level; TYPE_4__* bus; scalar_t__ persist_enabled; } ;
struct TYPE_9__ {scalar_t__ is_b_host; } ;
struct TYPE_7__ {int wHubCharacteristics; } ;
struct TYPE_6__ {int (* relinquish_port ) (struct usb_hcd*,int) ;int (* port_handed_over ) (struct usb_hcd*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 struct usb_hcd* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct usb_hub*,struct usb_device*,int) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,char*,int,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_6 (struct usb_device*) ;
 scalar_t__ FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_hub*) ;
 int FUNC_9 (struct usb_hub*,int) ;
 int FUNC_10 (struct usb_hub*,int,int) ;
 int FUNC_11 (struct usb_hub*,struct usb_device*,int,int) ;
 int FUNC_12 (struct usb_hub*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int*) ;
 int FUNC_15 (struct usb_hub*,int) ;
 int FUNC_16 (struct usb_hub*,int) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (struct usb_device*) ;
 int FUNC_19 (struct usb_device*) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (struct usb_device*,int,int ) ;
 int FUNC_22 (struct usb_hub*,int,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct usb_hcd*,int) ;
 int FUNC_26 (struct usb_hcd*,int) ;
 scalar_t__ FUNC_27 (int,int ) ;
 struct usb_device* FUNC_28 (struct usb_device*,TYPE_4__*,int) ;
 int FUNC_29 (struct usb_device**) ;
 int FUNC_30 (struct usb_device*) ;
 int FUNC_31 (struct usb_device*,int ,int ,int*) ;
 int FUNC_32 (struct usb_device*) ;
 int FUNC_33 (struct usb_device*) ;
 int FUNC_34 (struct usb_device*) ;
 int FUNC_35 (struct usb_device*,int ) ;
 int FUNC_36 (struct usb_device*) ;

__attribute__((used)) static void FUNC_37(struct usb_hub *VAR_24, int VAR_25,
     u16 VAR_26, u16 VAR_27)
{
 struct usb_device *VAR_28 = VAR_24->hdev;
 struct device *VAR_29 = VAR_24->intfdev;
 struct usb_hcd *VAR_30 = FUNC_0(VAR_28->bus);
 unsigned VAR_31 =
   FUNC_13(VAR_24->descriptor->wHubCharacteristics);
 struct usb_device *VAR_32;
 int VAR_33, VAR_34;

 FUNC_4 (VAR_29,
  "port %d, status %04x, change %04x, %s\n",
  VAR_25, VAR_26, VAR_27, FUNC_16(VAR_24, VAR_26));

 if (VAR_24->has_indicators) {
  FUNC_22(VAR_24, VAR_25, VAR_4);
  VAR_24->indicator[VAR_25-1] = VAR_6;
 }
 VAR_32 = VAR_28->children[VAR_25-1];
 if ((VAR_26 & VAR_11) && VAR_32 &&
   VAR_32->state != VAR_19) {
  FUNC_32(VAR_32);
  if (VAR_26 & VAR_14) {
   VAR_33 = 0;
  } else {
   VAR_33 = -VAR_0;
  }
  FUNC_36(VAR_32);

  if (VAR_33 == 0) {
   FUNC_3(VAR_25, VAR_24->change_bits);
   return;
  }
 }


 if (VAR_32)
  FUNC_29(&VAR_28->children[VAR_25-1]);
 FUNC_3(VAR_25, VAR_24->change_bits);




 if (!(VAR_26 & VAR_11) ||
   (VAR_27 & VAR_12))
  FUNC_3(VAR_25, VAR_24->removed_bits);

 if (VAR_27 & (VAR_12 |
    VAR_13)) {
  VAR_33 = FUNC_9(VAR_24, VAR_25);
  if (VAR_33 < 0) {
   if (FUNC_17())
    FUNC_5(VAR_29, "connect-debounce failed, "
      "port %d disabled\n", VAR_25);
   VAR_26 &= ~VAR_11;
  } else {
   VAR_26 = VAR_33;
  }
 }




 if (!(VAR_26 & VAR_11) ||
   FUNC_27(VAR_25, VAR_24->removed_bits)) {


  if ((VAR_31 & VAR_3) < 2
    && !FUNC_15(VAR_24, VAR_26))
   FUNC_21(VAR_28, VAR_25, VAR_10);

  if (VAR_26 & VAR_14)
     goto done;
  return;
 }

 for (VAR_34 = 0; VAR_34 < VAR_7; VAR_34++) {




  VAR_32 = FUNC_28(VAR_28, VAR_28->bus, VAR_25);
  if (!VAR_32) {
   FUNC_5 (VAR_29,
    "couldn't allocate port %d usb_device\n",
    VAR_25);
   goto done;
  }

  FUNC_35(VAR_32, VAR_20);
   VAR_32->bus_mA = VAR_24->mA_per_port;
  VAR_32->level = VAR_28->level + 1;
  VAR_32->wusb = FUNC_8(VAR_24);


  if (FUNC_7(VAR_24->hdev))
   VAR_32->speed = VAR_17;
  else
   VAR_32->speed = VAR_18;

  FUNC_2(VAR_32);
  if (VAR_32->devnum <= 0) {
   VAR_33 = -VAR_1;
   goto loop;
  }


  VAR_33 = FUNC_11(VAR_24, VAR_32, VAR_25, VAR_34);
  if (VAR_33 < 0)
   goto loop;







  if (VAR_32->descriptor.bDeviceClass == VAR_8
    && VAR_32->bus_mA <= 100) {
   u16 VAR_35;

   VAR_33 = FUNC_31(VAR_32, VAR_15, 0,
     &VAR_35);
   if (VAR_33 < 2) {
    FUNC_4(&VAR_32->dev, "get status %d ?\n", VAR_33);
    goto loop_disable;
   }
   FUNC_14(&VAR_35);
   if ((VAR_35 & (1 << VAR_9)) == 0) {
    FUNC_5(&VAR_32->dev,
     "can't connect bus-powered hub "
     "to this port\n");
    if (VAR_24->has_indicators) {
     VAR_24->indicator[VAR_25-1] =
      VAR_5;
     FUNC_20 (&VAR_24->leds, 0);
    }
    VAR_33 = -VAR_1;
    goto loop_disable;
   }
  }


  if (FUNC_13(VAR_32->descriptor.bcdUSB) >= 0x0200
    && VAR_32->speed == VAR_16
    && VAR_23 != 0)
   FUNC_1 (VAR_24, VAR_32, VAR_25);





  VAR_33 = 0;





  FUNC_23(&VAR_22);
  if (VAR_28->state == VAR_19)
   VAR_33 = -VAR_1;
  else
   VAR_28->children[VAR_25-1] = VAR_32;
  FUNC_24(&VAR_22);


  if (!VAR_33) {
   VAR_33 = FUNC_33(VAR_32);
   if (VAR_33) {
    FUNC_23(&VAR_22);
    VAR_28->children[VAR_25-1] = ((void*)0);
    FUNC_24(&VAR_22);
   }
  }

  if (VAR_33)
   goto loop_disable;

  VAR_33 = FUNC_12(VAR_24);
  if (VAR_33)
   FUNC_4(VAR_29, "%dmA power budget left\n", VAR_33);

  return;

loop_disable:
  FUNC_10(VAR_24, VAR_25, 1);
loop:
  FUNC_30(VAR_32);
  FUNC_18(VAR_32);
  FUNC_6(VAR_32);
  FUNC_34(VAR_32);
  if ((VAR_33 == -VAR_1) || (VAR_33 == -VAR_2))
   break;
 }
 if (VAR_24->hdev->parent ||
   !VAR_30->driver->port_handed_over ||
   !(VAR_30->driver->port_handed_over)(VAR_30, VAR_25))
  FUNC_5(VAR_29, "unable to enumerate USB device on port %d\n",
    VAR_25);

done:
 FUNC_10(VAR_24, VAR_25, 1);
 if (VAR_30->driver->relinquish_port && !VAR_24->hdev->parent)
  VAR_30->driver->relinquish_port(VAR_30, VAR_25);
}
