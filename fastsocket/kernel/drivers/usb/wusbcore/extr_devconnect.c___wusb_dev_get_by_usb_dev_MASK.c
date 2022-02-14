
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wusbhc {scalar_t__ ports_max; } ;
struct wusb_dev {int dummy; } ;
struct usb_device {int portnum; } ;
struct TYPE_2__ {struct wusb_dev* wusb_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wusb_dev*) ;
 TYPE_1__* FUNC_2 (struct wusbhc*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

struct wusb_dev *FUNC_4(struct wusbhc *VAR_0,
        struct usb_device *VAR_1)
{
 struct wusb_dev *VAR_2;
 u8 VAR_3;

 VAR_3 = FUNC_3(VAR_1->portnum);
 FUNC_0(VAR_3 > VAR_0->ports_max);
 VAR_2 = FUNC_2(VAR_0, VAR_3)->wusb_dev;
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 return VAR_2;
}
