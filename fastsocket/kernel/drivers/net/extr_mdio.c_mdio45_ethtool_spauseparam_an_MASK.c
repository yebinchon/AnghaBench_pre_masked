
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_if_info {int mmds; int (* mdio_read ) (int ,int ,int ,int ) ;int prtad; int dev; int (* mdio_write ) (int ,int ,int ,int ,int) ;} ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mdio_if_info const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int) ;

void FUNC_5(const struct mdio_if_info *VAR_7,
       const struct ethtool_pauseparam *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_0(!(VAR_7->mmds & VAR_5));

 VAR_10 = VAR_7->mdio_read(VAR_7->dev, VAR_7->prtad, VAR_6,
      VAR_4);
 VAR_9 = VAR_10 & ~(VAR_1 | VAR_0);
 if (VAR_8->autoneg)
  VAR_9 |= FUNC_2(
   (VAR_8->rx_pause ? VAR_2 : 0) |
   (VAR_8->tx_pause ? VAR_3 : 0));
 if (VAR_9 != VAR_10) {
  VAR_7->mdio_write(VAR_7->dev, VAR_7->prtad, VAR_6,
     VAR_4, VAR_9);
  FUNC_1(VAR_7);
 }
}
