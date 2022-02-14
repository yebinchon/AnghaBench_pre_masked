
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct txx9dmac_dev {int irq; struct txx9dmac_chan** chan; } ;
struct TYPE_2__ {int dev; } ;
struct txx9dmac_chan {int lock; int chan; TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct txx9dmac_chan*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct txx9dmac_dev*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct txx9dmac_chan*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_6)
{
 int VAR_7;
 u32 VAR_8;
 struct txx9dmac_chan *VAR_9;

 struct txx9dmac_dev *VAR_10 = (struct txx9dmac_dev *)VAR_6;
 u32 VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10, VAR_1);
 FUNC_2(VAR_10->chan[0]->dma.dev, "tasklet: mcr=%x\n", VAR_11);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if ((VAR_11 >> (24 + VAR_12)) & 0x11) {
   VAR_9 = VAR_10->chan[VAR_12];
   VAR_8 = FUNC_1(VAR_9, VAR_0);
   FUNC_2(FUNC_0(&VAR_9->chan), "tasklet: status=%x\n",
     VAR_8);
   FUNC_5(&VAR_9->lock);
   if (VAR_8 & (VAR_2 | VAR_3 |
       VAR_4))
    FUNC_7(VAR_9);
   FUNC_6(&VAR_9->lock);
  }
 }
 VAR_7 = VAR_10->irq;

 FUNC_4(VAR_7);
}
