
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bEncryptionValue; int bEncryptionType; } ;
struct wusb_dev {TYPE_1__ ccm1_etd; } ;
struct device {int dummy; } ;
struct usb_device {struct wusb_dev* wusb_dev; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,int,int) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int,int ,int *,int ,int) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_4, int VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 struct wusb_dev *VAR_8 = VAR_4->wusb_dev;

 if (VAR_5) {
  VAR_5 = VAR_8->ccm1_etd.bEncryptionValue;
 } else {

  VAR_5 = 0;
 }

 VAR_6 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0),
   VAR_2,
   VAR_0 | VAR_3 | VAR_1,
   VAR_5, 0, ((void*)0), 0, 1000 );
 if (VAR_6 < 0)
  FUNC_0(VAR_7, "Can't set device's WUSB encryption to "
   "%s (value %d): %d\n",
   FUNC_3(VAR_8->ccm1_etd.bEncryptionType),
   VAR_8->ccm1_etd.bEncryptionValue, VAR_6);
 return VAR_6;
}
