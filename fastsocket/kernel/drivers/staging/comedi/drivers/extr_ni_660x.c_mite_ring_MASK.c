
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {size_t chip_index; size_t counter_index; } ;
struct ni_660x_private {struct mite_dma_descriptor_ring*** mite_rings; } ;
struct mite_dma_descriptor_ring {int dummy; } ;



__attribute__((used)) static inline struct mite_dma_descriptor_ring *FUNC_0(struct ni_660x_private
        *VAR_0,
        struct ni_gpct
        *VAR_1)
{
 return VAR_0->mite_rings[VAR_1->chip_index][VAR_1->counter_index];
}
