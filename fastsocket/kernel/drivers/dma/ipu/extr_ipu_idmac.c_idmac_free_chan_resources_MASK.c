
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmac_channel {scalar_t__ status; int chan_mutex; int eof_irq; } ;
struct idmac {int dummy; } ;
struct dma_chan {int chan_id; int device; } ;
struct TYPE_2__ {int tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,struct idmac_channel*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct idmac*,struct idmac_channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct idmac* FUNC_7 (int ) ;
 struct idmac_channel* FUNC_8 (struct dma_chan*) ;
 TYPE_1__* FUNC_9 (struct idmac*) ;

__attribute__((used)) static void FUNC_10(struct dma_chan *VAR_5)
{
 struct idmac_channel *VAR_6 = FUNC_8(VAR_5);
 struct idmac *VAR_7 = FUNC_7(VAR_5->device);

 FUNC_4(&VAR_6->chan_mutex);

 FUNC_0(VAR_5);

 if (VAR_6->status > VAR_2) {
  FUNC_1(VAR_6->eof_irq, VAR_6);
  FUNC_2(VAR_5->chan_id);
 }

 VAR_6->status = VAR_2;

 FUNC_3(VAR_7, VAR_6);

 FUNC_5(&VAR_6->chan_mutex);

 FUNC_6(&FUNC_9(VAR_7)->tasklet);
}
