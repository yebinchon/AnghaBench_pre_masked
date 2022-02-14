
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ioat2_dma_chan {int alloc_order; } ;



__attribute__((used)) static inline u16 FUNC_0(struct ioat2_dma_chan *VAR_0)
{
 return (1 << VAR_0->alloc_order) - 1;
}
