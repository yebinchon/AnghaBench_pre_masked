
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; struct net_device* netdev; } ;
struct net_device {int tx_queue_len; } ;
struct TYPE_2__ {int MODE; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;



 int FUNC_0 (unsigned long,int *) ;

__attribute__((used)) static void FUNC_1(struct pch_gbe_adapter *VAR_5, u16 VAR_6,
         u16 VAR_7)
{
 struct net_device *VAR_8 = VAR_5->netdev;
 struct pch_gbe_hw *VAR_9 = &VAR_5->hw;
 unsigned long VAR_10 = 0;


 switch (VAR_6) {
 case 130:
  VAR_10 = VAR_4;
  VAR_8->tx_queue_len = 10;
  break;
 case 129:
  VAR_10 = VAR_4;
  VAR_8->tx_queue_len = 100;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 }
 if (VAR_7 == VAR_0)
  VAR_10 |= VAR_1;
 else
  VAR_10 |= VAR_3;
 FUNC_0(VAR_10, &VAR_9->reg->MODE);
}
