
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_dev {int dummy; } ;
typedef int pgprot_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static pgprot_t FUNC_3(struct pci_dev *VAR_2, struct resource *VAR_3,
          pgprot_t VAR_4,
          enum pci_mmap_state VAR_5,
          int VAR_6)
{
 unsigned long VAR_7 = FUNC_2(VAR_4);







 if (VAR_5 != VAR_1)
  VAR_6 = 0;
 else if (VAR_6 == 0) {
  if (VAR_3->flags & VAR_0)
   VAR_6 = 1;
 }


 if (VAR_6)
  return FUNC_1(VAR_7);
 else
  return FUNC_0(VAR_7);
}
