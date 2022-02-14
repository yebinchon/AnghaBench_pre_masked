
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat2_dma_chan {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ioat2_dma_chan*) ;
 int FUNC_1 (char*,char*,int) ;
 struct ioat2_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static ssize_t FUNC_3(struct dma_chan *VAR_0, char *VAR_1)
{
 struct ioat2_dma_chan *VAR_2 = FUNC_2(VAR_0);


 return FUNC_1(VAR_1, "%d\n", FUNC_0(VAR_2));
}
