
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int device; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_0, void *VAR_1)
{
 if (!FUNC_0(VAR_0) || !FUNC_1(VAR_0->device))
  return 0;
 else
  return 1;
}
