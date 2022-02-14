
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int*,int *,int *,unsigned int,unsigned char const*,size_t,unsigned long) ;

struct dma_async_tx_descriptor *
FUNC_1(struct dma_chan *VAR_2, dma_addr_t *VAR_3, dma_addr_t *VAR_4,
    unsigned int VAR_5, const unsigned char *VAR_6, size_t VAR_7,
    enum sum_check_flags *VAR_8, unsigned long VAR_9)
{

 if (VAR_9 & VAR_0)
  VAR_3[0] = VAR_3[1];
 if (VAR_9 & VAR_1)
  VAR_3[1] = VAR_3[0];




 *VAR_8 = 0;

 return FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_9);
}
