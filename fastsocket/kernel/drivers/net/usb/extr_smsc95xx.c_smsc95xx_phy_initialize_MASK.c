
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (int ,int ,int ,int) ;int (* mdio_read ) (int ,int ,int ) ;int dev; } ;
struct usbnet {TYPE_1__ mii; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct usbnet*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct usbnet*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_11)
{

 VAR_11->mii.dev = VAR_11->net;
 VAR_11->mii.mdio_read = FUNC_3;
 VAR_11->mii.mdio_write = FUNC_4;
 VAR_11->mii.phy_id_mask = 0x1f;
 VAR_11->mii.reg_num_mask = 0x1f;
 VAR_11->mii.phy_id = VAR_10;

 FUNC_4(VAR_11->net, VAR_11->mii.phy_id, VAR_6, VAR_4);
 FUNC_4(VAR_11->net, VAR_11->mii.phy_id, VAR_5,
  VAR_0 | VAR_1 | VAR_3 |
  VAR_2);


 FUNC_3(VAR_11->net, VAR_11->mii.phy_id, VAR_9);

 FUNC_4(VAR_11->net, VAR_11->mii.phy_id, VAR_7,
  VAR_8);
 FUNC_1(&VAR_11->mii);

 if (FUNC_2(VAR_11))
  FUNC_0(VAR_11, "phy initialised succesfully");
 return 0;
}
