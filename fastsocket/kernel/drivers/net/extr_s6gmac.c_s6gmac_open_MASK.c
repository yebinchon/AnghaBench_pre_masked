
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mbit; } ;
struct s6gmac {TYPE_2__* phydev; int lock; scalar_t__ reg; int tx_chan; int tx_dma; int rx_chan; int rx_dma; TYPE_1__ link; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int,int,int,int,int ,int ,int ,int,int,int,int ,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (struct s6gmac*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_6)
{
 struct s6gmac *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8;
 FUNC_2(VAR_7->phydev);
 FUNC_10(&VAR_7->lock, VAR_8);
 VAR_7->link.mbit = 0;
 FUNC_8(VAR_6, VAR_7->phydev->link);
 FUNC_5(VAR_6);
 FUNC_7(VAR_6);
 FUNC_6(VAR_6);
 FUNC_9(VAR_7);
 FUNC_4(VAR_7->rx_dma, VAR_7->rx_chan,
  2, 1, 0, 1, 0, 0, 0, 7, -1, 2, 0, 1);
 FUNC_4(VAR_7->tx_dma, VAR_7->tx_chan,
  2, 0, 1, 0, 0, 0, 0, 7, -1, 2, 0, 1);
 FUNC_12(0 << VAR_4 |
  0 << VAR_5 |
  0 << VAR_1 |
  0 << VAR_2 |
  0 << VAR_3,
  VAR_7->reg + VAR_0);
 FUNC_11(&VAR_7->lock, VAR_8);
 FUNC_3(VAR_7->phydev);
 FUNC_1(VAR_6);
 return 0;
}
