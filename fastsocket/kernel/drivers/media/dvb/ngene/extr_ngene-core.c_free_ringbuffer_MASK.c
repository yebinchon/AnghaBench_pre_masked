
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ngene {int pci_dev; } ;
struct SRingBufferDescriptor {scalar_t__ NumBuffers; int PAHead; struct SBufferHeader* Head; int MemSize; int PASCListMem; struct SBufferHeader* SCListMem; int SCListMemSize; int Buffer2Length; int Buffer1Length; } ;
struct SBufferHeader {TYPE_2__* scList2; struct SBufferHeader* Buffer2; TYPE_1__* scList1; struct SBufferHeader* Buffer1; struct SBufferHeader* Next; } ;
struct TYPE_4__ {int Address; } ;
struct TYPE_3__ {int Address; } ;


 int FUNC_0 (int ,int ,struct SBufferHeader*,int ) ;

__attribute__((used)) static void FUNC_1(struct ngene *VAR_0, struct SRingBufferDescriptor *VAR_1)
{
 struct SBufferHeader *VAR_2 = VAR_1->Head;
 u32 VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->NumBuffers; VAR_3++, VAR_2 = VAR_2->Next) {
  if (VAR_2->Buffer1)
   FUNC_0(VAR_0->pci_dev,
         VAR_1->Buffer1Length,
         VAR_2->Buffer1,
         VAR_2->scList1->Address);

  if (VAR_2->Buffer2)
   FUNC_0(VAR_0->pci_dev,
         VAR_1->Buffer2Length,
         VAR_2->Buffer2,
         VAR_2->scList2->Address);
 }

 if (VAR_1->SCListMem)
  FUNC_0(VAR_0->pci_dev, VAR_1->SCListMemSize,
        VAR_1->SCListMem, VAR_1->PASCListMem);

 FUNC_0(VAR_0->pci_dev, VAR_1->MemSize, VAR_1->Head, VAR_1->PAHead);
}
