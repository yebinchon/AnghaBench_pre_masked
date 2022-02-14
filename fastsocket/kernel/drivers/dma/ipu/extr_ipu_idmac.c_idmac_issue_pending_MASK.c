
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu {int lock; } ;
struct idmac_channel {int active_buffer; } ;
struct idmac {int dummy; } ;
struct dma_chan {int chan_id; int device; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct idmac* FUNC_3 (int ) ;
 struct idmac_channel* FUNC_4 (struct dma_chan*) ;
 struct ipu* FUNC_5 (struct idmac*) ;

__attribute__((used)) static void FUNC_6(struct dma_chan *VAR_0)
{
 struct idmac_channel *VAR_1 = FUNC_4(VAR_0);
 struct idmac *VAR_2 = FUNC_3(VAR_0->device);
 struct ipu *VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4;


 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_0->chan_id, VAR_1->active_buffer);
 FUNC_2(&VAR_3->lock, VAR_4);







}
