
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ioat_ring_ent {int dummy; } ;
struct ioat2_dma_chan {struct ioat_ring_ent** ring; } ;


 size_t FUNC_0 (struct ioat2_dma_chan*) ;

__attribute__((used)) static inline struct ioat_ring_ent *
FUNC_1(struct ioat2_dma_chan *VAR_0, u16 VAR_1)
{
 return VAR_0->ring[VAR_1 & FUNC_0(VAR_0)];
}
