
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; int * bus; } ;
struct isa_driver {TYPE_1__* devices; TYPE_2__ driver; } ;
struct TYPE_6__ {struct isa_driver* platform_data; int coherent_dma_mask; int * dma_mask; int release; int * bus; int * parent; } ;
struct isa_dev {unsigned int id; TYPE_1__ dev; TYPE_1__* next; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct isa_driver*) ;
 struct isa_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;

int FUNC_8(struct isa_driver *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;

 VAR_6->driver.bus = &VAR_4;
 VAR_6->devices = ((void*)0);

 VAR_8 = FUNC_4(&VAR_6->driver);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  struct isa_dev *VAR_10;

  VAR_10 = FUNC_6(sizeof *VAR_10, VAR_2);
  if (!VAR_10) {
   VAR_8 = -VAR_1;
   break;
  }

  VAR_10->dev.parent = &VAR_3;
  VAR_10->dev.bus = &VAR_4;

  FUNC_1(&VAR_10->dev, "%s.%u",
        VAR_6->driver.name, VAR_9);
  VAR_10->dev.platform_data = VAR_6;
  VAR_10->dev.release = VAR_5;
  VAR_10->id = VAR_9;

  VAR_10->dev.coherent_dma_mask = FUNC_0(24);
  VAR_10->dev.dma_mask = &VAR_10->dev.coherent_dma_mask;

  VAR_8 = FUNC_2(&VAR_10->dev);
  if (VAR_8) {
   FUNC_7(&VAR_10->dev);
   break;
  }

  if (VAR_10->dev.platform_data) {
   VAR_10->next = VAR_6->devices;
   VAR_6->devices = &VAR_10->dev;
  } else
   FUNC_3(&VAR_10->dev);
 }

 if (!VAR_8 && !VAR_6->devices)
  VAR_8 = -VAR_0;

 if (VAR_8)
  FUNC_5(VAR_6);

 return VAR_8;
}
