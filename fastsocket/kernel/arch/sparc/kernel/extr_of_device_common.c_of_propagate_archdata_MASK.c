
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_archdata {int numa_node; int host_controller; int stc; int iommu; } ;
struct TYPE_2__ {struct dev_archdata archdata; } ;
struct of_device {TYPE_1__ dev; struct device_node* node; } ;
struct device_node {struct device_node* child; struct device_node* sibling; } ;


 struct of_device* FUNC_0 (struct device_node*) ;

void FUNC_1(struct of_device *VAR_0)
{
 struct dev_archdata *VAR_1 = &VAR_0->dev.archdata;
 struct device_node *VAR_2 = VAR_0->node;
 struct device_node *VAR_3;

 for (VAR_3 = VAR_2->child; VAR_3; VAR_3 = VAR_3->sibling) {
  struct of_device *VAR_4 = FUNC_0(VAR_3);

  VAR_4->dev.archdata.iommu = VAR_1->iommu;
  VAR_4->dev.archdata.stc = VAR_1->stc;
  VAR_4->dev.archdata.host_controller = VAR_1->host_controller;
  VAR_4->dev.archdata.numa_node = VAR_1->numa_node;

  if (VAR_3->child)
   FUNC_1(VAR_4);
 }
}
