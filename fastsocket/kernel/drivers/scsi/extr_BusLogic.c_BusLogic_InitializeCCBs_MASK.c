
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int BaseAddress; } ;
struct BusLogic_HostAdapter {int AllocatedCCBs; struct BusLogic_CCB* All_CCBs; struct BusLogic_CCB* Free_CCBs; TYPE_1__ FlashPointInfo; } ;
struct BusLogic_CCB {int AllocationGroupSize; struct BusLogic_CCB* NextAll; struct BusLogic_CCB* Next; int BaseAddress; int CallbackFunction; scalar_t__ DMA_Handle; struct BusLogic_HostAdapter* HostAdapter; int Status; scalar_t__ AllocationGroupHead; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct BusLogic_HostAdapter*) ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct BusLogic_HostAdapter *VAR_2, void *VAR_3, int VAR_4, dma_addr_t VAR_5)
{
 struct BusLogic_CCB *VAR_6 = (struct BusLogic_CCB *) VAR_3;
 unsigned int VAR_7 = 0;
 FUNC_1(VAR_3, 0, VAR_4);
 VAR_6->AllocationGroupHead = VAR_5;
 VAR_6->AllocationGroupSize = VAR_4;
 while ((VAR_4 -= sizeof(struct BusLogic_CCB)) >= 0) {
  VAR_6->Status = VAR_0;
  VAR_6->HostAdapter = VAR_2;
  VAR_6->DMA_Handle = (u32) VAR_5 + VAR_7;
  if (FUNC_0(VAR_2)) {
   VAR_6->CallbackFunction = VAR_1;
   VAR_6->BaseAddress = VAR_2->FlashPointInfo.BaseAddress;
  }
  VAR_6->Next = VAR_2->Free_CCBs;
  VAR_6->NextAll = VAR_2->All_CCBs;
  VAR_2->Free_CCBs = VAR_6;
  VAR_2->All_CCBs = VAR_6;
  VAR_2->AllocatedCCBs++;
  VAR_6++;
  VAR_7 += sizeof(struct BusLogic_CCB);
 }
}
