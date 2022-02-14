
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UCHAR ;
struct TYPE_14__ {int Size; int Buf; } ;
struct TYPE_13__ {int ArpTable; int BroadcastAddress; int SubnetMask; int ClientIPAddress; int MacAddress; } ;
struct TYPE_12__ {int Resolved; scalar_t__ ExpireTime; int MacAddress; int PacketQueue; scalar_t__ GiveupTime; } ;
typedef TYPE_1__ IPC_ARP ;
typedef TYPE_2__ IPC ;
typedef int IP ;
typedef TYPE_3__ BLOCK ;


 scalar_t__ FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 () ;

void FUNC_13(IPC *VAR_1, IP *VAR_2, UCHAR *VAR_3)
{
 IPC_ARP *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || FUNC_10(VAR_2) == 0 || FUNC_11(VAR_3) == 0)
 {
  return;
 }
 if (FUNC_1(&VAR_1->ClientIPAddress, VAR_2) == 0 || FUNC_0(VAR_1->MacAddress, VAR_3, 6) == 0)
 {
  return;
 }
 if (FUNC_9(VAR_2, &VAR_1->ClientIPAddress, &VAR_1->SubnetMask) == 0)
 {

  return;
 }

 if (FUNC_1(&VAR_1->BroadcastAddress, VAR_2) == 0)
 {

  return;
 }


 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
 {

  VAR_4 = FUNC_5(VAR_2, VAR_3);

  FUNC_8(VAR_1->ArpTable, VAR_4);
 }
 else
 {
  FUNC_2(VAR_4->MacAddress, VAR_3, 6);


  if (VAR_4->Resolved == 0)
  {
   VAR_4->Resolved = 1;
   VAR_4->GiveupTime = 0;


   while (1)
   {
    BLOCK *VAR_5 = FUNC_4(VAR_4->PacketQueue);

    if (VAR_5 == ((void*)0))
    {
     break;
    }

    FUNC_7(VAR_1, VAR_5->Buf, VAR_5->Size, VAR_4->MacAddress);

    FUNC_3(VAR_5);
   }
  }


  VAR_4->ExpireTime = FUNC_12() + (UINT64)VAR_0;
 }
}
