
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int DhcpLeaseList; int NatTable; TYPE_6__* NativeNat; } ;
typedef TYPE_2__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int lock; TYPE_2__* Virtual; } ;
struct TYPE_21__ {TYPE_1__* NatTableForSend; } ;
struct TYPE_20__ {int Protocol; } ;
struct TYPE_19__ {int Protocol; } ;
struct TYPE_18__ {int IsRawIpMode; int IsKernelMode; scalar_t__ NumDhcpClients; int NumDnsSessions; int NumIcmpSessions; int NumUdpSessions; int NumTcpSessions; } ;
struct TYPE_16__ {int AllList; } ;
typedef TYPE_3__ RPC_NAT_STATUS ;
typedef TYPE_4__ NAT_ENTRY ;
typedef TYPE_5__ NATIVE_NAT_ENTRY ;
typedef TYPE_6__ NATIVE_NAT ;
typedef TYPE_7__ NAT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;




 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,int) ;

UINT FUNC_12(NAT *VAR_1, RPC_NAT_STATUS *VAR_2)
{
 FUNC_3(VAR_1->lock);
 {
  VH *VAR_3 = VAR_1->Virtual;
  FUNC_0(VAR_2);
  FUNC_11(VAR_2, sizeof(RPC_NAT_STATUS));

  FUNC_5(VAR_3);
  {
   UINT VAR_4;

   FUNC_4(VAR_3->NatTable);
   {
    for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_3->NatTable);VAR_4++)
    {
     NAT_ENTRY *VAR_5 = FUNC_1(VAR_3->NatTable, VAR_4);

     switch (VAR_5->Protocol)
     {
     case 129:
      VAR_2->NumTcpSessions++;
      break;

     case 128:
      VAR_2->NumUdpSessions++;
      break;

     case 130:
      VAR_2->NumIcmpSessions++;
      break;

     case 131:
      VAR_2->NumDnsSessions++;
      break;
     }
    }

    if (FUNC_6(VAR_3) && VAR_3->NativeNat != ((void*)0))
    {
     NATIVE_NAT *VAR_6 = VAR_3->NativeNat;

     for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_6->NatTableForSend->AllList);VAR_4++)
     {
      NATIVE_NAT_ENTRY *VAR_7 = FUNC_1(VAR_6->NatTableForSend->AllList, VAR_4);

      switch (VAR_7->Protocol)
      {
      case 129:
       VAR_2->NumTcpSessions++;
       break;

      case 128:
       VAR_2->NumUdpSessions++;
       break;

      case 130:
       VAR_2->NumIcmpSessions++;
       break;

      case 131:
       VAR_2->NumDnsSessions++;
       break;
      }
     }
    }
   }
   FUNC_9(VAR_3->NatTable);

   VAR_2->NumDhcpClients = FUNC_2(VAR_3->DhcpLeaseList);

   VAR_2->IsKernelMode = FUNC_7(VAR_3, &VAR_2->IsRawIpMode);
  }
  FUNC_10(VAR_3);
 }
 FUNC_8(VAR_1->lock);

 return VAR_0;
}
