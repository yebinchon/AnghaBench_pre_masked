
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumItems; int * AllList; int ** Entries; int CompareProc; } ;
typedef TYPE_1__ HASH_LIST ;


 int FUNC_0 (int *,void*) ;
 size_t FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (int *,void*) ;
 int * FUNC_3 (int ) ;

void FUNC_4(HASH_LIST *VAR_0, void *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_0->Entries[VAR_2] == ((void*)0))
 {
  VAR_0->Entries[VAR_2] = FUNC_3(VAR_0->CompareProc);
 }

 FUNC_2(VAR_0->Entries[VAR_2], VAR_1);

 if (VAR_0->AllList != ((void*)0))
 {
  FUNC_0(VAR_0->AllList, VAR_1);
 }

 VAR_0->NumItems++;
}
