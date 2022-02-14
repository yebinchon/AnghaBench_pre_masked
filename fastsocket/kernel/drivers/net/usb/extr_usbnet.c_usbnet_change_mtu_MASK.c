
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int hard_mtu; int rx_urb_size; int maxpacket; } ;
struct net_device {int hard_header_len; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usbnet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct usbnet*) ;

int FUNC_2 (struct net_device *VAR_2, int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_3 + VAR_2->hard_header_len;
 int VAR_6 = VAR_4->hard_mtu;
 int VAR_7 = VAR_4->rx_urb_size;

 if (VAR_3 <= 0)
  return -VAR_1;

 if ((VAR_5 % VAR_4->maxpacket) == 0)
  return -VAR_0;
 VAR_2->mtu = VAR_3;

 VAR_4->hard_mtu = VAR_2->mtu + VAR_2->hard_header_len;
 if (VAR_4->rx_urb_size == VAR_6) {
  VAR_4->rx_urb_size = VAR_4->hard_mtu;
  if (VAR_4->rx_urb_size > VAR_7)
   FUNC_1(VAR_4);
 }

 return 0;
}
