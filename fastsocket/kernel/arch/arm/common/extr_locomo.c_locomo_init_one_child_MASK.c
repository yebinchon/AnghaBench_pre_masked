
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct locomo_dev_info {int irq; int length; scalar_t__ offset; int devid; int name; } ;
struct TYPE_5__ {int coherent_dma_mask; int release; int * bus; TYPE_1__* parent; int * dma_mask; } ;
struct locomo_dev {TYPE_2__ dev; int irq; int length; scalar_t__ mapbase; int devid; int dma_mask; } ;
struct locomo {scalar_t__ base; TYPE_1__* dev; } ;
struct TYPE_4__ {int coherent_dma_mask; int * dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct locomo_dev*) ;
 struct locomo_dev* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct locomo *VAR_4, struct locomo_dev_info *VAR_5)
{
 struct locomo_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(struct locomo_dev), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out;
 }





 if (VAR_4->dev->dma_mask) {
  VAR_6->dma_mask = *VAR_4->dev->dma_mask;
  VAR_6->dev.dma_mask = &VAR_6->dma_mask;
 }

 FUNC_0(&VAR_6->dev, "%s", VAR_5->name);
 VAR_6->devid = VAR_5->devid;
 VAR_6->dev.parent = VAR_4->dev;
 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.release = VAR_3;
 VAR_6->dev.coherent_dma_mask = VAR_4->dev->coherent_dma_mask;

 if (VAR_5->offset)
  VAR_6->mapbase = VAR_4->base + VAR_5->offset;
 else
  VAR_6->mapbase = 0;
 VAR_6->length = VAR_5->length;

 FUNC_4(VAR_6->irq, VAR_5->irq, sizeof(VAR_6->irq));

 VAR_7 = FUNC_1(&VAR_6->dev);
 if (VAR_7) {
 out:
  FUNC_2(VAR_6);
 }
 return VAR_7;
}
