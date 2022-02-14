
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ archdata; int release; struct device* parent; int * dma_mask; } ;
struct of_device {TYPE_2__ dev; int dma_mask; int node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 struct of_device* FUNC_1 (int,int ) ;
 int FUNC_2 (struct of_device*) ;
 int FUNC_3 (struct device_node*) ;
 int VAR_1 ;

struct of_device *FUNC_4(struct device_node *VAR_2,
      const char *VAR_3,
      struct device *VAR_4)
{
 struct of_device *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->node = FUNC_3(VAR_2);
 VAR_5->dev.dma_mask = &VAR_5->dma_mask;
 VAR_5->dev.parent = VAR_4;
 VAR_5->dev.release = VAR_1;
 VAR_5->dev.archdata.of_node = VAR_2;

 if (VAR_3)
  FUNC_0(&VAR_5->dev, "%s", VAR_3);
 else
  FUNC_2(VAR_5);

 return VAR_5;
}
