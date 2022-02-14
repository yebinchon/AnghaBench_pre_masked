
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NatT_Halt; TYPE_2__* Cedar; int NatT_Lock; int NatT_HaltEvent; int * NatT_GetIpThread; int MyPort; scalar_t__ IsInCedarPortList; int UdpSock; int RecvBlockQueue; } ;
typedef TYPE_1__ UDP_ACCEL ;
struct TYPE_6__ {int UdpPortList; } ;
typedef int BLOCK ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;

void FUNC_14(UDP_ACCEL *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  BLOCK *VAR_2 = FUNC_4(VAR_1->RecvBlockQueue);

  if (VAR_2 == ((void*)0))
  {
   break;
  }

  FUNC_3(VAR_2);
 }

 FUNC_8(VAR_1->RecvBlockQueue);

 FUNC_9(VAR_1->UdpSock);

 if (VAR_1->IsInCedarPortList)
 {
  FUNC_5(VAR_1->Cedar->UdpPortList);
  {
   FUNC_0(VAR_1->Cedar->UdpPortList, VAR_1->MyPort);
  }
  FUNC_12(VAR_1->Cedar->UdpPortList);
 }


 VAR_1->NatT_Halt = 1;
 FUNC_11(VAR_1->NatT_HaltEvent);

 if (VAR_1->NatT_GetIpThread != ((void*)0))
 {
  FUNC_13(VAR_1->NatT_GetIpThread, VAR_0);
  FUNC_10(VAR_1->NatT_GetIpThread);
 }

 FUNC_7(VAR_1->NatT_HaltEvent);
 FUNC_1(VAR_1->NatT_Lock);

 FUNC_6(VAR_1->Cedar);

 FUNC_2(VAR_1);
}
