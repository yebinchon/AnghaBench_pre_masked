
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
struct usb_interface {int dev; TYPE_4__* cur_altsetting; TYPE_1__* altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dummy; } ;
struct usb_cdc_union_desc {int bMasterInterface0; int bSlaveInterface0; } ;
struct usb_cdc_country_functional_desc {int iCountryCodeRelDate; scalar_t__ bLength; int wCountyCode0; } ;
struct TYPE_11__ {int bDataBits; int dwDTERate; } ;
struct TYPE_18__ {int * ops; } ;
struct TYPE_16__ {unsigned long data; int func; } ;
struct acm_wb {int combined_interfaces; int writesize; int minor; int ctrl_caps; int ctrlsize; int readsize; int rx_buflimit; int bInterval; int* ctrl_buffer; int ctrl_dma; TYPE_6__* ctrlurb; struct acm_ru* ru; TYPE_6__* urb; struct acm_wb* wb; TYPE_10__ line; int ctrlout; struct acm_wb* country_codes; int country_rel_date; scalar_t__ country_code_size; struct acm_wb* instance; struct usb_device* dev; struct acm_rb* rb; TYPE_9__ port; scalar_t__ is_int_ep; int rx_endpoint; int mutex; int read_lock; int write_lock; int throttle_lock; int drain_wait; int work; TYPE_5__ urb_task; struct usb_interface* data; struct usb_interface* control; } ;
struct acm_ru {TYPE_6__* urb; struct acm_wb* instance; } ;
struct acm_rb {void* base; int dma; } ;
struct acm {int combined_interfaces; int writesize; int minor; int ctrl_caps; int ctrlsize; int readsize; int rx_buflimit; int bInterval; int* ctrl_buffer; int ctrl_dma; TYPE_6__* ctrlurb; struct acm_ru* ru; TYPE_6__* urb; struct acm* wb; TYPE_10__ line; int ctrlout; struct acm* country_codes; int country_rel_date; scalar_t__ country_code_size; struct acm* instance; struct usb_device* dev; struct acm_rb* rb; TYPE_9__ port; scalar_t__ is_int_ep; int rx_endpoint; int mutex; int read_lock; int write_lock; int throttle_lock; int drain_wait; int work; TYPE_5__ urb_task; struct usb_interface* data; struct usb_interface* control; } ;
struct TYPE_17__ {int transfer_dma; int transfer_flags; } ;
struct TYPE_13__ {int bNumEndpoints; scalar_t__ bInterfaceClass; } ;
struct TYPE_15__ {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct TYPE_14__ {int extralen; unsigned char* extra; struct usb_endpoint_descriptor desc; } ;
struct TYPE_12__ {unsigned char* extra; int extralen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;



 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct acm_wb*) ;
 int VAR_18 ;
 int FUNC_2 (struct acm_wb*,int ) ;
 int FUNC_3 (struct acm_wb*,TYPE_10__*) ;
 int VAR_19 ;
 struct acm_wb** VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_4 (struct acm_wb*) ;
 int FUNC_5 (struct acm_wb*) ;
 int VAR_22 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 struct usb_device* FUNC_14 (struct usb_interface*) ;
 int FUNC_15 (struct acm_wb*) ;
 struct acm_wb* FUNC_16 (scalar_t__,int ) ;
 struct acm_wb* FUNC_17 (int,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct acm_wb*,int*,scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_9__*) ;
 int FUNC_23 (int ,int,int *) ;
 void* FUNC_24 (int ,int ) ;
 void* FUNC_25 (struct usb_device*,int,int ,int *) ;
 int FUNC_26 (struct usb_device*,int,int*,int ) ;
 int FUNC_27 (int *,struct usb_interface*,struct acm_wb*) ;
 int FUNC_28 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_29 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_30 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_31 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_32 (struct usb_endpoint_descriptor*) ;
 int FUNC_33 (TYPE_6__*,struct usb_device*,int ,int *,int,int ,struct acm_wb*) ;
 int FUNC_34 (TYPE_6__*,struct usb_device*,int ,int*,int,int ,struct acm_wb*,int) ;
 int FUNC_35 (TYPE_6__*) ;
 int FUNC_36 (struct usb_interface*) ;
 struct usb_interface* FUNC_37 (struct usb_device*,int) ;
 scalar_t__ FUNC_38 (struct usb_interface*) ;
 int FUNC_39 (struct usb_device*,int ) ;
 int FUNC_40 (struct usb_device*,int ) ;
 int FUNC_41 (struct usb_interface*,struct acm_wb*) ;
 int FUNC_42 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_43(struct usb_interface *VAR_26,
       const struct usb_device_id *VAR_27)
{
 struct usb_cdc_union_desc *VAR_28 = ((void*)0);
 struct usb_cdc_country_functional_desc *VAR_29 = ((void*)0);
 unsigned char *VAR_30 = VAR_26->altsetting->extra;
 int VAR_31 = VAR_26->altsetting->extralen;
 struct usb_interface *VAR_32;
 struct usb_interface *VAR_33;
 struct usb_endpoint_descriptor *VAR_34 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_35 = ((void*)0);
 struct usb_endpoint_descriptor *VAR_36 = ((void*)0);
 struct usb_device *VAR_37 = FUNC_14(VAR_26);
 struct acm *VAR_38;
 int VAR_39;
 int VAR_40, VAR_41;
 u8 *VAR_42;
 u8 VAR_43 = 0;
 u8 VAR_44 = 0;
 int VAR_45 = -1;
 int VAR_46;
 unsigned long VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50 = 0;


 VAR_47 = (unsigned long)VAR_27->driver_info;
 VAR_48 = (VAR_47 == VAR_11) ? 1 : VAR_0;


 if (VAR_47 == VAR_10) {
  VAR_33 = FUNC_37(VAR_37, 1);
  VAR_32 = FUNC_37(VAR_37, 0);
  goto skip_normal_probe;
 }


 if (!VAR_30) {
  FUNC_9(&VAR_26->dev, "Weird descriptor references\n");
  return -VAR_5;
 }

 if (!VAR_31) {
  if (VAR_26->cur_altsetting->endpoint->extralen &&
    VAR_26->cur_altsetting->endpoint->extra) {
   FUNC_8(&VAR_26->dev,
    "Seeking extra descriptors on endpoint\n");
   VAR_31 = VAR_26->cur_altsetting->endpoint->extralen;
   VAR_30 = VAR_26->cur_altsetting->endpoint->extra;
  } else {
   FUNC_9(&VAR_26->dev,
    "Zero length descriptor references\n");
   return -VAR_5;
  }
 }

 while (VAR_31 > 0) {
  if (VAR_30[1] != VAR_14) {
   FUNC_9(&VAR_26->dev, "skipping garbage\n");
   goto next_desc;
  }

  switch (VAR_30[2]) {
  case 128:
   if (VAR_28) {
    FUNC_9(&VAR_26->dev, "More than one "
     "union descriptor, skipping ...\n");
    goto next_desc;
   }
   VAR_28 = (struct usb_cdc_union_desc *)VAR_30;
   break;
  case 130:
   VAR_29 = (struct usb_cdc_country_functional_desc *)VAR_30;
   break;
  case 129:
   break;
  case 132:
   VAR_43 = VAR_30[3];
   break;
  case 131:
   VAR_44 = VAR_30[3];
   VAR_45 = VAR_30[4];
   if ((VAR_44 & 3) != 3)
    FUNC_9(&VAR_26->dev, "This device cannot do calls on its own. It is not a modem.\n");
   break;
  default:



   FUNC_8(&VAR_26->dev, "Ignoring descriptor: "
     "type %02x, length %d\n",
     VAR_30[2], VAR_30[0]);
   break;
  }
next_desc:
  VAR_31 -= VAR_30[0];
  VAR_30 += VAR_30[0];
 }

 if (!VAR_28) {
  if (VAR_45 > 0) {
   FUNC_8(&VAR_26->dev, "No union descriptor, using call management descriptor\n");
   VAR_33 = FUNC_37(VAR_37, (VAR_46 = VAR_45));
   VAR_32 = VAR_26;
  } else {
   if (VAR_26->cur_altsetting->desc.bNumEndpoints != 3) {
    FUNC_8(&VAR_26->dev,"No union descriptor, giving up\n");
    return -VAR_6;
   } else {
    FUNC_11(&VAR_26->dev,"No union descriptor, testing for castrated device\n");
    VAR_50 = 1;
    VAR_32 = VAR_33 = VAR_26;
    goto look_for_collapsed_interface;
   }
  }
 } else {
  VAR_32 = FUNC_37(VAR_37, VAR_28->bMasterInterface0);
  VAR_33 = FUNC_37(VAR_37, (VAR_46 = VAR_28->bSlaveInterface0));
  if (!VAR_32 || !VAR_33) {
   FUNC_8(&VAR_26->dev, "no interfaces\n");
   return -VAR_6;
  }
 }

 if (VAR_46 != VAR_45)
  FUNC_8(&VAR_26->dev, "Separate call control interface. That is not fully supported.\n");

 if (VAR_32 == VAR_33) {

  FUNC_11(&VAR_26->dev,"Control and data interfaces are not separated!\n");
  VAR_50 = 1;

  VAR_47 |= VAR_9;
  if (VAR_33->cur_altsetting->desc.bNumEndpoints != 3) {
   FUNC_9(&VAR_26->dev, "This needs exactly 3 endpoints\n");
   return -VAR_5;
  }
look_for_collapsed_interface:
  for (VAR_49 = 0; VAR_49 < 3; VAR_49++) {
   struct usb_endpoint_descriptor *VAR_51;
   VAR_51 = &VAR_33->cur_altsetting->endpoint[VAR_49].desc;

   if (FUNC_31(VAR_51))
    VAR_34 = VAR_51;
   else if (FUNC_30(VAR_51))
    VAR_36 = VAR_51;
   else if (FUNC_29(VAR_51))
    VAR_35 = VAR_51;
   else
    return -VAR_5;
  }
  if (!VAR_34 || !VAR_35 || !VAR_36)
   return -VAR_6;
  else
   goto made_compressed_probe;
 }

skip_normal_probe:


 if (VAR_33->cur_altsetting->desc.bInterfaceClass
      != VAR_3) {
  if (VAR_32->cur_altsetting->desc.bInterfaceClass
      == VAR_3) {
   struct usb_interface *VAR_52;
   FUNC_8(&VAR_26->dev,
    "Your device has switched interfaces.\n");
   VAR_52 = VAR_32;
   VAR_32 = VAR_33;
   VAR_33 = VAR_52;
  } else {
   return -VAR_5;
  }
 }


 if (!VAR_50 && VAR_26 != VAR_32)
  return -VAR_6;

 if (!VAR_50 && FUNC_38(VAR_33)) {

  FUNC_8(&VAR_26->dev, "The data interface isn't available\n");
  return -VAR_4;
 }


 if (VAR_33->cur_altsetting->desc.bNumEndpoints < 2)
  return -VAR_5;

 VAR_34 = &VAR_32->cur_altsetting->endpoint[0].desc;
 VAR_35 = &VAR_33->cur_altsetting->endpoint[0].desc;
 VAR_36 = &VAR_33->cur_altsetting->endpoint[1].desc;



 if (!FUNC_28(VAR_35)) {

  struct usb_endpoint_descriptor *VAR_53;
  FUNC_8(&VAR_26->dev,
   "The data interface has switched endpoints\n");
  VAR_53 = VAR_35;
  VAR_35 = VAR_36;
  VAR_36 = VAR_53;
 }
made_compressed_probe:
 FUNC_7("interfaces are valid");
 for (VAR_39 = 0; VAR_39 < VAR_2 && VAR_20[VAR_39]; VAR_39++);

 if (VAR_39 == VAR_2) {
  FUNC_9(&VAR_26->dev, "no more free acm devices\n");
  return -VAR_6;
 }

 VAR_38 = FUNC_17(sizeof(struct acm), VAR_8);
 if (VAR_38 == ((void*)0)) {
  FUNC_8(&VAR_26->dev, "out of memory (acm kzalloc)\n");
  goto alloc_fail;
 }

 VAR_40 = FUNC_18(VAR_34->wMaxPacketSize);
 VAR_41 = FUNC_18(VAR_35->wMaxPacketSize) *
    (VAR_47 == VAR_11 ? 1 : 2);
 VAR_38->combined_interfaces = VAR_50;
 VAR_38->writesize = FUNC_18(VAR_36->wMaxPacketSize) * 20;
 VAR_38->control = VAR_32;
 VAR_38->data = VAR_33;
 VAR_38->minor = VAR_39;
 VAR_38->dev = VAR_37;
 VAR_38->ctrl_caps = VAR_43;
 if (VAR_47 & VAR_9)
  VAR_38->ctrl_caps &= ~VAR_13;
 VAR_38->ctrlsize = VAR_40;
 VAR_38->readsize = VAR_41;
 VAR_38->rx_buflimit = VAR_48;
 VAR_38->urb_task.func = VAR_18;
 VAR_38->urb_task.data = (unsigned long) VAR_38;
 FUNC_0(&VAR_38->work, VAR_19);
 FUNC_13(&VAR_38->drain_wait);
 FUNC_21(&VAR_38->throttle_lock);
 FUNC_21(&VAR_38->write_lock);
 FUNC_21(&VAR_38->read_lock);
 FUNC_20(&VAR_38->mutex);
 VAR_38->rx_endpoint = FUNC_39(VAR_37, VAR_35->bEndpointAddress);
 VAR_38->is_int_ep = FUNC_32(VAR_35);
 if (VAR_38->is_int_ep)
  VAR_38->bInterval = VAR_35->bInterval;
 FUNC_22(&VAR_38->port);
 VAR_38->port.ops = &VAR_17;

 VAR_42 = FUNC_25(VAR_37, VAR_40, VAR_8, &VAR_38->ctrl_dma);
 if (!VAR_42) {
  FUNC_8(&VAR_26->dev, "out of memory (ctrl buffer alloc)\n");
  goto alloc_fail2;
 }
 VAR_38->ctrl_buffer = VAR_42;

 if (FUNC_4(VAR_38) < 0) {
  FUNC_8(&VAR_26->dev, "out of memory (write buffer alloc)\n");
  goto alloc_fail4;
 }

 VAR_38->ctrlurb = FUNC_24(0, VAR_8);
 if (!VAR_38->ctrlurb) {
  FUNC_8(&VAR_26->dev, "out of memory (ctrlurb kmalloc)\n");
  goto alloc_fail5;
 }
 for (VAR_49 = 0; VAR_49 < VAR_48; VAR_49++) {
  struct acm_ru *VAR_54 = &(VAR_38->ru[VAR_49]);

  VAR_54->urb = FUNC_24(0, VAR_8);
  if (VAR_54->urb == ((void*)0)) {
   FUNC_8(&VAR_26->dev,
    "out of memory (read urbs usb_alloc_urb)\n");
   goto alloc_fail7;
  }

  VAR_54->urb->transfer_flags |= VAR_12;
  VAR_54->instance = VAR_38;
 }
 for (VAR_49 = 0; VAR_49 < VAR_48; VAR_49++) {
  struct acm_rb *VAR_55 = &(VAR_38->rb[VAR_49]);

  VAR_55->base = FUNC_25(VAR_38->dev, VAR_41,
    VAR_8, &VAR_55->dma);
  if (!VAR_55->base) {
   FUNC_8(&VAR_26->dev,
    "out of memory (read bufs usb_buffer_alloc)\n");
   goto alloc_fail7;
  }
 }
 for (VAR_49 = 0; VAR_49 < VAR_1; VAR_49++) {
  struct acm_wb *VAR_56 = &(VAR_38->wb[VAR_49]);

  VAR_56->urb = FUNC_24(0, VAR_8);
  if (VAR_56->urb == ((void*)0)) {
   FUNC_8(&VAR_26->dev,
    "out of memory (write urbs usb_alloc_urb)");
   goto alloc_fail7;
  }

  if (FUNC_32(VAR_36))
   FUNC_34(VAR_56->urb, VAR_37,
    FUNC_42(VAR_37, VAR_36->bEndpointAddress),
    ((void*)0), VAR_38->writesize, VAR_22, VAR_56, VAR_36->bInterval);
  else
   FUNC_33(VAR_56->urb, VAR_37,
    FUNC_42(VAR_37, VAR_36->bEndpointAddress),
    ((void*)0), VAR_38->writesize, VAR_22, VAR_56);
  VAR_56->urb->transfer_flags |= VAR_12;
  VAR_56->instance = VAR_38;
 }

 FUNC_41(VAR_26, VAR_38);

 VAR_49 = FUNC_12(&VAR_26->dev, &VAR_23);
 if (VAR_49 < 0)
  goto alloc_fail8;

 if (VAR_29) {
  VAR_38->country_codes = FUNC_16(VAR_29->bLength - 4, VAR_8);
  if (!VAR_38->country_codes)
   goto skip_countries;
  VAR_38->country_code_size = VAR_29->bLength - 4;
  FUNC_19(VAR_38->country_codes, (u8 *)&VAR_29->wCountyCode0,
       VAR_29->bLength - 4);
  VAR_38->country_rel_date = VAR_29->iCountryCodeRelDate;

  VAR_49 = FUNC_12(&VAR_26->dev, &VAR_25);
  if (VAR_49 < 0) {
   FUNC_15(VAR_38->country_codes);
   goto skip_countries;
  }

  VAR_49 = FUNC_12(&VAR_26->dev,
      &VAR_24);
  if (VAR_49 < 0) {
   FUNC_15(VAR_38->country_codes);
   goto skip_countries;
  }
 }

skip_countries:
 FUNC_34(VAR_38->ctrlurb, VAR_37,
    FUNC_40(VAR_37, VAR_34->bEndpointAddress),
    VAR_38->ctrl_buffer, VAR_40, VAR_15, VAR_38,

    VAR_34->bInterval ? VAR_34->bInterval : 0xff);
 VAR_38->ctrlurb->transfer_flags |= VAR_12;
 VAR_38->ctrlurb->transfer_dma = VAR_38->ctrl_dma;

 FUNC_10(&VAR_26->dev, "ttyACM%d: USB ACM device\n", VAR_39);

 FUNC_2(VAR_38, VAR_38->ctrlout);

 VAR_38->line.dwDTERate = FUNC_6(9600);
 VAR_38->line.bDataBits = 8;
 FUNC_3(VAR_38, &VAR_38->line);

 FUNC_27(&VAR_16, VAR_33, VAR_38);
 FUNC_41(VAR_33, VAR_38);

 FUNC_36(VAR_32);
 FUNC_23(VAR_21, VAR_39, &VAR_32->dev);

 VAR_20[VAR_39] = VAR_38;

 return 0;
alloc_fail8:
 for (VAR_49 = 0; VAR_49 < VAR_1; VAR_49++)
  FUNC_35(VAR_38->wb[VAR_49].urb);
alloc_fail7:
 FUNC_1(VAR_38);
 for (VAR_49 = 0; VAR_49 < VAR_48; VAR_49++)
  FUNC_35(VAR_38->ru[VAR_49].urb);
 FUNC_35(VAR_38->ctrlurb);
alloc_fail5:
 FUNC_5(VAR_38);
alloc_fail4:
 FUNC_26(VAR_37, VAR_40, VAR_38->ctrl_buffer, VAR_38->ctrl_dma);
alloc_fail2:
 FUNC_15(VAR_38);
alloc_fail:
 return -VAR_7;
}
