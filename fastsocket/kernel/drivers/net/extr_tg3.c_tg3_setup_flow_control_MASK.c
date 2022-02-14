
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ autoneg; scalar_t__ flowctrl; scalar_t__ active_flowctrl; } ;
struct tg3 {int phy_flags; int tx_mode; int rx_mode; TYPE_3__ link_config; TYPE_2__* mdio_bus; } ;
struct TYPE_5__ {TYPE_1__** phy_map; } ;
struct TYPE_4__ {scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_11, u32 VAR_12, u32 VAR_13)
{
 u8 VAR_14;
 u8 VAR_15 = 0;
 u32 VAR_16 = VAR_11->rx_mode;
 u32 VAR_17 = VAR_11->tx_mode;

 if (FUNC_1(VAR_11, VAR_10))
  VAR_14 = VAR_11->mdio_bus->phy_map[VAR_8]->autoneg;
 else
  VAR_14 = VAR_11->link_config.autoneg;

 if (VAR_14 == VAR_0 && FUNC_1(VAR_11, VAR_5)) {
  if (VAR_11->phy_flags & VAR_7)
   VAR_15 = FUNC_2(VAR_12, VAR_13);
  else
   VAR_15 = FUNC_0(VAR_12, VAR_13);
 } else
  VAR_15 = VAR_11->link_config.flowctrl;

 VAR_11->link_config.active_flowctrl = VAR_15;

 if (VAR_15 & VAR_1)
  VAR_11->rx_mode |= VAR_6;
 else
  VAR_11->rx_mode &= ~VAR_6;

 if (VAR_16 != VAR_11->rx_mode)
  FUNC_3(VAR_3, VAR_11->rx_mode);

 if (VAR_15 & VAR_2)
  VAR_11->tx_mode |= VAR_9;
 else
  VAR_11->tx_mode &= ~VAR_9;

 if (VAR_17 != VAR_11->tx_mode)
  FUNC_3(VAR_4, VAR_11->tx_mode);
}
