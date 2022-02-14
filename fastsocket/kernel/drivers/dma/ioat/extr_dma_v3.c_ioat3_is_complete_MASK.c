
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat2_dma_chan {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ioat2_dma_chan*) ;
 int FUNC_1 (struct dma_chan*,int ,int *,int *) ;
 struct ioat2_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status
FUNC_3(struct dma_chan *VAR_1, dma_cookie_t VAR_2,
    dma_cookie_t *VAR_3, dma_cookie_t *VAR_4)
{
 struct ioat2_dma_chan *VAR_5 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4) == VAR_0)
  return VAR_0;

 FUNC_0(VAR_5);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
