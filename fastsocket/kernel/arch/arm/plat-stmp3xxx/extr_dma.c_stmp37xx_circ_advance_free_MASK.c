
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp37xx_circ_dma_chain {unsigned int cooked_count; int free_count; int total_count; int cooked_index; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct stmp37xx_circ_dma_chain *VAR_0,
  unsigned VAR_1)
{
 FUNC_0(VAR_0->cooked_count < VAR_1);

 VAR_0->cooked_count -= VAR_1;
 VAR_0->cooked_index += VAR_1;
 VAR_0->cooked_index %= VAR_0->total_count;
 VAR_0->free_count += VAR_1;
}
