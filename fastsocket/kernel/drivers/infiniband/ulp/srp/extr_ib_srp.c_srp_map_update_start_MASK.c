
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_map_state {int unmapped_index; int unmapped_addr; struct scatterlist* unmapped_sg; } ;
struct scatterlist {int dummy; } ;
typedef int dma_addr_t ;



__attribute__((used)) static void FUNC_0(struct srp_map_state *VAR_0,
     struct scatterlist *VAR_1, int VAR_2,
     dma_addr_t VAR_3)
{
 VAR_0->unmapped_sg = VAR_1;
 VAR_0->unmapped_index = VAR_2;
 VAR_0->unmapped_addr = VAR_3;
}
