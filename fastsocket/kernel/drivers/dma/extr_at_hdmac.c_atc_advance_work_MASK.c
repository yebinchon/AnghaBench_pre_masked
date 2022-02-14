
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_dma_chan {int active_list; int chan_common; } ;


 int FUNC_0 (struct at_dma_chan*,int ) ;
 int FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct at_dma_chan*,int ) ;
 int FUNC_3 (struct at_dma_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct at_dma_chan *VAR_0)
{
 FUNC_5(FUNC_4(&VAR_0->chan_common), "advance_work\n");

 if (FUNC_6(&VAR_0->active_list) ||
     FUNC_7(&VAR_0->active_list)) {
  FUNC_1(VAR_0);
 } else {
  FUNC_0(VAR_0, FUNC_3(VAR_0));

  FUNC_2(VAR_0, FUNC_3(VAR_0));
 }
}
