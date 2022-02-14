
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int csr; unsigned short fifo_count; int bpack_lo; int bpack_hi; scalar_t__ fifo_count_hi; scalar_t__ dma_count_lo; scalar_t__ dma_count_hi; scalar_t__ dma_addr_lo; scalar_t__ dma_addr_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned short VAR_5 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 unsigned short VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static int FUNC_3(int VAR_10)
{
 unsigned short VAR_11;
 int VAR_12 = 0;

 VAR_6 = 0;

 VAR_4->csr &= ~VAR_0;

 VAR_11 = VAR_4->fifo_count;
 if(VAR_10) {
  if((VAR_11 > 0) && (VAR_11 < VAR_8))
   VAR_11++;
 }

 VAR_5 = VAR_11;




 if((!VAR_10) && (VAR_4->csr & VAR_2)) {
  unsigned char *VAR_13;





  VAR_13 = (unsigned char *)FUNC_1(VAR_7);

  VAR_13 += (VAR_8 - VAR_11);
  VAR_13--;

  switch(VAR_4->csr & VAR_2) {
  case 128:
   *VAR_13 = (VAR_4->bpack_lo & 0xff00) >> 8;
   VAR_13--;

  case 129:
   *VAR_13 = (VAR_4->bpack_hi & 0x00ff);
   VAR_13--;

  case 130:
   *VAR_13 = (VAR_4->bpack_hi & 0xff00) >> 8;
   break;
  }


 }

 FUNC_0(VAR_7);
 VAR_7 = ((void*)0);

 VAR_4->dma_addr_hi = 0;
 VAR_4->dma_addr_lo = 0;
 VAR_4->dma_count_hi = 0;
 VAR_4->dma_count_lo = 0;

 VAR_4->fifo_count = 0;
 VAR_4->fifo_count_hi = 0;

 VAR_4->csr &= ~VAR_3;
 VAR_9 = ((void*)0);

 return VAR_12;

}
