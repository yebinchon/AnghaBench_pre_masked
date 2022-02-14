
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat2_dma_chan {int alloc_order; } ;
struct dma_chan {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct ioat2_dma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static ssize_t FUNC_2(struct dma_chan *VAR_0, char *VAR_1)
{
 struct ioat2_dma_chan *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1, "%d\n", (1 << VAR_2->alloc_order) & ~1);
}
