
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_queue {scalar_t__ tx_used_desc; scalar_t__ tx_curr_desc; scalar_t__ index; scalar_t__ tx_desc_area_size; int tx_desc_dma; int tx_desc_area; int tx_ring_size; } ;
struct mv643xx_eth_private {scalar_t__ tx_desc_sram_size; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tx_queue*) ;
 int FUNC_4 (struct tx_queue*,int ,int) ;
 struct mv643xx_eth_private* FUNC_5 (struct tx_queue*) ;

__attribute__((used)) static void FUNC_6(struct tx_queue *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0, VAR_0->tx_ring_size, 1);

 FUNC_0(VAR_0->tx_used_desc != VAR_0->tx_curr_desc);

 if (VAR_0->index == 0 &&
     VAR_0->tx_desc_area_size <= VAR_1->tx_desc_sram_size)
  FUNC_2(VAR_0->tx_desc_area);
 else
  FUNC_1(VAR_1->dev->dev.parent, VAR_0->tx_desc_area_size,
      VAR_0->tx_desc_area, VAR_0->tx_desc_dma);
}
