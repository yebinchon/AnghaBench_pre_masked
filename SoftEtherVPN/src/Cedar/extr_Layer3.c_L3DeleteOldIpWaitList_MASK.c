
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_11__ {TYPE_1__* PacketData; } ;
struct TYPE_10__ {int * IpWaitList; } ;
struct TYPE_9__ {scalar_t__ Expire; TYPE_6__* Packet; } ;
typedef int LIST ;
typedef TYPE_1__ L3PACKET ;
typedef TYPE_2__ L3IF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;

void FUNC_9(L3IF *VAR_0)
{
 UINT VAR_1;
 LIST *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_0->IpWaitList);VAR_1++)
 {
  L3PACKET *VAR_3 = FUNC_4(VAR_0->IpWaitList, VAR_1);

  if (VAR_3->Expire <= FUNC_8())
  {
   if (VAR_2 == ((void*)0))
   {
    VAR_2 = FUNC_6(((void*)0));
   }

   FUNC_3(VAR_2, VAR_3);
  }
 }

 if (VAR_2 != ((void*)0))
 {
  for (VAR_1 = 0;VAR_1 < FUNC_5(VAR_2);VAR_1++)
  {
   L3PACKET *VAR_4 = FUNC_4(VAR_2, VAR_1);

   FUNC_0(VAR_0->IpWaitList, VAR_4);

   FUNC_1(VAR_4->Packet->PacketData);
   FUNC_2(VAR_4->Packet);
   FUNC_1(VAR_4);
  }

  FUNC_7(VAR_2);
 }
}
