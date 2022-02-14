
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int dummy; } ;
typedef enum dma_transaction_type { ____Placeholder_dma_transaction_type } dma_transaction_type ;
struct TYPE_2__ {struct dma_chan* chan; } ;


 int * VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 () ;

struct dma_chan *FUNC_3(enum dma_transaction_type VAR_1)
{
 struct dma_chan *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0();
 VAR_2 = FUNC_1(VAR_0[VAR_1], VAR_3)->chan;
 FUNC_2();

 return VAR_2;
}
