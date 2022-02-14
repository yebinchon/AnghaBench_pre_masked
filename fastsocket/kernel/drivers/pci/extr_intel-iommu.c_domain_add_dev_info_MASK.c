
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_domain_info* iommu; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; int devfn; TYPE_3__* bus; } ;
struct dmar_domain {int devices; } ;
struct device_domain_info {int global; int link; struct dmar_domain* domain; struct pci_dev* dev; int devfn; int bus; int segment; } ;
struct TYPE_6__ {int number; } ;


 int VAR_0 ;
 struct device_domain_info* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dmar_domain*,struct pci_dev*,int) ;
 int FUNC_2 (struct device_domain_info*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct device_domain_info*) ;

__attribute__((used)) static int FUNC_8(struct dmar_domain *VAR_3,
          struct pci_dev *VAR_4,
          int VAR_5)
{
 struct device_domain_info *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0();
 if (!VAR_6)
  return -VAR_0;

 VAR_6->segment = FUNC_4(VAR_4->bus);
 VAR_6->bus = VAR_4->bus->number;
 VAR_6->devfn = VAR_4->devfn;
 VAR_6->dev = VAR_4;
 VAR_6->domain = VAR_3;

 FUNC_5(&VAR_2, VAR_7);
 FUNC_3(&VAR_6->link, &VAR_3->devices);
 FUNC_3(&VAR_6->global, &VAR_1);
 VAR_4->dev.archdata.iommu = VAR_6;
 FUNC_6(&VAR_2, VAR_7);

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_5(&VAR_2, VAR_7);
  FUNC_7(VAR_6);
  FUNC_6(&VAR_2, VAR_7);
  FUNC_2(VAR_6);
  return VAR_8;
 }

 return 0;
}
