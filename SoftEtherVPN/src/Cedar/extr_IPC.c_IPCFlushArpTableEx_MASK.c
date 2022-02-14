
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int * ArpTable; } ;
struct TYPE_8__ {int Resolved; scalar_t__ ExpireTime; scalar_t__ GiveupTime; } ;
typedef int LIST ;
typedef TYPE_1__ IPC_ARP ;
typedef TYPE_2__ IPC ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(IPC *VAR_0, UINT64 VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 if (VAR_1 == 0)
 {
  VAR_1 = FUNC_7();
 }

 for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_0->ArpTable);VAR_2++)
 {
  IPC_ARP *VAR_4 = FUNC_3(VAR_0->ArpTable, VAR_2);
  bool VAR_5 = 0;

  if (VAR_4->Resolved && VAR_4->ExpireTime <= VAR_1)
  {
   VAR_5 = 1;
  }
  else if (VAR_4->Resolved == 0 && VAR_4->GiveupTime <= VAR_1)
  {
   VAR_5 = 1;
  }

  if (VAR_5)
  {
   if (VAR_3 == ((void*)0))
   {
    VAR_3 = FUNC_5(((void*)0));
   }

   FUNC_0(VAR_3, VAR_4);
  }
 }

 if (VAR_3 != ((void*)0))
 {
  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_3);VAR_2++)
  {
   IPC_ARP *VAR_6 = FUNC_3(VAR_3, VAR_2);

   FUNC_2(VAR_6);

   FUNC_1(VAR_0->ArpTable, VAR_6);
  }

  FUNC_6(VAR_3);
 }
}
