
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; scalar_t__ hard_mtu; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int * netdev_ops; scalar_t__ hard_header_len; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*,struct usb_interface*) ;
 int FUNC_1 (struct usbnet*,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_2, struct usb_interface *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, 3);

 if (VAR_4)
  return VAR_4;

 VAR_2->net->hard_header_len += VAR_0;
 VAR_2->hard_mtu = VAR_2->net->mtu + VAR_2->net->hard_header_len;
 VAR_2->net->netdev_ops = &VAR_1;

 return FUNC_0(VAR_2, VAR_3);
}
