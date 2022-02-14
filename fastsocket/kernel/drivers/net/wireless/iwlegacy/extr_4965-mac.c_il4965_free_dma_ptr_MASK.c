
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {TYPE_1__* pci_dev; } ;
struct il_dma_ptr {int dma; int addr; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct il_dma_ptr*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void
FUNC_3(struct il_priv *VAR_0, struct il_dma_ptr *VAR_1)
{
 if (FUNC_2(!VAR_1->addr))
  return;

 FUNC_0(&VAR_0->pci_dev->dev, VAR_1->size, VAR_1->addr, VAR_1->dma);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
