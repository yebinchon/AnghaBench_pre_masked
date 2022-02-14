
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tx_queue {int index; int tx_curr_desc; scalar_t__ tx_desc_dma; } ;
struct tx_desc {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct mv643xx_eth_private {int work_tx_end; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct netdev_queue*,int ) ;
 int FUNC_2 (struct netdev_queue*) ;
 struct netdev_queue* FUNC_3 (int ,int) ;
 int FUNC_4 (struct mv643xx_eth_private*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct tx_queue*) ;
 struct mv643xx_eth_private* FUNC_7 (struct tx_queue*) ;

__attribute__((used)) static void FUNC_8(struct tx_queue *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_7(VAR_1);
 struct netdev_queue *VAR_3 = FUNC_3(VAR_2->dev, VAR_1->index);
 u32 VAR_4;
 u32 VAR_5;

 FUNC_1(VAR_3, FUNC_5());

 if (FUNC_4(VAR_2, VAR_0) & (1 << VAR_1->index))
  goto out;

 VAR_4 = FUNC_4(VAR_2, FUNC_0(VAR_1->index));
 VAR_5 = (u32)VAR_1->tx_desc_dma +
    VAR_1->tx_curr_desc * sizeof(struct tx_desc);

 if (VAR_4 != VAR_5)
  FUNC_6(VAR_1);

out:
 FUNC_2(VAR_3);

 VAR_2->work_tx_end &= ~(1 << VAR_1->index);
}
