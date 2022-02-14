
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dma_chan {int completed_cookie; } ;
struct dma_chan {int cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct fsl_dma_chan*) ;
 struct fsl_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_3(struct dma_chan *VAR_0,
     dma_cookie_t VAR_1,
     dma_cookie_t *VAR_2,
     dma_cookie_t *VAR_3)
{
 struct fsl_dma_chan *VAR_4 = FUNC_2(VAR_0);
 dma_cookie_t VAR_5;
 dma_cookie_t VAR_6;

 FUNC_1(VAR_4);

 VAR_5 = VAR_0->cookie;
 VAR_6 = VAR_4->completed_cookie;

 if (VAR_2)
  *VAR_2 = VAR_6;

 if (VAR_3)
  *VAR_3 = VAR_5;

 return FUNC_0(VAR_1, VAR_6, VAR_5);
}
