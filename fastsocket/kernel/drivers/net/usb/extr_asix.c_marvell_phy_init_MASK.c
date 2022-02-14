
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct usbnet {TYPE_1__ mii; int net; int data; } ;
struct asix_data {scalar_t__ ledmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct usbnet*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_5)
{
 struct asix_data *VAR_6 = (struct asix_data *)&VAR_5->data;
 u16 VAR_7;

 FUNC_2(VAR_5,"marvell_phy_init()");

 VAR_7 = FUNC_0(VAR_5->net, VAR_5->mii.phy_id, VAR_4);
 FUNC_2(VAR_5,"MII_MARVELL_STATUS = 0x%04x", VAR_7);

 FUNC_1(VAR_5->net, VAR_5->mii.phy_id, VAR_2,
   VAR_0 | VAR_1);

 if (VAR_6->ledmode) {
  VAR_7 = FUNC_0(VAR_5->net, VAR_5->mii.phy_id,
   VAR_3);
  FUNC_2(VAR_5,"MII_MARVELL_LED_CTRL (1) = 0x%04x", VAR_7);

  VAR_7 &= 0xf8ff;
  VAR_7 |= (1 + 0x0100);
  FUNC_1(VAR_5->net, VAR_5->mii.phy_id,
   VAR_3, VAR_7);

  VAR_7 = FUNC_0(VAR_5->net, VAR_5->mii.phy_id,
   VAR_3);
  FUNC_2(VAR_5,"MII_MARVELL_LED_CTRL (2) = 0x%04x", VAR_7);
  VAR_7 &= 0xfc0f;
 }

 return 0;
}
