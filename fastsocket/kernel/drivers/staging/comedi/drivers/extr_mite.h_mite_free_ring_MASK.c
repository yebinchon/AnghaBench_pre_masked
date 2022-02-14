
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_dma_descriptor_ring {int n_links; int hw_dev; int descriptors_dma_addr; scalar_t__ descriptors; } ;
struct mite_dma_descriptor {int dummy; } ;


 int FUNC_0 (int ,int,scalar_t__,int ) ;
 int FUNC_1 (struct mite_dma_descriptor_ring*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mite_dma_descriptor_ring *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->descriptors) {
   FUNC_0(VAR_0->hw_dev,
       VAR_0->n_links *
       sizeof(struct mite_dma_descriptor),
       VAR_0->descriptors,
       VAR_0->descriptors_dma_addr);
  }
  FUNC_2(VAR_0->hw_dev);
  FUNC_1(VAR_0);
 }
}
