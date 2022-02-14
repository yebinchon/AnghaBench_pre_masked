
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stmmac_priv {void* tx_coe; TYPE_3__* dev; TYPE_2__* mac_type; int is_gmac; } ;
struct TYPE_6__ {scalar_t__ mtu; int base_addr; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* dma_mode ) (int ,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_6)
{
 if (!VAR_6->is_gmac) {

  VAR_6->mac_type->ops->dma_mode(VAR_6->dev->base_addr, VAR_4, 0);
  VAR_6->tx_coe = VAR_2;
 } else {
  if ((VAR_6->dev->mtu <= VAR_0) && (VAR_5)) {
   VAR_6->mac_type->ops->dma_mode(VAR_6->dev->base_addr,
            VAR_3, VAR_3);
   VAR_4 = VAR_3;
   VAR_6->tx_coe = VAR_1;
  } else {

   VAR_6->mac_type->ops->dma_mode(VAR_6->dev->base_addr, VAR_4,
            VAR_3);
   VAR_6->tx_coe = VAR_2;
  }
 }
 VAR_5 = VAR_6->tx_coe;

 return;
}
