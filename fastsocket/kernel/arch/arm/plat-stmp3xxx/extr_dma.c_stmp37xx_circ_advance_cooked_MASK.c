
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp37xx_circ_dma_chain {unsigned int active_count; unsigned int active_index; unsigned int total_count; unsigned int cooked_count; int bus; int channel; } ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int ) ;

unsigned FUNC_2(struct stmp37xx_circ_dma_chain *VAR_0)
{
 unsigned VAR_1;

 VAR_1 = VAR_0->active_count -
   FUNC_1(FUNC_0(VAR_0->channel, VAR_0->bus));

 VAR_0->active_count -= VAR_1;
 VAR_0->active_index += VAR_1;
 VAR_0->active_index %= VAR_0->total_count;

 VAR_0->cooked_count += VAR_1;

 return VAR_1;
}
