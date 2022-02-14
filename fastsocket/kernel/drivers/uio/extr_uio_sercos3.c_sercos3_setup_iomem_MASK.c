
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {TYPE_1__* mem; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int memtype; int size; int internal_addr; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, struct uio_info *VAR_2,
          int VAR_3, int VAR_4)
{
 VAR_2->mem[VAR_3].addr = FUNC_2(VAR_1, VAR_4);
 if (!VAR_2->mem[VAR_3].addr)
  return -1;
 VAR_2->mem[VAR_3].internal_addr = FUNC_0(FUNC_2(VAR_1, VAR_4),
          FUNC_1(VAR_1, VAR_4));
 if (!VAR_2->mem[VAR_3].internal_addr)
  return -1;
 VAR_2->mem[VAR_3].size = FUNC_1(VAR_1, VAR_4);
 VAR_2->mem[VAR_3].memtype = VAR_0;
 return 0;
}
