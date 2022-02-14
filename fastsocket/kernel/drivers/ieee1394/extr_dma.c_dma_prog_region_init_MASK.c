
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_prog_region {scalar_t__ bus_addr; scalar_t__ n_pages; int * dev; int * kvirt; } ;



void FUNC_0(struct dma_prog_region *VAR_0)
{
 VAR_0->kvirt = ((void*)0);
 VAR_0->dev = ((void*)0);
 VAR_0->n_pages = 0;
 VAR_0->bus_addr = 0;
}
