
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {int kobj; } ;
struct usb_interface {TYPE_10__ dev; TYPE_3__* altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_18__ {TYPE_10__* parent; } ;
struct input_dev {char* name; scalar_t__* absmax; int keybit; int mscbit; int relbit; int absbit; int evbit; int close; int open; TYPE_6__ dev; int id; int phys; } ;
struct TYPE_16__ {int programmableDelay; int jitterDelay; int stylusButtonLower; int stylusButtonUpper; int mouseButtonRight; int mouseButtonMiddle; int mouseButtonLeft; void* yTilt; void* xTilt; int toolMode; int coordinateMode; int pointerMode; } ;
struct TYPE_17__ {int usbPath; } ;
struct aiptek {int lastMacro; int data_dma; int data; TYPE_7__* urb; struct input_dev* inputdev; TYPE_4__ curSetting; struct usb_device* usbdev; TYPE_5__ features; TYPE_4__ newSetting; scalar_t__ previousJitterable; scalar_t__ endDelay; scalar_t__ inDelay; int ifnum; } ;
struct TYPE_19__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_14__ {int bInterfaceNumber; } ;
struct TYPE_15__ {TYPE_1__* endpoint; TYPE_2__ desc; } ;
struct TYPE_13__ {struct usb_endpoint_descriptor desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int,int ) ;
 int* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (struct aiptek*) ;
 int* VAR_36 ;
 int FUNC_3 (TYPE_10__*,char*,...) ;
 int FUNC_4 (TYPE_10__*,char*,...) ;
 int* VAR_37 ;
 struct input_dev* FUNC_5 () ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,size_t,int ,int,int ,int ) ;
 int FUNC_9 (struct input_dev*,struct aiptek*) ;
 struct usb_device* FUNC_10 (struct usb_interface*) ;
 int VAR_38 ;
 int FUNC_11 (struct aiptek*) ;
 struct aiptek* FUNC_12 (int,int ) ;
 int* VAR_39 ;
 void* VAR_40 ;
 int* VAR_41 ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 TYPE_7__* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct usb_device*,int ,int ,int *) ;
 int FUNC_18 (struct usb_device*,int ,int ,int ) ;
 int FUNC_19 (TYPE_7__*,struct usb_device*,int ,int ,int,int ,struct aiptek*,int ) ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (struct usb_device*,int ,int) ;
 int FUNC_22 (struct usb_device*,int ) ;
 int FUNC_23 (struct usb_interface*,struct aiptek*) ;
 int FUNC_24 (struct usb_device*,int *) ;

__attribute__((used)) static int
FUNC_25(struct usb_interface *VAR_42, const struct usb_device_id *VAR_43)
{
 struct usb_device *VAR_44 = FUNC_10(VAR_42);
 struct usb_endpoint_descriptor *VAR_45;
 struct aiptek *VAR_46;
 struct input_dev *VAR_47;
 int VAR_48;
 int VAR_49[] = { 0,
  VAR_17,
  VAR_16,
  VAR_14,
  VAR_12,
  VAR_13,
  VAR_15
 };
 int VAR_50 = -VAR_26;







 VAR_49[0] = VAR_40;

 VAR_46 = FUNC_12(sizeof(struct aiptek), VAR_28);
 VAR_47 = FUNC_5();
 if (!VAR_46 || !VAR_47) {
  FUNC_4(&VAR_42->dev,
    "cannot allocate memory or input device\n");
  goto fail1;
        }

 VAR_46->data = FUNC_17(VAR_44, VAR_10,
     VAR_27, &VAR_46->data_dma);
        if (!VAR_46->data) {
  FUNC_4(&VAR_42->dev, "cannot allocate usb buffer\n");
  goto fail1;
 }

 VAR_46->urb = FUNC_16(0, VAR_28);
 if (!VAR_46->urb) {
         FUNC_4(&VAR_42->dev, "cannot allocate urb\n");
  goto fail2;
 }

 VAR_46->inputdev = VAR_47;
 VAR_46->usbdev = VAR_44;
 VAR_46->ifnum = VAR_42->altsetting[0].desc.bInterfaceNumber;
 VAR_46->inDelay = 0;
 VAR_46->endDelay = 0;
 VAR_46->previousJitterable = 0;
 VAR_46->lastMacro = -1;







 VAR_46->curSetting.pointerMode = VAR_11;
 VAR_46->curSetting.coordinateMode = VAR_6;
 VAR_46->curSetting.toolMode = VAR_23;
 VAR_46->curSetting.xTilt = VAR_20;
 VAR_46->curSetting.yTilt = VAR_20;
 VAR_46->curSetting.mouseButtonLeft = VAR_7;
 VAR_46->curSetting.mouseButtonMiddle = VAR_8;
 VAR_46->curSetting.mouseButtonRight = VAR_9;
 VAR_46->curSetting.stylusButtonUpper = VAR_19;
 VAR_46->curSetting.stylusButtonLower = VAR_18;
 VAR_46->curSetting.jitterDelay = VAR_38;
 VAR_46->curSetting.programmableDelay = VAR_40;



 VAR_46->newSetting = VAR_46->curSetting;
 FUNC_21(VAR_44, VAR_46->features.usbPath,
   sizeof(VAR_46->features.usbPath));
 FUNC_13(VAR_46->features.usbPath, "/input0",
  sizeof(VAR_46->features.usbPath));




 VAR_47->name = "Aiptek";
 VAR_47->phys = VAR_46->features.usbPath;
 FUNC_24(VAR_44, &VAR_47->id);
 VAR_47->dev.parent = &VAR_42->dev;

 FUNC_9(VAR_47, VAR_46);

 VAR_47->open = VAR_35;
 VAR_47->close = VAR_33;




 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_37); ++VAR_48)
         FUNC_1(VAR_37[VAR_48], VAR_47->evbit);

 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_31); ++VAR_48)
         FUNC_1(VAR_31[VAR_48], VAR_47->absbit);

 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_41); ++VAR_48)
         FUNC_1(VAR_41[VAR_48], VAR_47->relbit);

 FUNC_1(VAR_29, VAR_47->mscbit);


 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_36); ++VAR_48)
  FUNC_1(VAR_36[VAR_48], VAR_47->keybit);

 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_39); ++VAR_48)
  FUNC_1(VAR_39[VAR_48], VAR_47->keybit);







 FUNC_8(VAR_47, VAR_4, 0, 2999, 0, 0);
 FUNC_8(VAR_47, VAR_5, 0, 2249, 0, 0);
 FUNC_8(VAR_47, VAR_0, 0, 511, 0, 0);
 FUNC_8(VAR_47, VAR_1, VAR_22, VAR_21, 0, 0);
 FUNC_8(VAR_47, VAR_2, VAR_22, VAR_21, 0, 0);
 FUNC_8(VAR_47, VAR_3, VAR_25, VAR_24 - 1, 0, 0);

 VAR_45 = &VAR_42->altsetting[0].endpoint[0].desc;




 FUNC_19(VAR_46->urb,
    VAR_46->usbdev,
    FUNC_22(VAR_46->usbdev,
     VAR_45->bEndpointAddress),
    VAR_46->data, 8, VAR_34, VAR_46,
    VAR_45->bInterval);

 VAR_46->urb->transfer_dma = VAR_46->data_dma;
 VAR_46->urb->transfer_flags |= VAR_30;
 for (VAR_48 = 0; VAR_48 < FUNC_0(VAR_49); ++VAR_48) {
  VAR_46->curSetting.programmableDelay = VAR_49[VAR_48];
  (void)FUNC_2(VAR_46);
  if (VAR_46->inputdev->absmax[VAR_4] > 0) {
   FUNC_3(&VAR_42->dev,
     "Aiptek using %d ms programming speed\n",
     VAR_46->curSetting.programmableDelay);
   break;
  }
 }



 if (VAR_48 == FUNC_0(VAR_49)) {
  FUNC_3(&VAR_42->dev,
    "Aiptek tried all speeds, no sane response\n");
  goto fail2;
 }



 FUNC_23(VAR_42, VAR_46);



 VAR_50 = FUNC_14(&VAR_42->dev.kobj, &VAR_32);
 if (VAR_50) {
  FUNC_4(&VAR_42->dev, "cannot create sysfs group err: %d\n",
    VAR_50);
  goto fail3;
        }



 VAR_50 = FUNC_7(VAR_46->inputdev);
 if (VAR_50) {
  FUNC_4(&VAR_42->dev,
    "input_register_device returned err: %d\n", VAR_50);
  goto fail4;
        }
 return 0;

 fail4: FUNC_15(&VAR_42->dev.kobj, &VAR_32);
 fail3: FUNC_20(VAR_46->urb);
 fail2: FUNC_18(VAR_44, VAR_10, VAR_46->data,
   VAR_46->data_dma);
 fail1: FUNC_23(VAR_42, ((void*)0));
 FUNC_6(VAR_47);
 FUNC_11(VAR_46);
 return VAR_50;
}
