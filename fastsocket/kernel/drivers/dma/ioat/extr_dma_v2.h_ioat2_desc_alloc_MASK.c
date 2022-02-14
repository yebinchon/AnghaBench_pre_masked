
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ioat2_dma_chan {scalar_t__ head; } ;



__attribute__((used)) static inline u16 FUNC_0(struct ioat2_dma_chan *VAR_0, u16 VAR_1)
{
 VAR_0->head += VAR_1;
 return VAR_0->head - VAR_1;
}
