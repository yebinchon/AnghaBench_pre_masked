
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {unsigned long dma_address; unsigned long length; } ;
struct TYPE_4__ {int sgcount; TYPE_2__* sg; } ;
struct iomd_dma {unsigned long dma_addr; unsigned long dma_len; TYPE_1__ dma; } ;
struct TYPE_5__ {unsigned long dma_address; unsigned long length; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct scatterlist *VAR_5, struct iomd_dma *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9 = 0;

 if (VAR_6->dma.sg) {
  VAR_5->dma_address = VAR_6->dma_addr;
  VAR_8 = VAR_5->dma_address & ~VAR_2;

  VAR_7 = VAR_8 + VAR_6->dma_len;

  if (VAR_7 > VAR_3)
   VAR_7 = VAR_3;

  if (VAR_8 + VAR_4 >= VAR_7)
   VAR_9 |= VAR_0;

  VAR_5->length = VAR_7 - VAR_4;

  VAR_6->dma_len -= VAR_7 - VAR_8;
  VAR_6->dma_addr += VAR_7 - VAR_8;

  if (VAR_6->dma_len == 0) {
   if (VAR_6->dma.sgcount > 1) {
    VAR_6->dma.sg = FUNC_0(VAR_6->dma.sg);
    VAR_6->dma_addr = VAR_6->dma.sg->dma_address;
    VAR_6->dma_len = VAR_6->dma.sg->length;
    VAR_6->dma.sgcount--;
   } else {
    VAR_6->dma.sg = ((void*)0);
    VAR_9 |= VAR_1;
   }
  }
 } else {
  VAR_9 = VAR_1 | VAR_0;
  VAR_5->dma_address = 0;
  VAR_5->length = 0;
 }

 VAR_5->length |= VAR_9;
}
