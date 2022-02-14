
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_pending; int tx_pending; } ;
struct b44 {int rx_pending; int tx_pending; int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*,int ) ;
 int FUNC_3 (struct b44*) ;
 struct b44* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
        struct ethtool_ringparam *VAR_5)
{
 struct b44 *VAR_6 = FUNC_4(VAR_4);

 if ((VAR_5->rx_pending > VAR_1 - 1) ||
     (VAR_5->rx_mini_pending != 0) ||
     (VAR_5->rx_jumbo_pending != 0) ||
     (VAR_5->tx_pending > VAR_2 - 1))
  return -VAR_3;

 FUNC_6(&VAR_6->lock);

 VAR_6->rx_pending = VAR_5->rx_pending;
 VAR_6->tx_pending = VAR_5->tx_pending;

 FUNC_1(VAR_6);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6, VAR_0);
 FUNC_5(VAR_6->dev);
 FUNC_7(&VAR_6->lock);

 FUNC_0(VAR_6);

 return 0;
}
