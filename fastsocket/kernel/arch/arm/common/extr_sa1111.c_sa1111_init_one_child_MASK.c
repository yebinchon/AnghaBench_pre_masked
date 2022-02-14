
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sa1111_dev_info {int irq; int skpcr_mask; scalar_t__ offset; int devid; } ;
struct TYPE_12__ {int* dma_mask; int coherent_dma_mask; int release; int * bus; TYPE_1__* parent; } ;
struct TYPE_11__ {int name; int flags; scalar_t__ start; scalar_t__ end; } ;
struct sa1111_dev {int dma_mask; TYPE_4__ dev; TYPE_2__ res; int irq; int skpcr_mask; scalar_t__ mapbase; int devid; } ;
struct sa1111 {TYPE_1__* dev; scalar_t__ base; scalar_t__ phys; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {int* dma_mask; int coherent_dma_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (struct sa1111_dev*) ;
 struct sa1111_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct resource*,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_12(struct sa1111 *VAR_5, struct resource *VAR_6,
        struct sa1111_dev_info *VAR_7)
{
 struct sa1111_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(sizeof(struct sa1111_dev), VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_2(&VAR_8->dev, "%4.4lx", VAR_7->offset);
 VAR_8->devid = VAR_7->devid;
 VAR_8->dev.parent = VAR_5->dev;
 VAR_8->dev.bus = &VAR_3;
 VAR_8->dev.release = VAR_4;
 VAR_8->dev.coherent_dma_mask = VAR_5->dev->coherent_dma_mask;
 VAR_8->res.start = VAR_5->phys + VAR_7->offset;
 VAR_8->res.end = VAR_8->res.start + 511;
 VAR_8->res.name = FUNC_1(&VAR_8->dev);
 VAR_8->res.flags = VAR_2;
 VAR_8->mapbase = VAR_5->base + VAR_7->offset;
 VAR_8->skpcr_mask = VAR_7->skpcr_mask;
 FUNC_8(VAR_8->irq, VAR_7->irq, sizeof(VAR_8->irq));

 VAR_9 = FUNC_11(VAR_6, &VAR_8->res);
 if (VAR_9) {
  FUNC_9("SA1111: failed to allocate resource for %s\n",
   VAR_8->res.name);
  FUNC_2(&VAR_8->dev, ((void*)0));
  FUNC_6(VAR_8);
  goto out;
 }


 VAR_9 = FUNC_3(&VAR_8->dev);
 if (VAR_9) {
  FUNC_10(&VAR_8->res);
  FUNC_6(VAR_8);
  goto out;
 }
out:
 return VAR_9;
}
