
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int phy_mutex; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int,int *) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*,char*,int,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct usbnet* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_7(VAR_1);
 __le16 VAR_5;

 FUNC_5(&VAR_4->phy_mutex);
 FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_0, VAR_2,
    (__u16)VAR_3, 2, &VAR_5);
 FUNC_1(VAR_4);
 FUNC_6(&VAR_4->phy_mutex);

 FUNC_3(VAR_4, "asix_mdio_read() phy_id=0x%02x, loc=0x%02x, returns=0x%04x", VAR_2, VAR_3, FUNC_4(VAR_5));

 return FUNC_4(VAR_5);
}
