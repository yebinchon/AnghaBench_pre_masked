
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_napi {int * tx_buffers; int * tx_ring; int tx_desc_mapping; } ;
struct tg3 {int irq_max; TYPE_1__* pdev; struct tg3_napi* napi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->irq_max; VAR_2++) {
  struct tg3_napi *VAR_3 = &VAR_1->napi[VAR_2];

  if (VAR_3->tx_ring) {
   FUNC_0(&VAR_1->pdev->dev, VAR_0,
    VAR_3->tx_ring, VAR_3->tx_desc_mapping);
   VAR_3->tx_ring = ((void*)0);
  }

  FUNC_1(VAR_3->tx_buffers);
  VAR_3->tx_buffers = ((void*)0);
 }
}
