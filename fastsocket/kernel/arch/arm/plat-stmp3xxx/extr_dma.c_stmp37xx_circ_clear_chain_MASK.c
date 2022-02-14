
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp37xx_circ_dma_chain {scalar_t__ cooked_count; scalar_t__ active_count; int total_count; int free_count; scalar_t__ cooked_index; scalar_t__ active_index; scalar_t__ free_index; int bus; int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct stmp37xx_circ_dma_chain *VAR_0)
{
 FUNC_0(FUNC_2(FUNC_1(VAR_0->channel, VAR_0->bus)));
 VAR_0->free_index = 0;
 VAR_0->active_index = 0;
 VAR_0->cooked_index = 0;
 VAR_0->free_count = VAR_0->total_count;
 VAR_0->active_count = 0;
 VAR_0->cooked_count = 0;
}
