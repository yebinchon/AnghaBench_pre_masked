
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;
typedef int dma_addr_t ;


 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int*,int ,int *,unsigned int,size_t,unsigned long) ;

struct dma_async_tx_descriptor *
FUNC_1(struct dma_chan *VAR_0, dma_addr_t *VAR_1,
      unsigned int VAR_2, size_t VAR_3,
      enum sum_check_flags *VAR_4, unsigned long VAR_5)
{



 *VAR_4 = 0;

 return FUNC_0(VAR_0, VAR_4, VAR_1[0], &VAR_1[1],
         VAR_2 - 1, VAR_3, VAR_5);
}
