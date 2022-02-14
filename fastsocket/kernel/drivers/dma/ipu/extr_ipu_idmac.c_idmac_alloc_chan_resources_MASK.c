
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmac_channel {scalar_t__ status; int eof_irq; char* eof_name; int completed; } ;
struct idmac {int dummy; } ;
struct dma_chan {int client_count; int cookie; int chan_id; TYPE_1__* dev; int device; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct idmac*,struct idmac_channel*,int) ;
 int FUNC_4 (struct idmac*,struct idmac_channel*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct idmac*,struct idmac_channel*) ;
 int FUNC_8 (int,int ,int ,char*,struct idmac_channel*) ;
 struct idmac* FUNC_9 (int ) ;
 struct idmac_channel* FUNC_10 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_11(struct dma_chan *VAR_9)
{
 struct idmac_channel *VAR_10 = FUNC_10(VAR_9);
 struct idmac *VAR_11 = FUNC_9(VAR_9->device);
 int VAR_12;


 FUNC_0(VAR_9->client_count > 1);
 FUNC_1(VAR_10->status != VAR_2);

 VAR_9->cookie = 1;
 VAR_10->completed = -VAR_0;

 VAR_12 = FUNC_5(VAR_9->chan_id);
 if (VAR_12 < 0)
  goto eimap;

 VAR_10->eof_irq = VAR_12;





 FUNC_3(VAR_11, VAR_10, 1);

 VAR_12 = FUNC_4(VAR_11, VAR_10);
 if (VAR_12 < 0)
  goto eichan;

 VAR_12 = FUNC_8(VAR_10->eof_irq, VAR_8, 0,
     VAR_10->eof_name, VAR_10);
 if (VAR_12 < 0)
  goto erirq;
 VAR_10->status = VAR_3;

 FUNC_2(&VAR_9->dev->device, "Found channel 0x%x, irq %d\n",
  VAR_9->chan_id, VAR_10->eof_irq);

 return VAR_12;

erirq:
 FUNC_7(VAR_11, VAR_10);
eichan:
 FUNC_6(VAR_9->chan_id);
eimap:
 return VAR_12;
}
