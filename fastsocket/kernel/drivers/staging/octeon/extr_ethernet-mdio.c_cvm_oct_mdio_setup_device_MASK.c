
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; int phy_id_mask; int supports_gmii; int reg_num_mask; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct octeon_ethernet {TYPE_1__ mii_info; int port; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct octeon_ethernet* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_4)
{
 struct octeon_ethernet *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = FUNC_0(VAR_5->port);
 if (VAR_6 != -1) {
  VAR_5->mii_info.dev = VAR_4;
  VAR_5->mii_info.phy_id = VAR_6;
  VAR_5->mii_info.phy_id_mask = 0xff;
  VAR_5->mii_info.supports_gmii = 1;
  VAR_5->mii_info.reg_num_mask = 0x1f;
  VAR_5->mii_info.mdio_read = VAR_2;
  VAR_5->mii_info.mdio_write = VAR_3;
 } else {


  VAR_5->mii_info.mdio_read = VAR_0;
  VAR_5->mii_info.mdio_write = VAR_1;
 }
 return 0;
}
