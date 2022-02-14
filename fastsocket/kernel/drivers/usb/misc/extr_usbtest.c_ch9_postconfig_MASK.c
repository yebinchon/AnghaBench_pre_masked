
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usbtest_dev {int* buf; struct usb_interface* intf; } ;
struct usb_qualifier_descriptor {unsigned int bNumConfigurations; } ;
struct usb_interface {int num_altsetting; int dev; TYPE_5__* altsetting; } ;
struct TYPE_8__ {int bNumConfigurations; int bcdUSB; } ;
struct usb_device {scalar_t__ speed; TYPE_3__ descriptor; TYPE_2__* actconfig; } ;
struct TYPE_9__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_4__ desc; } ;
struct TYPE_6__ {int bConfigurationValue; } ;
struct TYPE_7__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct usbtest_dev*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usbtest_dev*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (struct usbtest_dev*,int) ;
 int FUNC_6 (struct usb_device*,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_7 (struct usb_device*,int ,int,int*,int) ;
 int FUNC_8 (struct usb_device*,int,int ,int*) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10 (struct usbtest_dev *VAR_14)
{
 struct usb_interface *VAR_15 = VAR_14->intf;
 struct usb_device *VAR_16 = FUNC_2 (VAR_15);
 int VAR_17, VAR_18, VAR_19;




 for (VAR_17 = 0; VAR_17 < VAR_15->num_altsetting; VAR_17++) {


  VAR_18 = VAR_15->altsetting [VAR_17].desc.bAlternateSetting;
  if (VAR_18 < 0 || VAR_18 >= VAR_15->num_altsetting) {
   FUNC_0(&VAR_15->dev,
     "invalid alt [%d].bAltSetting = %d\n",
     VAR_17, VAR_18);
  }


  if (VAR_13 && VAR_15->num_altsetting == 1)
   continue;


  VAR_19 = FUNC_5 (VAR_14, VAR_18);
  if (VAR_19) {
   FUNC_0(&VAR_15->dev, "can't set_interface = %d, %d\n",
     VAR_18, VAR_19);
   return VAR_19;
  }


  VAR_19 = FUNC_1 (VAR_14);
  if (VAR_19 != VAR_18) {
   FUNC_0(&VAR_15->dev, "get alt should be %d, was %d\n",
     VAR_18, VAR_19);
   return (VAR_19 < 0) ? VAR_19 : -VAR_0;
  }

 }


 if (!VAR_13 || VAR_16->descriptor.bNumConfigurations != 1) {
  int VAR_20 = VAR_16->actconfig->desc.bConfigurationValue;





  VAR_19 = FUNC_6 (VAR_16, FUNC_9 (VAR_16, 0),
    VAR_11,
    VAR_4 | VAR_9,
    0, 0, VAR_14->buf, 1, VAR_3);
  if (VAR_19 != 1 || VAR_14->buf [0] != VAR_20) {
   FUNC_0(&VAR_15->dev, "get config --> %d %d (1 %d)\n",
    VAR_19, VAR_14->buf[0], VAR_20);
   return (VAR_19 < 0) ? VAR_19 : -VAR_0;
  }
 }


 VAR_19 = FUNC_7 (VAR_16, VAR_6, 0,
   VAR_14->buf, sizeof VAR_16->descriptor);
 if (VAR_19 != sizeof VAR_16->descriptor) {
  FUNC_0(&VAR_15->dev, "dev descriptor --> %d\n", VAR_19);
  return (VAR_19 < 0) ? VAR_19 : -VAR_0;
 }


 for (VAR_17 = 0; VAR_17 < VAR_16->descriptor.bNumConfigurations; VAR_17++) {
  VAR_19 = FUNC_7 (VAR_16, VAR_5, VAR_17,
    VAR_14->buf, VAR_2);
  if (!FUNC_3(VAR_14, VAR_19)) {
   FUNC_0(&VAR_15->dev,
     "config [%d] descriptor --> %d\n",
     VAR_17, VAR_19);
   return (VAR_19 < 0) ? VAR_19 : -VAR_0;
  }



 }


 if (FUNC_4(VAR_16->descriptor.bcdUSB) == 0x0200) {
  struct usb_qualifier_descriptor *VAR_21 = ((void*)0);


  VAR_19 = FUNC_7 (VAR_16,
    VAR_7, 0, VAR_14->buf,
    sizeof (struct usb_qualifier_descriptor));
  if (VAR_19 == -VAR_1) {
   if (VAR_16->speed == VAR_12) {
    FUNC_0(&VAR_15->dev,
      "hs dev qualifier --> %d\n",
      VAR_19);
    return (VAR_19 < 0) ? VAR_19 : -VAR_0;
   }

  } else if (VAR_19 != sizeof (struct usb_qualifier_descriptor)) {
   FUNC_0(&VAR_15->dev, "dev qualifier --> %d\n", VAR_19);
   return (VAR_19 < 0) ? VAR_19 : -VAR_0;
  } else
   VAR_21 = (struct usb_qualifier_descriptor *) VAR_14->buf;


  if (VAR_21) {
   unsigned VAR_22 = VAR_21->bNumConfigurations;
   for (VAR_17 = 0; VAR_17 < VAR_22; VAR_17++) {
    VAR_19 = FUNC_7 (VAR_16,
     VAR_8, VAR_17,
     VAR_14->buf, VAR_2);
    if (!FUNC_3(VAR_14, VAR_19)) {
     FUNC_0(&VAR_15->dev,
      "other speed config --> %d\n",
      VAR_19);
     return (VAR_19 < 0) ? VAR_19 : -VAR_0;
    }
   }
  }
 }



 VAR_19 = FUNC_8 (VAR_16, VAR_9, 0, VAR_14->buf);
 if (VAR_19 != 2) {
  FUNC_0(&VAR_15->dev, "get dev status --> %d\n", VAR_19);
  return (VAR_19 < 0) ? VAR_19 : -VAR_0;
 }




 VAR_19 = FUNC_8 (VAR_16, VAR_10,
   VAR_15->altsetting [0].desc.bInterfaceNumber, VAR_14->buf);
 if (VAR_19 != 2) {
  FUNC_0(&VAR_15->dev, "get interface status --> %d\n", VAR_19);
  return (VAR_19 < 0) ? VAR_19 : -VAR_0;
 }


 return 0;
}
