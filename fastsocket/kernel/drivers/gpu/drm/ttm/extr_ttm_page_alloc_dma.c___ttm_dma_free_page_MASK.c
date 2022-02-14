
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_pool {int size; int dev; } ;
struct dma_page {int vaddr; int dma; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct dma_page*) ;

__attribute__((used)) static void FUNC_2(struct dma_pool *VAR_0, struct dma_page *VAR_1)
{
 dma_addr_t VAR_2 = VAR_1->dma;
 FUNC_0(VAR_0->dev, VAR_0->size, VAR_1->vaddr, VAR_2);

 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);
}
