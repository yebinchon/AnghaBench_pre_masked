
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int *,int *,int *,unsigned int,unsigned char*,size_t,unsigned long) ;
 int FUNC_1 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_2(struct dma_chan *VAR_1, dma_addr_t VAR_2, dma_addr_t *VAR_3,
   unsigned int VAR_4, size_t VAR_5, unsigned long VAR_6)
{
 unsigned char VAR_7[VAR_4];
 dma_addr_t VAR_8[2];

 FUNC_1(VAR_7, 0, VAR_4);
 VAR_8[0] = VAR_2;
 VAR_6 |= VAR_0;
 VAR_8[1] = VAR_2;

 return FUNC_0(VAR_1, ((void*)0), VAR_8, VAR_3, VAR_4, VAR_7, VAR_5,
        VAR_6);
}
