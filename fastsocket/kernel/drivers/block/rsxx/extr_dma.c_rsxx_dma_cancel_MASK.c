
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_q_depth; } ;
struct rsxx_dma_ctrl {int trackers; TYPE_1__ stats; } ;
struct rsxx_dma {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct rsxx_dma* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct rsxx_dma_ctrl*,struct rsxx_dma*,int ) ;

int FUNC_4(struct rsxx_dma_ctrl *VAR_2)
{
 struct rsxx_dma *VAR_3;
 int VAR_4;
 int VAR_5 = 0;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->trackers, VAR_4);
  if (VAR_3) {
   FUNC_0(&VAR_2->stats.hw_q_depth);
   FUNC_3(VAR_2, VAR_3, VAR_0);
   FUNC_2(VAR_2->trackers, VAR_4);
   VAR_5++;
  }
 }

 return VAR_5;
}
