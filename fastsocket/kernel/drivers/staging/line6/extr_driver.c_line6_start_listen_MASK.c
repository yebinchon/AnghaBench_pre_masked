
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_line6 {TYPE_1__* urb_listen; int interval; int buffer_listen; int ep_control_read; int usbdev; } ;
struct TYPE_3__ {scalar_t__ actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ,struct usb_line6*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_line6 *VAR_3)
{
 FUNC_0(VAR_3->urb_listen, VAR_3->usbdev,
    FUNC_1(VAR_3->usbdev, VAR_3->ep_control_read),
    VAR_3->buffer_listen, VAR_1,
    VAR_2, VAR_3, VAR_3->interval);
 VAR_3->urb_listen->actual_length = 0;
 return FUNC_2(VAR_3->urb_listen, VAR_0);
}
