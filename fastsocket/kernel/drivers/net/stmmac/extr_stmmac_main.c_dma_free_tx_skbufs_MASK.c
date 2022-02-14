
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int dma_tx_size; int ** tx_skbuff; TYPE_2__* mac_type; int device; struct dma_desc* dma_tx; } ;
struct dma_desc {scalar_t__ des2; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_tx_len ) (struct dma_desc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct dma_desc*) ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dma_tx_size; VAR_2++) {
  if (VAR_1->tx_skbuff[VAR_2] != ((void*)0)) {
   struct dma_desc *VAR_3 = VAR_1->dma_tx + VAR_2;
   if (VAR_3->des2)
    FUNC_1(VAR_1->device, VAR_3->des2,
     VAR_1->mac_type->ops->get_tx_len(VAR_3),
     VAR_0);
   FUNC_0(VAR_1->tx_skbuff[VAR_2]);
   VAR_1->tx_skbuff[VAR_2] = ((void*)0);
  }
 }
 return;
}
