
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmac_channel {int chan_mutex; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct idmac_channel* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct idmac_channel *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->chan_mutex);

 FUNC_0(VAR_0);

 FUNC_2(&VAR_1->chan_mutex);
}
