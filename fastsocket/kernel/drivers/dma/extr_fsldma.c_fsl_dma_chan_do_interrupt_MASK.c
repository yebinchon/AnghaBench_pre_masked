
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_dma_chan {int tasklet; int dev; int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fsl_dma_chan*) ;
 int FUNC_3 (struct fsl_dma_chan*) ;
 scalar_t__ FUNC_4 (struct fsl_dma_chan*) ;
 scalar_t__ FUNC_5 (struct fsl_dma_chan*) ;
 scalar_t__ FUNC_6 (struct fsl_dma_chan*) ;
 int FUNC_7 (struct fsl_dma_chan*) ;
 int FUNC_8 (struct fsl_dma_chan*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct fsl_dma_chan *VAR_11 = (struct fsl_dma_chan *)VAR_10;
 u32 VAR_12;
 int VAR_13 = 0;
 int VAR_14 = 0;

 VAR_12 = FUNC_7(VAR_11);
 FUNC_0(VAR_11->dev, "event: channel %d, stat = 0x%x\n",
      VAR_11->id, VAR_12);
 FUNC_8(VAR_11, VAR_12);

 VAR_12 &= ~(VAR_0 | VAR_1);
 if (!VAR_12)
  return VAR_8;

 if (VAR_12 & VAR_6)
  FUNC_1(VAR_11->dev, "Transfer Error!\n");





 if (VAR_12 & VAR_5) {
  FUNC_0(VAR_11->dev, "event: Programming Error INT\n");
  if (FUNC_4(VAR_11) == 0) {




   VAR_13 = 1;
   VAR_14 = 1;
  }
  VAR_12 &= ~VAR_5;
 }




 if (VAR_12 & VAR_4) {
  FUNC_0(VAR_11->dev, "event: End-of-segments INT\n");
  FUNC_0(VAR_11->dev, "event: clndar 0x%llx, nlndar 0x%llx\n",
   (unsigned long long)FUNC_5(VAR_11),
   (unsigned long long)FUNC_6(VAR_11));
  VAR_12 &= ~VAR_4;
  VAR_13 = 1;
 }




 if (VAR_12 & VAR_2) {
  FUNC_0(VAR_11->dev, "event: End-of-Chain link INT\n");
  VAR_12 &= ~VAR_2;
  VAR_13 = 1;
  VAR_14 = 1;
 }





 if (VAR_12 & VAR_3) {
  FUNC_0(VAR_11->dev, "event: End-of-link INT\n");
  VAR_12 &= ~VAR_3;
  VAR_14 = 1;
 }

 if (VAR_13)
  FUNC_3(VAR_11);
 if (VAR_14)
  FUNC_2(VAR_11);
 if (VAR_12)
  FUNC_0(VAR_11->dev, "event: unhandled sr 0x%02x\n",
     VAR_12);

 FUNC_0(VAR_11->dev, "event: Exit\n");
 FUNC_9(&VAR_11->tasklet);
 return VAR_7;
}
