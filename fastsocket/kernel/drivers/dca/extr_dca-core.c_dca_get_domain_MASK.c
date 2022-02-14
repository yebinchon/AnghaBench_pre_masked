
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;
struct device {int dummy; } ;
struct dca_domain {int node; } ;


 struct dca_domain* FUNC_0 (struct pci_bus*) ;
 int VAR_0 ;
 struct dca_domain* FUNC_1 (struct pci_bus*) ;
 struct pci_bus* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct dca_domain *FUNC_6(struct device *VAR_2)
{
 struct pci_bus *VAR_3;
 struct dca_domain *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4) {
  if (FUNC_3(VAR_2) && !FUNC_5(&VAR_0)) {
   VAR_1 = 1;
  } else {
   VAR_4 = FUNC_0(VAR_3);
   if (VAR_4)
    FUNC_4(&VAR_4->node, &VAR_0);
  }
 }

 return VAR_4;
}
