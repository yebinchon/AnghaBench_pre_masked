
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* prom_node; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;



struct device_node *FUNC_0(struct pci_dev *VAR_0)
{
 return VAR_0->dev.archdata.prom_node;
}
