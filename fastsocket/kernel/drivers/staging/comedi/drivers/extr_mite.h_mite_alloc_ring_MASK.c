
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_struct {TYPE_1__* pcidev; } ;
struct mite_dma_descriptor_ring {scalar_t__ descriptors_dma_addr; int * descriptors; scalar_t__ n_links; int * hw_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (struct mite_dma_descriptor_ring*) ;
 struct mite_dma_descriptor_ring* FUNC_2 (int,int ) ;

__attribute__((used)) static inline struct mite_dma_descriptor_ring *FUNC_3(struct
              mite_struct
              *VAR_1)
{
 struct mite_dma_descriptor_ring *VAR_2 =
     FUNC_2(sizeof(struct mite_dma_descriptor_ring), VAR_0);
 if (VAR_2 == ((void*)0))
  return VAR_2;
 VAR_2->hw_dev = FUNC_0(&VAR_1->pcidev->dev);
 if (VAR_2->hw_dev == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->n_links = 0;
 VAR_2->descriptors = ((void*)0);
 VAR_2->descriptors_dma_addr = 0;
 return VAR_2;
}
