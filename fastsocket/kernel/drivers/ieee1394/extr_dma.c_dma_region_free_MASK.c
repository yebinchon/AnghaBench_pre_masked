
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_region {scalar_t__ n_pages; int * kvirt; int * sglist; int * dev; scalar_t__ n_dma_pages; int direction; } ;


 int FUNC_0 (int *,int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dma_region *VAR_0)
{
 if (VAR_0->n_dma_pages) {
  FUNC_0(VAR_0->dev, VAR_0->sglist, VAR_0->n_pages,
        VAR_0->direction);
  VAR_0->n_dma_pages = 0;
  VAR_0->dev = ((void*)0);
 }

 FUNC_1(VAR_0->sglist);
 VAR_0->sglist = ((void*)0);

 FUNC_1(VAR_0->kvirt);
 VAR_0->kvirt = ((void*)0);
 VAR_0->n_pages = 0;
}
