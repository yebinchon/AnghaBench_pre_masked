
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct dma_async_tx_descriptor* FUNC_1 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_2(struct dma_chan *VAR_2, dma_addr_t *VAR_3, dma_addr_t *VAR_4,
       unsigned int VAR_5, const unsigned char *VAR_6, size_t VAR_7,
       unsigned long VAR_8)
{

 if (VAR_8 & VAR_0)
  VAR_3[0] = VAR_3[1];
 if (VAR_8 & VAR_1)
  VAR_3[1] = VAR_3[0];




 if ((VAR_8 & VAR_0) && VAR_5 == 1) {
  dma_addr_t VAR_9[2];
  unsigned char VAR_10[2];

  FUNC_0(VAR_8 & VAR_1);
  VAR_9[0] = VAR_4[0];
  VAR_9[1] = VAR_4[0];
  VAR_10[0] = VAR_6[0];
  VAR_10[1] = 0;

  return FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_9, 2,
         VAR_10, VAR_7, VAR_8);
 } else
  return FUNC_1(VAR_2, ((void*)0), VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8);
}
