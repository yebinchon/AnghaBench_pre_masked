
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int number; int * parent; } ;
struct TYPE_2__ {int ica; int pcistatim; int pcistat; } ;


 unsigned char FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pci_bus *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 if (VAR_3->parent == ((void*)0) &&
     VAR_4 >= FUNC_0(VAR_1, 0))
  return -1;
 VAR_2->ica =
  ((VAR_3->number & 0xff) << 0x10) |
  ((VAR_4 & 0xff) << 0x08) |
  (VAR_5 & 0xfc) | (VAR_3->parent ? 1 : 0);


 VAR_2->pcistat |= VAR_0;
 VAR_2->pcistatim &= ~VAR_0;
 return 0;
}
