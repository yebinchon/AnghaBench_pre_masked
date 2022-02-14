
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int Active; int NatTable; TYPE_8__* NativeNat; } ;
typedef TYPE_3__ VH ;
typedef size_t UINT ;
struct TYPE_26__ {int Online; int lock; TYPE_3__* Virtual; } ;
struct TYPE_25__ {TYPE_2__* NatTableForSend; } ;
struct TYPE_24__ {int Status; int TotalRecv; int TotalSent; int LastCommTime; int CreatedTime; int DestPort; int SrcPort; int DestIp; int SrcIp; int Protocol; int Id; } ;
struct TYPE_23__ {int TcpStatus; TYPE_1__* Sock; int LastCommTime; int CreatedTime; int DestPort; int SrcPort; int DestIp; int SrcIp; int Protocol; int Id; } ;
struct TYPE_22__ {size_t NumItem; TYPE_4__* Items; } ;
struct TYPE_21__ {int TcpStatus; int RecvSize; int SendSize; int DestIp; int DestHost; int SrcIp; int SrcHost; void* LastCommTime; void* CreatedTime; int DestPort; int SrcPort; int Protocol; int Id; } ;
struct TYPE_19__ {int AllList; } ;
struct TYPE_18__ {scalar_t__ Type; int RemoteHostname; int RecvSize; int SendSize; } ;
typedef TYPE_4__ RPC_ENUM_NAT_ITEM ;
typedef TYPE_5__ RPC_ENUM_NAT ;
typedef TYPE_6__ NAT_ENTRY ;
typedef TYPE_7__ NATIVE_NAT_ENTRY ;
typedef TYPE_8__ NATIVE_NAT ;
typedef TYPE_9__ NAT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,int,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_14 (int) ;

UINT FUNC_15(NAT *VAR_3, RPC_ENUM_NAT *VAR_4)
{
 UINT VAR_5 = VAR_0;
 VH *VAR_6 = ((void*)0);

 FUNC_4(VAR_3->lock);
 {
  VAR_6 = VAR_3->Virtual;

  if (VAR_3->Online == 0 || VAR_6 == ((void*)0))
  {
   VAR_5 = VAR_1;
  }
  else
  {
   FUNC_6(VAR_6);
   {
    if (VAR_6->Active == 0)
    {
     VAR_5 = VAR_1;
    }
    else
    {
     FUNC_0(VAR_4);
     FUNC_13(VAR_4, sizeof(RPC_ENUM_NAT));

     FUNC_5(VAR_6->NatTable);
     {
      UINT VAR_7;
      UINT VAR_8 = FUNC_3(VAR_6->NatTable);
      UINT VAR_9 = 0;
      NATIVE_NAT *VAR_10 = ((void*)0);

      if (FUNC_7(VAR_6) && (VAR_6->NativeNat != ((void*)0)))
      {
       VAR_10 = VAR_6->NativeNat;

       VAR_9 = FUNC_3(VAR_10->NatTableForSend->AllList);
      }

      VAR_4->NumItem = VAR_8 + VAR_9;
      VAR_4->Items = FUNC_14(sizeof(RPC_ENUM_NAT_ITEM) * VAR_4->NumItem);


      for (VAR_7 = 0;VAR_7 < VAR_8;VAR_7++)
      {
       NAT_ENTRY *VAR_11 = FUNC_2(VAR_6->NatTable, VAR_7);
       RPC_ENUM_NAT_ITEM *VAR_12 = &VAR_4->Items[VAR_7];

       VAR_12->Id = VAR_11->Id;
       VAR_12->Protocol = VAR_11->Protocol;
       VAR_12->SrcIp = VAR_11->SrcIp;
       VAR_12->DestIp = VAR_11->DestIp;
       VAR_12->SrcPort = VAR_11->SrcPort;
       VAR_12->DestPort = VAR_11->DestPort;

       VAR_12->CreatedTime = FUNC_9(VAR_11->CreatedTime);
       VAR_12->LastCommTime = FUNC_9(VAR_11->LastCommTime);

       FUNC_1(VAR_12->SrcHost, sizeof(VAR_12->SrcHost), VAR_12->SrcIp);
       FUNC_1(VAR_12->DestHost, sizeof(VAR_12->DestHost), VAR_12->DestIp);

       if (VAR_11->Sock != ((void*)0))
       {
        VAR_12->SendSize = VAR_11->Sock->SendSize;
        VAR_12->RecvSize = VAR_11->Sock->RecvSize;

        if (VAR_11->Sock->Type == VAR_2)
        {
         FUNC_8(VAR_12->DestHost, sizeof(VAR_12->DestHost), VAR_11->Sock->RemoteHostname);
        }
       }

       VAR_12->TcpStatus = VAR_11->TcpStatus;
      }


      if (VAR_10 != ((void*)0))
      {
       for (VAR_7 = 0;VAR_7 < VAR_9;VAR_7++)
       {
        NATIVE_NAT_ENTRY *VAR_13 = FUNC_2(VAR_10->NatTableForSend->AllList, VAR_7);
        RPC_ENUM_NAT_ITEM *VAR_14 = &VAR_4->Items[VAR_8 + VAR_7];

        VAR_14->Id = VAR_13->Id;
        VAR_14->Protocol = VAR_13->Protocol;
        VAR_14->SrcIp = VAR_13->SrcIp;
        VAR_14->DestIp = VAR_13->DestIp;
        VAR_14->SrcPort = VAR_13->SrcPort;
        VAR_14->DestPort = VAR_13->DestPort;
        VAR_14->CreatedTime = FUNC_9(VAR_13->CreatedTime);
        VAR_14->LastCommTime = FUNC_9(VAR_13->LastCommTime);

        FUNC_1(VAR_14->SrcHost, sizeof(VAR_14->SrcHost), VAR_14->SrcIp);
        FUNC_1(VAR_14->DestHost, sizeof(VAR_14->DestHost), VAR_14->DestIp);

        VAR_14->SendSize = VAR_13->TotalSent;
        VAR_14->RecvSize = VAR_13->TotalRecv;

        VAR_14->TcpStatus = VAR_13->Status;
       }
      }
     }
     FUNC_11(VAR_6->NatTable);
    }
   }
   FUNC_12(VAR_6);
  }
 }
 FUNC_10(VAR_3->lock);

 return VAR_5;
}
