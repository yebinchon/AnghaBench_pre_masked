
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dma_addr_hi; unsigned long dma_addr_lo; int csr; scalar_t__ fifo_count; scalar_t__ fifo_count_hi; scalar_t__ dma_count_lo; scalar_t__ dma_count_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,void*,...) ;
 int * VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static unsigned long FUNC_3(void *VAR_6, unsigned long VAR_7, int VAR_8)
{
 void *VAR_9;

 if(VAR_4 != ((void*)0))
  FUNC_1(VAR_4);


 VAR_9 = (void *)FUNC_0((unsigned long) VAR_6, VAR_7);

 VAR_4 = VAR_9;
 VAR_5 = VAR_7;
 if(VAR_8)
  VAR_3->csr |= VAR_2;
 else
  VAR_3->csr &= ~VAR_2;





 VAR_3->csr |= VAR_1;

 VAR_3->dma_addr_hi = ((unsigned long)VAR_9 >> 16);
 VAR_3->dma_addr_lo = ((unsigned long)VAR_9 & 0xffff);

 VAR_3->dma_count_hi = 0;
 VAR_3->dma_count_lo = 0;
 VAR_3->fifo_count_hi = 0;
 VAR_3->fifo_count = 0;




        return VAR_7;

}
