
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; scalar_t__ rx_urb_size; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {scalar_t__ mtu; scalar_t__ hard_header_len; } ;


 int FUNC_0 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{



 VAR_0->net->hard_header_len += 6;
 VAR_0->rx_urb_size = VAR_0->net->hard_header_len + VAR_0->net->mtu;
 return FUNC_0(VAR_0, VAR_1);
}
