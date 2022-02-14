
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int * AllList; int ** Entries; int NumItems; } ;
typedef TYPE_1__ HASH_LIST ;


 size_t FUNC_0 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(HASH_LIST *VAR_0, void *VAR_1)
{
 UINT VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_0->Entries[VAR_2] != ((void*)0))
 {
  if (FUNC_1(VAR_0->Entries[VAR_2], VAR_1))
  {
   VAR_3 = 1;
   VAR_0->NumItems--;
  }

  if (FUNC_2(VAR_0->Entries[VAR_2]) == 0)
  {
   FUNC_3(VAR_0->Entries[VAR_2]);
   VAR_0->Entries[VAR_2] = ((void*)0);
  }
 }

 if (VAR_3)
 {
  if (VAR_0->AllList != ((void*)0))
  {
   FUNC_1(VAR_0->AllList, VAR_1);
  }
 }

 return VAR_3;
}
