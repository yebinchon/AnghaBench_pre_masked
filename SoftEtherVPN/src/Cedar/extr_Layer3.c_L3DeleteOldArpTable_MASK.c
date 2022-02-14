
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ Expire; } ;
struct TYPE_8__ {scalar_t__ LastDeleteOldArpTable; int * ArpTable; } ;
typedef int LIST ;
typedef TYPE_1__ L3IF ;
typedef TYPE_2__ L3ARPENTRY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(L3IF *VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if ((VAR_1->LastDeleteOldArpTable + VAR_0) > FUNC_7())
 {
  return;
 }
 VAR_1->LastDeleteOldArpTable = FUNC_7();

 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_1->ArpTable);VAR_2++)
 {
  L3ARPENTRY *VAR_4 = FUNC_3(VAR_1->ArpTable, VAR_2);

  if (VAR_4->Expire <= FUNC_7())
  {

   if (VAR_3 == ((void*)0))
   {
    VAR_3 = FUNC_5(((void*)0));
   }

   FUNC_2(VAR_3, VAR_4);
  }
 }

 if (VAR_3 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_3);VAR_2++)
  {
   L3ARPENTRY *VAR_5 = FUNC_3(VAR_3, VAR_2);

   FUNC_0(VAR_1->ArpTable, VAR_5);
   FUNC_1(VAR_5);
  }

  FUNC_6(VAR_3);
 }
}
