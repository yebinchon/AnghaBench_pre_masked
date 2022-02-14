
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; int hard_mtu; } ;
struct net_device {int hard_header_len; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,char*,int) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_3 + VAR_2->hard_header_len + 4;

 FUNC_1(VAR_4, "ax88178_change_mtu() new_mtu=%d", VAR_3);

 if (VAR_3 <= 0 || VAR_5 > 16384)
  return -VAR_1;

 if ((VAR_5 % VAR_4->maxpacket) == 0)
  return -VAR_0;

 VAR_2->mtu = VAR_3;
 VAR_4->hard_mtu = VAR_2->mtu + VAR_2->hard_header_len;
 FUNC_0(VAR_4);

 return 0;
}
