
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (struct usbnet*,int,int,int ) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, int VAR_1, int VAR_2,
         int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_3(VAR_0);
 __le16 VAR_5 = FUNC_0(VAR_3);

 if (VAR_1) {
  FUNC_1(VAR_4, "Only internal phy supported");
  return;
 }

 FUNC_1(VAR_4,"dm9601_mdio_write() phy_id=0x%02x, loc=0x%02x, val=0x%04x",
        VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_4, 1, VAR_2, VAR_5);
}
