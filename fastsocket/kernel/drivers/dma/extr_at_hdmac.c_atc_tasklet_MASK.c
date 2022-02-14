
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_dma_chan {int lock; int error_status; int chan_common; } ;


 int FUNC_0 (struct at_dma_chan*) ;
 scalar_t__ FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct at_dma_chan*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_0)
{
 struct at_dma_chan *VAR_1 = (struct at_dma_chan *)VAR_0;


 if (FUNC_1(VAR_1)) {
  FUNC_4(FUNC_3(&VAR_1->chan_common),
   "BUG: channel enabled in tasklet\n");
  return;
 }

 FUNC_5(&VAR_1->lock);
 if (FUNC_7(0, &VAR_1->error_status))
  FUNC_2(VAR_1);
 else
  FUNC_0(VAR_1);

 FUNC_6(&VAR_1->lock);
}
