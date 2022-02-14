
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {struct asix_common_private* driver_priv; } ;
struct sk_buff {int dummy; } ;
struct asix_rx_fixup_info {int dummy; } ;
struct asix_common_private {struct asix_rx_fixup_info rx_fixup_info; } ;


 int FUNC_0 (struct usbnet*,struct sk_buff*,struct asix_rx_fixup_info*) ;

int FUNC_1(struct usbnet *VAR_0, struct sk_buff *VAR_1)
{
 struct asix_common_private *VAR_2 = VAR_0->driver_priv;
 struct asix_rx_fixup_info *VAR_3 = &VAR_2->rx_fixup_info;

 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
