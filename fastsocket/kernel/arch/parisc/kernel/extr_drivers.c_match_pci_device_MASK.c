
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {unsigned int devfn; } ;
struct hardware_path {scalar_t__* bc; scalar_t__ mod; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, int VAR_1,
  struct hardware_path *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (VAR_1 == 5) {

  unsigned int VAR_5 = VAR_3->devfn;
  return ((VAR_2->bc[5] == FUNC_1(VAR_5)) &&
     (VAR_2->mod == FUNC_0(VAR_5)));
 }

 VAR_4 = FUNC_1(VAR_3->devfn) | (FUNC_0(VAR_3->devfn) << 5);
 return (VAR_2->bc[VAR_1] == VAR_4);
}
