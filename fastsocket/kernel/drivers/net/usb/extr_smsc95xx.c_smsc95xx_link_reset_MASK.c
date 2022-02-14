
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_if_info {int phy_id; } ;
struct usbnet {int net; struct mii_if_info mii; scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; int mac_cr_lock; } ;
struct ethtool_cmd {scalar_t__ duplex; int speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usbnet*,char*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct mii_if_info*,int,int) ;
 int FUNC_2 (struct mii_if_info*,struct ethtool_cmd*) ;
 scalar_t__ FUNC_3 (struct usbnet*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct usbnet*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct usbnet*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_8)
{
 struct smsc95xx_priv *VAR_9 = (struct smsc95xx_priv *)(VAR_8->data[0]);
 struct mii_if_info *VAR_10 = &VAR_8->mii;
 struct ethtool_cmd VAR_11;
 unsigned long VAR_12;
 u16 VAR_13, VAR_14;
 u32 VAR_15;


 FUNC_4(VAR_8->net, VAR_10->phy_id, VAR_7);
 VAR_15 = 0xFFFFFFFF;
 FUNC_6(VAR_8, VAR_1, VAR_15);

 FUNC_1(VAR_10, 1, 1);
 FUNC_2(&VAR_8->mii, &VAR_11);
 VAR_13 = FUNC_4(VAR_8->net, VAR_10->phy_id, VAR_5);
 VAR_14 = FUNC_4(VAR_8->net, VAR_10->phy_id, VAR_6);

 if (FUNC_3(VAR_8))
  FUNC_0(VAR_8, "speed: %d duplex: %d lcladv: %04x rmtadv: %04x",
   VAR_11.speed, VAR_11.duplex, VAR_13, VAR_14);

 FUNC_7(&VAR_9->mac_cr_lock, VAR_12);
 if (VAR_11.duplex != VAR_0) {
  VAR_9->mac_cr &= ~VAR_3;
  VAR_9->mac_cr |= VAR_4;
 } else {
  VAR_9->mac_cr &= ~VAR_4;
  VAR_9->mac_cr |= VAR_3;
 }
 FUNC_8(&VAR_9->mac_cr_lock, VAR_12);

 FUNC_6(VAR_8, VAR_2, VAR_9->mac_cr);

 FUNC_5(VAR_8, VAR_11.duplex, VAR_13, VAR_14);

 return 0;
}
