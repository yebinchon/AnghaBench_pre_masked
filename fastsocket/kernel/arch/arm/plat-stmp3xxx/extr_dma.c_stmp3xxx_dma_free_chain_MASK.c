
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp37xx_circ_dma_chain {int total_count; int * chain; int bus; int channel; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct stmp37xx_circ_dma_chain *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->total_count; VAR_1++)
  FUNC_1(
   FUNC_0(VAR_0->channel, VAR_0->bus),
   &VAR_0->chain[VAR_1]);
}
