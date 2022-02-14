
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct SRingBufferDescriptor {int NumBuffers; int PASCListMem; int SCListMemSize; int Buffer1Length; int Buffer2Length; struct SBufferHeader* Head; void* SCListMem; } ;
struct TYPE_2__ {int Address_of_first_entry_1; int Number_of_entries_1; int Address_of_first_entry_2; int Number_of_entries_2; } ;
struct SBufferHeader {TYPE_1__ ngeneBuffer; struct HW_SCATTER_GATHER_ELEMENT* scList2; void* Buffer2; struct HW_SCATTER_GATHER_ELEMENT* scList1; void* Buffer1; struct SBufferHeader* Next; } ;
struct HW_SCATTER_GATHER_ELEMENT {int Address; int Length; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (struct pci_dev*,int,void**) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3,
          dma_addr_t VAR_4,
          struct SRingBufferDescriptor *VAR_5,
          u32 VAR_6, u32 VAR_7)
{
 dma_addr_t VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11 = 0;
 u32 VAR_12 = VAR_5->NumBuffers
  * ((VAR_7 != 0) ? (VAR_1 * 2) :
      VAR_1)
  * sizeof(struct HW_SCATTER_GATHER_ELEMENT);

 u64 VAR_13;
 struct HW_SCATTER_GATHER_ELEMENT *VAR_14;
 u64 VAR_15;
 struct SBufferHeader *VAR_16;
 void *VAR_17;

 if (VAR_12 < 4096)
  VAR_12 = 4096;

 VAR_17 = FUNC_1(VAR_3, VAR_12, &VAR_8);

 VAR_13 = VAR_8;
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 FUNC_0(VAR_17, 0, VAR_12);

 VAR_5->SCListMem = VAR_17;
 VAR_5->PASCListMem = VAR_13;
 VAR_5->SCListMemSize = VAR_12;
 VAR_5->Buffer1Length = VAR_6;
 VAR_5->Buffer2Length = VAR_7;

 VAR_14 = VAR_17;
 VAR_15 = VAR_13;
 VAR_16 = VAR_5->Head;

 for (VAR_9 = 0; VAR_9 < VAR_5->NumBuffers; VAR_9 += 1, VAR_16 = VAR_16->Next) {
  u64 VAR_18;

  void *VAR_19 = FUNC_1(VAR_3, VAR_6,
          &VAR_8);
  VAR_18 = VAR_8;

  if (VAR_19 == ((void*)0))
   return -VAR_0;

  VAR_16->Buffer1 = VAR_19;

  VAR_14->Address = VAR_18;
  VAR_14->Length = VAR_6;

  VAR_16->scList1 = VAR_14;
  VAR_16->ngeneBuffer.Address_of_first_entry_1 = VAR_15;
  VAR_16->ngeneBuffer.Number_of_entries_1 =
   VAR_1;

  VAR_14 += 1;
  VAR_15 += sizeof(struct HW_SCATTER_GATHER_ELEMENT);
  if (!VAR_7)
   continue;

  VAR_19 = FUNC_1(VAR_3, VAR_7, &VAR_8);
  VAR_18 = VAR_8;

  if (VAR_19 == ((void*)0))
   return -VAR_0;

  VAR_16->Buffer2 = VAR_19;

  VAR_14->Address = VAR_18;
  VAR_14->Length = VAR_7;

  VAR_16->scList2 = VAR_14;
  VAR_16->ngeneBuffer.Address_of_first_entry_2 = VAR_15;
  VAR_16->ngeneBuffer.Number_of_entries_2 =
   VAR_1;

  VAR_14 += 1;
  VAR_15 += sizeof(struct HW_SCATTER_GATHER_ELEMENT);
 }

 return VAR_11;
}
