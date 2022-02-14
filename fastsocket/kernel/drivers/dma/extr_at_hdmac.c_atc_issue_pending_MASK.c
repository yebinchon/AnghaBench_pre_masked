
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct at_dma_chan {int lock; } ;


 int FUNC_0 (struct at_dma_chan*) ;
 int FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct at_dma_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_7(struct dma_chan *VAR_0)
{
 struct at_dma_chan *VAR_1 = FUNC_6(VAR_0);

 FUNC_3(FUNC_2(VAR_0), "issue_pending\n");

 if (!FUNC_1(VAR_1)) {
  FUNC_4(&VAR_1->lock);
  FUNC_0(VAR_1);
  FUNC_5(&VAR_1->lock);
 }
}
