
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int upper; int lower; } ;
union u64bit {scalar_t__ val; TYPE_1__ val32; } ;
struct pci_dev {int dummy; } ;
struct CommandList {TYPE_3__* SG; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int upper; int lower; } ;
struct TYPE_6__ {int Len; TYPE_2__ Addr; } ;


 int FUNC_0 (struct pci_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
 struct CommandList *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 union u64bit VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_1->SG[VAR_4].Addr.lower;
  VAR_5 = VAR_1->SG[VAR_4].Addr.upper;
  FUNC_0(VAR_0, (dma_addr_t) VAR_5, VAR_1->SG[VAR_4].Len,
   VAR_3);
 }
}
