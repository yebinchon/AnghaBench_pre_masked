
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ num_channels; } ;
struct mite_dma_descriptor_ring {int dummy; } ;
struct mite_channel {int dummy; } ;


 struct mite_channel* FUNC_0 (struct mite_struct*,struct mite_dma_descriptor_ring*,int ,scalar_t__) ;

__attribute__((used)) static inline struct mite_channel *FUNC_1(struct mite_struct
       *VAR_0,
       struct
       mite_dma_descriptor_ring
       *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, 0,
          VAR_0->num_channels - 1);
}
