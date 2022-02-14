
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmac_channel {scalar_t__ completed; } ;
struct dma_chan {scalar_t__ cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct idmac_channel* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_1(struct dma_chan *VAR_2,
  dma_cookie_t VAR_3, dma_cookie_t *VAR_4, dma_cookie_t *VAR_5)
{
 struct idmac_channel *VAR_6 = FUNC_0(VAR_2);

 if (VAR_4)
  *VAR_4 = VAR_6->completed;
 if (VAR_5)
  *VAR_5 = VAR_2->cookie;
 if (VAR_3 != VAR_2->cookie)
  return VAR_0;
 return VAR_1;
}
