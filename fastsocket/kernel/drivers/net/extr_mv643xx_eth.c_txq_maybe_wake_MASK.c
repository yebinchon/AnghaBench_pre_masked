
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_queue {scalar_t__ tx_ring_size; scalar_t__ tx_desc_count; int index; } ;
struct netdev_queue {int dummy; } ;
struct mv643xx_eth_private {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netdev_queue*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 struct netdev_queue* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct netdev_queue*) ;
 int FUNC_5 () ;
 struct mv643xx_eth_private* FUNC_6 (struct tx_queue*) ;

__attribute__((used)) static void FUNC_7(struct tx_queue *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_6(VAR_1);
 struct netdev_queue *VAR_3 = FUNC_2(VAR_2->dev, VAR_1->index);

 if (FUNC_3(VAR_3)) {
  FUNC_0(VAR_3, FUNC_5());
  if (VAR_1->tx_ring_size - VAR_1->tx_desc_count >= VAR_0 + 1)
   FUNC_4(VAR_3);
  FUNC_1(VAR_3);
 }
}
