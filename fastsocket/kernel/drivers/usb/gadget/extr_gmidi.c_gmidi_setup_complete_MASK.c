
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ actual; scalar_t__ length; scalar_t__ status; } ;
struct usb_ep {scalar_t__ driver_data; } ;
struct gmidi_device {int dummy; } ;


 int FUNC_0 (struct gmidi_device*,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 if (VAR_1->status || VAR_1->actual != VAR_1->length) {
  FUNC_0((struct gmidi_device *) VAR_0->driver_data,
    "setup complete --> %d, %d/%d\n",
    VAR_1->status, VAR_1->actual, VAR_1->length);
 }
}
