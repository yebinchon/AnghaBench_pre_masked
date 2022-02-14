
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* platform_data; int parent; int release; } ;
struct platform_device {char* name; unsigned int num_resources; TYPE_1__ dev; struct resource* resource; int id; } ;
struct sm501_device {struct platform_device pdev; } ;
struct sm501_devdata {int dev; int pdev_id; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 struct sm501_device* FUNC_0 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct platform_device *
FUNC_1(struct sm501_devdata *VAR_2, char *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 struct sm501_device *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct sm501_device) +
   (sizeof(struct resource) * VAR_4) +
   VAR_5, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->pdev.dev.release = VAR_1;

 VAR_6->pdev.name = VAR_3;
 VAR_6->pdev.id = VAR_2->pdev_id;
 VAR_6->pdev.dev.parent = VAR_2->dev;

 if (VAR_4) {
  VAR_6->pdev.resource = (struct resource *)(VAR_6+1);
  VAR_6->pdev.num_resources = VAR_4;
 }
 if (VAR_5)
  VAR_6->pdev.dev.platform_data = (void *)(VAR_6+1);

 return &VAR_6->pdev;
}
