
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static inline int FUNC_2(struct pci_dev *VAR_2,
      struct resource *VAR_3)
{






 return FUNC_1(VAR_3);
}
