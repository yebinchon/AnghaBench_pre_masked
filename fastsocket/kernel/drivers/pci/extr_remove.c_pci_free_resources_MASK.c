
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ parent; } ;
struct pci_dev {struct resource* resource; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 int VAR_2;

  FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct resource *VAR_3 = VAR_1->resource + VAR_2;
  if (VAR_3->parent)
   FUNC_2(VAR_3);
 }
}
