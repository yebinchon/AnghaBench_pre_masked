
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int cur_rx; int dma_rx_size; scalar_t__ dirty_tx; scalar_t__ cur_tx; scalar_t__ dma_rx; TYPE_2__* mac_type; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_rx_owner ) (scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct stmmac_priv *VAR_0)
{
 unsigned int VAR_1 = 0;
 int VAR_2, VAR_3 = 0;

 VAR_2 = VAR_0->mac_type->ops->get_rx_owner(VAR_0->dma_rx +
  (VAR_0->cur_rx % VAR_0->dma_rx_size));

 if (VAR_0->dirty_tx != VAR_0->cur_tx)
  VAR_3 = 1;

 if (FUNC_0(!VAR_2 || VAR_3))
  VAR_1 = 1;

 return VAR_1;
}
