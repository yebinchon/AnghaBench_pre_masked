
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene {int dummy; } ;
struct SRingBufferDescriptor {int NumBuffers; struct SBufferHeader* Head; } ;
struct TYPE_2__ {scalar_t__ Number_of_entries_2; scalar_t__ Address_of_first_entry_2; } ;
struct SBufferHeader {TYPE_1__ ngeneBuffer; int * scList2; int * Buffer2; struct SBufferHeader* Next; } ;


 int FUNC_0 (struct ngene*,struct SRingBufferDescriptor*) ;

__attribute__((used)) static void FUNC_1(struct ngene *VAR_0,
       struct SRingBufferDescriptor *VAR_1,
       struct SRingBufferDescriptor *VAR_2)
{
 int VAR_3;
 struct SBufferHeader *VAR_4 = VAR_2->Head;

 if (!VAR_1->Head)
  return;
 FUNC_0(VAR_0, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->NumBuffers; VAR_3++, VAR_4 = VAR_4->Next) {
  VAR_4->Buffer2 = ((void*)0);
  VAR_4->scList2 = ((void*)0);
  VAR_4->ngeneBuffer.Address_of_first_entry_2 = 0;
  VAR_4->ngeneBuffer.Number_of_entries_2 = 0;
 }
}
