
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btcx_riscmem {scalar_t__ dma; scalar_t__ size; } ;



__attribute__((used)) static inline int FUNC_0(struct btcx_riscmem *VAR_0, u32 VAR_1)
{
 if (VAR_1 < VAR_0->dma)
  return 0;
 if (VAR_1 > VAR_0->dma + VAR_0->size)
  return 0;
 return 1;
}
