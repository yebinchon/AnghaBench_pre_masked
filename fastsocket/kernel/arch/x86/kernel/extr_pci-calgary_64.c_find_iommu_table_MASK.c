
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {scalar_t__ number; struct pci_bus* parent; } ;
struct iommu_table {scalar_t__ it_busno; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct iommu_table* FUNC_1 (struct pci_bus*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static inline struct iommu_table *FUNC_3(struct device *VAR_0)
{
 struct pci_dev *VAR_1;
 struct pci_bus *VAR_2;
 struct iommu_table *VAR_3;

 VAR_1 = FUNC_2(VAR_0);


 VAR_2 = VAR_1->bus;
 do {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 && VAR_3->it_busno == VAR_2->number)
   break;
  VAR_3 = ((void*)0);
  VAR_2 = VAR_2->parent;
 } while (VAR_2);

 FUNC_0(VAR_3 && (VAR_3->it_busno != VAR_2->number));

 return VAR_3;
}
