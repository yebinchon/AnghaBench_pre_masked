
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short csr; int fifo_count; int dma_count_hi; int dma_count_lo; int fifo_count_hi; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long,unsigned short,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2, char *VAR_3)
{

 unsigned short VAR_4;

 VAR_4 = VAR_0->csr;




 VAR_0->dma_count_hi = (VAR_1 >> 16);
 VAR_0->dma_count_lo = (VAR_1 & 0xffff);

 VAR_0->fifo_count_hi = (VAR_1 >> 16);
 VAR_0->fifo_count = (VAR_1 & 0xffff);




 return 0;
}
