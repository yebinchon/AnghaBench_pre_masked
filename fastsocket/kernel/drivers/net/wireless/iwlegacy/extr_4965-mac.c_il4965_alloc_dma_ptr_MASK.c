
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {TYPE_1__* pci_dev; } ;
struct il_dma_ptr {size_t size; int addr; int dma; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int *,int ) ;

__attribute__((used)) static inline int
FUNC_1(struct il_priv *VAR_2, struct il_dma_ptr *VAR_3, size_t VAR_4)
{
 VAR_3->addr = FUNC_0(&VAR_2->pci_dev->dev, VAR_4, &VAR_3->dma,
           VAR_1);
 if (!VAR_3->addr)
  return -VAR_0;
 VAR_3->size = VAR_4;
 return 0;
}
