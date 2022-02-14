
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int NumItems; size_t Size; int ** Entries; int * AllList; } ;
typedef int LIST ;
typedef TYPE_1__ HASH_LIST ;


 void* FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 void** FUNC_2 (int *) ;
 void** FUNC_3 (int) ;

void **FUNC_4(HASH_LIST *VAR_0, UINT *VAR_1)
{
 void **VAR_2 = ((void*)0);
 UINT VAR_3;
 UINT VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  if (VAR_1 != ((void*)0))
  {
   *VAR_1 = 0;
  }
  return ((void*)0);
 }

 if (VAR_0->AllList != ((void*)0))
 {
  *VAR_1 = FUNC_1(VAR_0->AllList);

  return FUNC_2(VAR_0->AllList);
 }

 VAR_2 = FUNC_3(sizeof(void *) * VAR_0->NumItems);

 for (VAR_3 = 0;VAR_3 < VAR_0->Size;VAR_3++)
 {
  LIST *VAR_5 = VAR_0->Entries[VAR_3];

  if (VAR_5 != ((void*)0))
  {
   UINT VAR_6;

   for (VAR_6 = 0;VAR_6 < FUNC_1(VAR_5);VAR_6++)
   {
    void *VAR_7 = FUNC_0(VAR_5, VAR_6);

    VAR_2[VAR_4] = VAR_7;
    VAR_4++;
   }
  }
 }

 *VAR_1 = VAR_4;

 return VAR_2;
}
