
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usbatm_data {int flags; struct uea_softc* driver_data; } ;
struct TYPE_8__ {int kobj; } ;
struct usb_interface {TYPE_4__ dev; TYPE_2__* altsetting; } ;
struct usb_device_id {int driver_info; } ;
struct TYPE_7__ {int bcdDevice; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct uea_softc {size_t modem_index; int driver_info; struct usb_device* usb_dev; void* annex; struct usbatm_data* usbatm; } ;
struct TYPE_5__ {int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct usb_device_id const*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int* VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct usb_device*,struct usbatm_data*,int ) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct uea_softc*) ;
 struct uea_softc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 size_t VAR_18 ;
 scalar_t__* VAR_19 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct uea_softc*) ;
 int FUNC_9 (struct usb_device*,char*,unsigned int) ;
 int FUNC_10 (struct usb_device*) ;
 int FUNC_11 (struct usb_device*,char*,...) ;
 int FUNC_12 (struct usb_device*,char*) ;
 scalar_t__ FUNC_13 (struct usb_device*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct usbatm_data *VAR_20, struct usb_interface *VAR_21,
     const struct usb_device_id *VAR_22)
{
 struct usb_device *VAR_23 = FUNC_2(VAR_21);
 struct uea_softc *VAR_24;
 int VAR_25, VAR_26 = VAR_21->altsetting->desc.bInterfaceNumber;
 unsigned int VAR_27;

 FUNC_10(VAR_23);


 if (VAR_26 != VAR_13)
  return -VAR_5;

 VAR_20->flags = (VAR_19[VAR_18] ? 0 : VAR_10);


 VAR_25 = FUNC_1(VAR_23, VAR_20, VAR_14);
 if (VAR_25 < 0)
  return VAR_25;


 if (FUNC_0(VAR_22) != VAR_0) {

  VAR_25 = FUNC_1(VAR_23, VAR_20, VAR_12);
  if (VAR_25 < 0)
   return VAR_25;
 }

 VAR_24 = FUNC_4(sizeof(struct uea_softc), VAR_7);
 if (!VAR_24) {
  FUNC_11(VAR_23, "uea_init: not enough memory !\n");
  return -VAR_6;
 }

 VAR_24->usb_dev = VAR_23;
 VAR_20->driver_data = VAR_24;
 VAR_24->usbatm = VAR_20;
 VAR_24->modem_index = (VAR_18 < VAR_8) ? VAR_18++ : 0;
 VAR_24->driver_info = VAR_22->driver_info;


 if (VAR_16[VAR_24->modem_index] == 1)
  VAR_24->annex = VAR_1;
 else if (VAR_16[VAR_24->modem_index] == 2)
  VAR_24->annex = VAR_2;

 else if (VAR_24->driver_info & VAR_3)
  VAR_24->annex = VAR_1;
 else if (VAR_24->driver_info & VAR_4)
  VAR_24->annex = VAR_2;
 else
  VAR_24->annex = (FUNC_5(VAR_24->usb_dev->descriptor.bcdDevice) & 0x80)?VAR_2:VAR_1;

 VAR_27 = VAR_15[VAR_24->modem_index];

 if (FUNC_0(VAR_22) != VAR_0 && VAR_27 > 0) {
  if (VAR_27 <= 8 && FUNC_13(VAR_23, VAR_12, VAR_27) == 0) {
   FUNC_9(VAR_23, "set alternate %u for 2 interface\n", VAR_27);
   FUNC_12(VAR_23, "using iso mode\n");
   VAR_20->flags |= VAR_11 | VAR_9;
  } else {
   FUNC_11(VAR_23, "setting alternate %u failed for "
     "2 interface, using bulk mode\n", VAR_27);
  }
 }

 VAR_25 = FUNC_6(&VAR_21->dev.kobj, &VAR_17);
 if (VAR_25 < 0)
  goto error;

 VAR_25 = FUNC_8(VAR_24);
 if (VAR_25 < 0)
  goto error_rm_grp;

 return 0;

error_rm_grp:
 FUNC_7(&VAR_21->dev.kobj, &VAR_17);
error:
 FUNC_3(VAR_24);
 return VAR_25;
}
