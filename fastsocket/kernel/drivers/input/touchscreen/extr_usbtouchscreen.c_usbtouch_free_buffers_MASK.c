
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtouch_usb {int buffer; int data_dma; int data; TYPE_1__* type; } ;
struct usb_device {int dummy; } ;
struct TYPE_2__ {int rept_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usb_device *VAR_0,
      struct usbtouch_usb *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->type->rept_size,
                 VAR_1->data, VAR_1->data_dma);
 FUNC_0(VAR_1->buffer);
}
