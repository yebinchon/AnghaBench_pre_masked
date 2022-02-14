
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct txx9dmac_dev {int tasklet; TYPE_2__** chan; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct txx9dmac_dev*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct txx9dmac_dev *VAR_4 = VAR_3;

 FUNC_0(VAR_4->chan[0]->dma.dev, "interrupt: status=%#x\n",
   FUNC_2(VAR_4, VAR_1));

 FUNC_3(&VAR_4->tasklet);




 FUNC_1(VAR_2);

 return VAR_0;
}
