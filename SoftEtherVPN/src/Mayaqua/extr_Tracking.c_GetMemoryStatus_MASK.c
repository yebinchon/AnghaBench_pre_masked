
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {size_t MemoryBlocksNum; size_t MemorySize; } ;
struct TYPE_7__ {struct TYPE_7__* Next; TYPE_1__* Object; } ;
struct TYPE_6__ {size_t Size; int Name; } ;
typedef TYPE_1__ TRACKING_OBJECT ;
typedef TYPE_2__ TRACKING_LIST ;
typedef TYPE_3__ MEMORY_STATUS ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char*) ;
 size_t VAR_0 ;
 int FUNC_2 () ;
 TYPE_2__** VAR_1 ;

void FUNC_3(MEMORY_STATUS *VAR_2)
{
 UINT VAR_3, VAR_4, VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0();
 {
  VAR_5 = VAR_4 = 0;

  for (VAR_3 = 0;VAR_3 < VAR_0;VAR_3++)
  {
   if (VAR_1[VAR_3] != ((void*)0))
   {
    TRACKING_LIST *VAR_6 = VAR_1[VAR_3];

    while (1)
    {
     TRACKING_OBJECT *VAR_7 = VAR_6->Object;

     if (FUNC_1(VAR_7->Name, "MEM") == 0)
     {
      VAR_4++;
      VAR_5 += VAR_7->Size;
     }

     if (VAR_6->Next == ((void*)0))
     {
      break;
     }

     VAR_6 = VAR_6->Next;
    }
   }
  }
 }
 FUNC_2();

 VAR_2->MemoryBlocksNum = VAR_4;
 VAR_2->MemorySize = VAR_5;
}
