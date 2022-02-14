
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct at_dma_chan {int tasklet; int error_status; int mask; } ;
struct TYPE_2__ {int chancnt; int dev; } ;
struct at_dma {struct at_dma_chan* chan; TYPE_1__ dma_common; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct at_dma*,int ) ;
 int FUNC_4 (struct at_dma*,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct at_dma *VAR_7 = (struct at_dma *)VAR_6;
 struct at_dma_chan *VAR_8;
 int VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13 = VAR_4;

 do {
  VAR_12 = FUNC_3(VAR_7, VAR_1);
  VAR_10 = FUNC_3(VAR_7, VAR_2);
  VAR_11 = VAR_10 & VAR_12;

  if (!VAR_11)
   break;

  FUNC_2(VAR_7->dma_common.dev,
   "interrupt: status = 0x%08x, 0x%08x, 0x%08x\n",
    VAR_10, VAR_12, VAR_11);

  for (VAR_9 = 0; VAR_9 < VAR_7->dma_common.chancnt; VAR_9++) {
   VAR_8 = &VAR_7->chan[VAR_9];
   if (VAR_11 & (FUNC_0(VAR_9) | FUNC_1(VAR_9))) {
    if (VAR_11 & FUNC_1(VAR_9)) {

     FUNC_4(VAR_7, VAR_0, VAR_8->mask);

     FUNC_5(0, &VAR_8->error_status);
    }
    FUNC_6(&VAR_8->tasklet);
    VAR_13 = VAR_3;
   }
  }

 } while (VAR_11);

 return VAR_13;
}
