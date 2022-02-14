
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {int lock; int tx_chan; int tx_dma; int rx_chan; int rx_dma; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct s6gmac* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct s6gmac*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct s6gmac*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = (struct net_device *)VAR_3;
 struct s6gmac *VAR_5 = FUNC_0(VAR_4);
 if (!VAR_4)
  return VAR_1;
 FUNC_6(&VAR_5->lock);
 if (FUNC_1(VAR_5->rx_dma, VAR_5->rx_chan))
  FUNC_3(VAR_4);
 FUNC_2(VAR_5);
 if (FUNC_1(VAR_5->tx_dma, VAR_5->tx_chan))
  FUNC_5(VAR_4);
 FUNC_4(VAR_5, 0);
 FUNC_4(VAR_5, 1);
 FUNC_7(&VAR_5->lock);
 return VAR_0;
}
