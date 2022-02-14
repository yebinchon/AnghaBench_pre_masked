
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct sn9c102_device {int state; int * transfer_buffer; int * urb; struct usb_device* usbdev; } ;
typedef size_t s8 ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sn9c102_device* VAR_2)
{
 struct usb_device *VAR_3 = VAR_2->usbdev;
 s8 VAR_4;
 int VAR_5 = 0;

 if (VAR_2->state & VAR_0)
  return 0;

 for (VAR_4 = VAR_1-1; VAR_4 >= 0; VAR_4--) {
  FUNC_3(VAR_2->urb[VAR_4]);
  FUNC_2(VAR_2->urb[VAR_4]);
  FUNC_1(VAR_2->transfer_buffer[VAR_4]);
 }

 VAR_5 = FUNC_4(VAR_3, 0, 0);
 if (VAR_5)
  FUNC_0(3, "usb_set_interface() failed");

 return VAR_5;
}
