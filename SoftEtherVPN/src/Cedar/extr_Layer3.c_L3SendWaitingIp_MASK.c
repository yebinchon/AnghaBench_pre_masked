
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_13__ {TYPE_1__* PacketData; } ;
struct TYPE_12__ {int * IpWaitList; } ;
struct TYPE_11__ {scalar_t__ NextHopIp; TYPE_7__* Packet; } ;
typedef int LIST ;
typedef TYPE_1__ L3PACKET ;
typedef TYPE_2__ L3IF ;
typedef int L3ARPENTRY ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_2__*,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(L3IF *VAR_0, UCHAR *VAR_1, UINT VAR_2, L3ARPENTRY *VAR_3)
{
 UINT VAR_4;
 LIST *VAR_5 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 for (VAR_4 = 0;VAR_4 < FUNC_6(VAR_0->IpWaitList);VAR_4++)
 {
  L3PACKET *VAR_6 = FUNC_5(VAR_0->IpWaitList, VAR_4);

  if (VAR_6->NextHopIp == VAR_2)
  {
   if (VAR_5 == ((void*)0))
   {
    VAR_5 = FUNC_7(((void*)0));
   }
   FUNC_0(VAR_5, VAR_6);
  }
 }

 if (VAR_5 != ((void*)0))
 {
  for (VAR_4 = 0;VAR_4 < FUNC_6(VAR_5);VAR_4++)
  {
   L3PACKET *VAR_7 = FUNC_5(VAR_5, VAR_4);


   FUNC_4(VAR_0, VAR_3, VAR_7);

   FUNC_1(VAR_0->IpWaitList, VAR_7);
   FUNC_2(VAR_7->Packet->PacketData);
   FUNC_3(VAR_7->Packet);
   FUNC_2(VAR_7);
  }

  FUNC_8(VAR_5);
 }
}
