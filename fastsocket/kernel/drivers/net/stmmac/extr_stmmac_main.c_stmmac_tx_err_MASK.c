
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stmmac_priv {TYPE_4__* dev; scalar_t__ cur_tx; scalar_t__ dirty_tx; int dma_tx_size; int dma_tx; TYPE_2__* mac_type; } ;
struct TYPE_6__ {int tx_errors; } ;
struct TYPE_9__ {TYPE_1__ stats; int base_addr; } ;
struct TYPE_8__ {int (* init_tx_desc ) (int ,int ) ;} ;
struct TYPE_7__ {TYPE_3__* ops; } ;


 int FUNC_0 (struct stmmac_priv*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct stmmac_priv *VAR_0)
{
 FUNC_1(VAR_0->dev);

 FUNC_4(VAR_0->dev->base_addr);
 FUNC_0(VAR_0);
 VAR_0->mac_type->ops->init_tx_desc(VAR_0->dma_tx, VAR_0->dma_tx_size);
 VAR_0->dirty_tx = 0;
 VAR_0->cur_tx = 0;
 FUNC_3(VAR_0->dev->base_addr);

 VAR_0->dev->stats.tx_errors++;
 FUNC_2(VAR_0->dev);

 return;
}
