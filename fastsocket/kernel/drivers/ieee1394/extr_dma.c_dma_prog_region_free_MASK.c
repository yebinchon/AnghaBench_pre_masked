
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_prog_region {int n_pages; scalar_t__ bus_addr; int * dev; int * kvirt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,scalar_t__) ;

void FUNC_1(struct dma_prog_region *VAR_1)
{
 if (VAR_1->kvirt) {
  FUNC_0(VAR_1->dev, VAR_1->n_pages << VAR_0,
        VAR_1->kvirt, VAR_1->bus_addr);
 }

 VAR_1->kvirt = ((void*)0);
 VAR_1->dev = ((void*)0);
 VAR_1->n_pages = 0;
 VAR_1->bus_addr = 0;
}
