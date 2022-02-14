
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct SRingBufferDescriptor {int MemSize; int NumBuffers; void* PAHead; struct SBufferHeader* Head; } ;
struct TYPE_2__ {void* Next; } ;
struct SBufferHeader {TYPE_1__ ngeneBuffer; struct SBufferHeader* Next; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SBufferHeader*,int ,int) ;
 struct SBufferHeader* FUNC_1 (struct pci_dev*,int,void**) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2,
         struct SRingBufferDescriptor *VAR_3, u32 VAR_4)
{
 dma_addr_t VAR_5;
 struct SBufferHeader *VAR_6;
 u32 VAR_7;
 u32 VAR_8 = VAR_1 * VAR_4;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 struct SBufferHeader *VAR_12, *VAR_13;

 VAR_3->Head = ((void*)0);
 VAR_3->MemSize = 0;
 VAR_3->PAHead = 0;
 VAR_3->NumBuffers = 0;

 if (VAR_8 < 4096)
  VAR_8 = 4096;

 VAR_6 = FUNC_1(VAR_2, VAR_8, &VAR_5);
 VAR_9 = VAR_5;

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6, 0, VAR_8);

 VAR_10 = VAR_9;
 VAR_12 = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4 - 1; VAR_7++) {
  VAR_13 = (struct SBufferHeader *)
   (((u8 *) VAR_12) + VAR_1);
  VAR_11 = VAR_10 + VAR_1;
  VAR_12->Next = VAR_13;
  VAR_12->ngeneBuffer.Next = VAR_11;
  VAR_12 = VAR_13;
  VAR_10 = VAR_11;
 }

 VAR_12->Next = VAR_6;
 VAR_12->ngeneBuffer.Next = VAR_9;

 VAR_3->Head = VAR_6;
 VAR_3->MemSize = VAR_8;
 VAR_3->PAHead = VAR_9;
 VAR_3->NumBuffers = VAR_4;

 return 0;
}
