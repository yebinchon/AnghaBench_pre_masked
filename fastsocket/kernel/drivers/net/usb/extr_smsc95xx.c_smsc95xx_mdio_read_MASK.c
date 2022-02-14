
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int phy_id_mask; int reg_num_mask; } ;
struct usbnet {int phy_mutex; TYPE_1__ mii; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*,int ,int*) ;
 int FUNC_6 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 struct usbnet *VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8, VAR_9;

 FUNC_1(&VAR_7->phy_mutex);


 if (FUNC_4(VAR_7)) {
  FUNC_0(VAR_7, "MII is busy in smsc95xx_mdio_read");
  FUNC_2(&VAR_7->phy_mutex);
  return -VAR_0;
 }


 VAR_5 &= VAR_7->mii.phy_id_mask;
 VAR_6 &= VAR_7->mii.reg_num_mask;
 VAR_9 = (VAR_5 << 11) | (VAR_6 << 6) | VAR_3;
 FUNC_6(VAR_7, VAR_1, VAR_9);

 if (FUNC_4(VAR_7)) {
  FUNC_0(VAR_7, "Timed out reading MII reg %02X", VAR_6);
  FUNC_2(&VAR_7->phy_mutex);
  return -VAR_0;
 }

 FUNC_5(VAR_7, VAR_2, &VAR_8);

 FUNC_2(&VAR_7->phy_mutex);

 return (u16)(VAR_8 & 0xFFFF);
}
