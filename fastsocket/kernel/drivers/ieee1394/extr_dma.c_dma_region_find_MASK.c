
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_region {int n_dma_pages; int * sglist; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct dma_region *VAR_0, unsigned long VAR_1,
      unsigned int VAR_2, unsigned long *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_1;

 for (VAR_4 = VAR_2; VAR_4 < VAR_0->n_dma_pages; VAR_4++) {
  if (VAR_5 < FUNC_1(&VAR_0->sglist[VAR_4])) {
   *VAR_3 = VAR_5;
   break;
  }

  VAR_5 -= FUNC_1(&VAR_0->sglist[VAR_4]);
 }

 FUNC_0(VAR_4 >= VAR_0->n_dma_pages);

 return VAR_4;
}
