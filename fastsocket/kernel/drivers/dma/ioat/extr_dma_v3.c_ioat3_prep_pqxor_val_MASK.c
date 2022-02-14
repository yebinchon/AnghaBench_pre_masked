
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum sum_check_flags { ____Placeholder_sum_check_flags } sum_check_flags ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 struct dma_async_tx_descriptor* FUNC_0 (struct dma_chan*,int*,int *,int *,unsigned int,unsigned char*,size_t,unsigned long) ;
 int FUNC_1 (unsigned char*,int ,unsigned int) ;

struct dma_async_tx_descriptor *
FUNC_2(struct dma_chan *VAR_1, dma_addr_t *VAR_2,
       unsigned int VAR_3, size_t VAR_4,
       enum sum_check_flags *VAR_5, unsigned long VAR_6)
{
 unsigned char VAR_7[VAR_3];
 dma_addr_t VAR_8[2];




 *VAR_5 = 0;

 FUNC_1(VAR_7, 0, VAR_3);
 VAR_8[0] = VAR_2[0];
 VAR_6 |= VAR_0;
 VAR_8[1] = VAR_8[0];

 return FUNC_0(VAR_1, VAR_5, VAR_8, &VAR_2[1], VAR_3 - 1, VAR_7,
        VAR_4, VAR_6);
}
