
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int mbit; scalar_t__ full; int giga; scalar_t__ isup; } ;
struct s6gmac {int tx_chan; int tx_dma; scalar_t__ reg; TYPE_1__ link; struct phy_device* phydev; } ;
struct phy_device {int speed; scalar_t__ duplex; scalar_t__ link; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_8)
{
 struct s6gmac *VAR_9 = FUNC_0(VAR_8);
 struct phy_device *VAR_10 = VAR_9->phydev;
 if (VAR_9->link.isup &&
   (!VAR_10->link ||
   (VAR_9->link.mbit != VAR_10->speed) ||
   (VAR_9->link.full != VAR_10->duplex))) {
  VAR_9->link.isup = 0;
  FUNC_2(VAR_8);
  if (!VAR_10->link) {
   FUNC_1(VAR_8);
   FUNC_4(VAR_10);
  }
 }
 if (!VAR_9->link.isup && VAR_10->link) {
  if (VAR_9->link.full != VAR_10->duplex) {
   u32 VAR_11 = FUNC_5(VAR_9->reg + VAR_2);
   if (VAR_10->duplex)
    VAR_11 |= 1 << VAR_3;
   else
    VAR_11 &= ~(1 << VAR_3);
   FUNC_8(VAR_11, VAR_9->reg + VAR_2);
  }

  if (VAR_9->link.giga != (VAR_10->speed == 1000)) {
   u32 VAR_12 = FUNC_5(VAR_9->reg + VAR_0);
   u32 VAR_13 = FUNC_5(VAR_9->reg + VAR_2);
   VAR_13 &= ~(VAR_6
         << VAR_4);
   if (VAR_10->speed == 1000) {
    VAR_12 |= 1 << VAR_1;
    VAR_13 |= VAR_5
        << VAR_4;
   } else {
    VAR_12 &= ~(1 << VAR_1);
    VAR_13 |= VAR_7
        << VAR_4;
   }
   FUNC_8(VAR_12, VAR_9->reg + VAR_0);
   FUNC_8(VAR_13, VAR_9->reg + VAR_2);
  }

  if (!FUNC_6(VAR_9->tx_dma, VAR_9->tx_chan))
   FUNC_3(VAR_8);
  FUNC_7(VAR_8, 1);
 }
}
