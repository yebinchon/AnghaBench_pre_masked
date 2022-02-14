
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dma_region {struct scatterlist* sglist; } ;
typedef scalar_t__ dma_addr_t ;


 size_t FUNC_0 (struct dma_region*,unsigned long,int ,unsigned long*) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;

dma_addr_t FUNC_2(struct dma_region * VAR_0,
        unsigned long VAR_1)
{
 unsigned long VAR_2 = 0;

 struct scatterlist *VAR_3 =
     &VAR_0->sglist[FUNC_0(VAR_0, VAR_1, 0, &VAR_2)];
 return FUNC_1(VAR_3) + VAR_2;
}
