
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_58__ TYPE_9__ ;
typedef struct TYPE_57__ TYPE_8__ ;
typedef struct TYPE_56__ TYPE_7__ ;
typedef struct TYPE_55__ TYPE_6__ ;
typedef struct TYPE_54__ TYPE_5__ ;
typedef struct TYPE_53__ TYPE_4__ ;
typedef struct TYPE_52__ TYPE_3__ ;
typedef struct TYPE_51__ TYPE_2__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_19__ ;
typedef struct TYPE_48__ TYPE_18__ ;
typedef struct TYPE_47__ TYPE_17__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


typedef int yahoo_ip ;
typedef int USHORT ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_58__ {TYPE_1__* HubOption; scalar_t__ UseNat; } ;
struct TYPE_57__ {int * SendTube; int * RecvTube; } ;
struct TYPE_56__ {scalar_t__ LeaseTime; int ServerAddress; } ;
struct TYPE_55__ {TYPE_5__* TCPHeader; TYPE_2__* UDPHeader; } ;
struct TYPE_54__ {scalar_t__ SrcPort; scalar_t__ DstPort; } ;
struct TYPE_53__ {TYPE_3__* IPv4Header; } ;
struct TYPE_52__ {scalar_t__ SrcIP; scalar_t__ DstIP; } ;
struct TYPE_51__ {scalar_t__ SrcPort; scalar_t__ DstPort; } ;
struct TYPE_50__ {scalar_t__ DisableIpRawModeSecureNAT; scalar_t__ DisableKernelModeSecureNAT; } ;
struct TYPE_49__ {scalar_t__ num_item; } ;
struct TYPE_48__ {int Size; int Buf; } ;
struct TYPE_47__ {int Size; int Buf; } ;
struct TYPE_46__ {int ref; } ;
struct TYPE_45__ {scalar_t__ TransactionId; } ;
struct TYPE_44__ {TYPE_8__* Sock; int ClientIPAddress; } ;
struct TYPE_43__ {int Halt; int IsRawIpMode; int CancelLock; TYPE_16__* Cancel; TYPE_19__* RecvQueue; TYPE_19__* SendQueue; TYPE_9__* v; int * HaltTube; } ;
struct TYPE_42__ {int IsIpRawMode; int DnsServerIP; TYPE_7__ CurrentDhcpOptionList; TYPE_14__* Ipc; } ;
struct TYPE_41__ {scalar_t__ TypeL3; scalar_t__ TypeL4; int PayloadSize; TYPE_6__ L4; TYPE_4__ L3; scalar_t__ Payload; } ;
struct TYPE_40__ {int Flag; int SeqNumber; } ;
typedef int TUBE ;
typedef TYPE_10__ TCP_HEADER ;
typedef TYPE_11__ PKT ;
typedef TYPE_12__ NATIVE_STACK ;
typedef TYPE_13__ NATIVE_NAT ;
typedef TYPE_14__ IPC ;
typedef int IP ;
typedef int INTERRUPT_MANAGER ;
typedef TYPE_15__ DNSV4_HEADER ;
typedef TYPE_16__ CANCEL ;
typedef TYPE_17__ BUF ;
typedef TYPE_18__ BLOCK ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_18__*) ;
 int FUNC_8 (TYPE_17__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_11__*) ;
 TYPE_18__* FUNC_11 (TYPE_19__*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_14__*,int *) ;
 int FUNC_14 (TYPE_14__*) ;
 int FUNC_15 (TYPE_14__*) ;
 TYPE_18__* FUNC_16 (TYPE_14__*) ;
 int FUNC_17 (TYPE_14__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_19 (TYPE_19__*,TYPE_11__*) ;
 int FUNC_20 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_21 (int ) ;
 int FUNC_22 (TYPE_19__*) ;
 int FUNC_23 (scalar_t__,int ) ;
 scalar_t__ FUNC_24 (scalar_t__,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_25 () ;
 int * FUNC_26 () ;
 int FUNC_27 (int ,int) ;
 TYPE_17__* FUNC_28 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_29 (int ,scalar_t__,int,scalar_t__,int,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_30 (int ,scalar_t__,int,scalar_t__,int) ;
 int FUNC_31 (int ) ;
 scalar_t__ FUNC_32 (scalar_t__,int,int *) ;
 TYPE_11__* FUNC_33 (int ,int ) ;
 int FUNC_34 () ;
 scalar_t__ FUNC_35 () ;
 int FUNC_36 (TYPE_16__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_37 () ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (TYPE_19__*) ;
 int FUNC_41 (int **,scalar_t__,scalar_t__) ;
 int FUNC_42 (int *,int) ;

void FUNC_43(NATIVE_NAT *VAR_14, NATIVE_STACK *VAR_15)
{
 IPC *VAR_16;
 TUBE *VAR_17[3];
 UINT VAR_18 = 0;
 UINT64 VAR_19 = 0;
 INTERRUPT_MANAGER *VAR_20;
 USHORT VAR_21 = 0;
 USHORT VAR_22 = 0;
 USHORT VAR_23 = 0;
 UINT VAR_24 = 0;
 IP VAR_25;
 bool VAR_26 = 0;
 UINT64 VAR_27 = 0;
 UINT VAR_28;
 UINT64 VAR_29 = 0;

 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
 {
  return;
 }

 VAR_28 = VAR_15->CurrentDhcpOptionList.LeaseTime;

 if (VAR_28 == 0)
 {
  VAR_28 = VAR_0;
 }

 VAR_28 = FUNC_23(VAR_28, VAR_1) / 2;

 VAR_20 = FUNC_26();

 VAR_16 = VAR_15->Ipc;

 VAR_17[VAR_18++] = VAR_16->Sock->RecvTube;

 VAR_17[VAR_18++] = VAR_14->HaltTube;

 FUNC_42(&VAR_25, sizeof(VAR_25));

 VAR_19 = FUNC_37() + (UINT64)VAR_9;
 FUNC_0(VAR_20, VAR_19);

 VAR_27 = FUNC_37();
 VAR_29 = FUNC_37() + (UINT64)VAR_28 * 1000;
 FUNC_0(VAR_20, VAR_29);

 while (VAR_14->Halt == 0 && VAR_14->v->UseNat)
 {
  UINT64 VAR_30 = FUNC_37();
  bool VAR_31 = 0;
  bool VAR_32 = 0;
  UINT VAR_33;

  if (VAR_14->v->HubOption != ((void*)0))
  {
   if (VAR_14->IsRawIpMode == 0 && VAR_14->v->HubOption->DisableKernelModeSecureNAT)
   {
    break;
   }
   if (VAR_14->IsRawIpMode && VAR_14->v->HubOption->DisableIpRawModeSecureNAT)
   {
    break;
   }
  }

  FUNC_14(VAR_16);
  VAR_31 = 0;

LABEL_RESTART:
  VAR_32 = 0;

  if (VAR_19 == 0 || VAR_19 <= VAR_30)
  {
   BUF *VAR_34;

   VAR_21 = FUNC_31(VAR_15->IsIpRawMode);
   VAR_22 = FUNC_34();


   VAR_34 = FUNC_28(FUNC_30(FUNC_27(VAR_7, VAR_22),
    FUNC_18(&VAR_16->ClientIPAddress), VAR_21, FUNC_18(&VAR_15->DnsServerIP), 53),
    FUNC_18(&VAR_16->ClientIPAddress), FUNC_18(&VAR_15->DnsServerIP), VAR_3, 0);

   FUNC_17(VAR_16, VAR_34->Buf, VAR_34->Size);

   VAR_26 = 1;

   FUNC_8(VAR_34);

   VAR_19 = VAR_30 + (UINT64)VAR_9;
   FUNC_0(VAR_20, VAR_19);
  }

  if (VAR_29 == 0 || VAR_29 <= VAR_30)
  {
   IP VAR_35;

   FUNC_38(&VAR_35, VAR_15->CurrentDhcpOptionList.ServerAddress);

   FUNC_13(VAR_16, &VAR_35);

   VAR_29 = VAR_30 + (UINT64)VAR_28 * 1000;
   FUNC_0(VAR_20, VAR_29);
  }


  FUNC_22(VAR_14->SendQueue);
  {
   while (1)
   {
    BLOCK *VAR_36 = FUNC_11(VAR_14->SendQueue);

    if (VAR_36 == ((void*)0))
    {
     break;
    }

    FUNC_17(VAR_16, VAR_36->Buf, VAR_36->Size);

    VAR_32 = 1;

    FUNC_7(VAR_36);
   }
  }
  FUNC_40(VAR_14->SendQueue);


  FUNC_15(VAR_16);

  FUNC_22(VAR_14->RecvQueue);
  {
   while (1)
   {

    BLOCK *VAR_37 = FUNC_16(VAR_16);
    PKT *VAR_38;

    if (VAR_37 == ((void*)0))
    {

     break;
    }


    VAR_38 = FUNC_33(VAR_37->Buf, VAR_37->Size);

    FUNC_7(VAR_37);

    if (VAR_38 != ((void*)0))
    {
     bool VAR_39 = 0;


     if (VAR_26)
     {
      if (VAR_38->TypeL3 == VAR_4 && VAR_38->TypeL4 == VAR_6 &&
       VAR_38->L3.IPv4Header->SrcIP == FUNC_18(&VAR_15->DnsServerIP) &&
       VAR_38->L3.IPv4Header->DstIP == FUNC_18(&VAR_16->ClientIPAddress) &&
       VAR_38->L4.UDPHeader->SrcPort == FUNC_5(53) && VAR_38->L4.UDPHeader->DstPort == FUNC_5(VAR_21))
      {
       DNSV4_HEADER *VAR_40 = (DNSV4_HEADER *)VAR_38->Payload;
       if (VAR_38->PayloadSize >= sizeof(DNSV4_HEADER))
       {
        if (VAR_40->TransactionId == FUNC_5(VAR_22))
        {
         IP VAR_41;

         if (FUNC_32(VAR_38->Payload, VAR_38->PayloadSize, &VAR_41))
         {
          BUF *VAR_42;

          FUNC_3(&VAR_25, &VAR_41, sizeof(IP));




          VAR_39 = 1;

          VAR_23 = FUNC_31(VAR_15->IsIpRawMode);


          VAR_24 = FUNC_35();
          VAR_42 = FUNC_28(FUNC_29(FUNC_25(), FUNC_18(&VAR_16->ClientIPAddress), VAR_23,
           FUNC_18(&VAR_25), 80, VAR_24, 0, VAR_13, 8192, 1414),
           FUNC_18(&VAR_16->ClientIPAddress), FUNC_18(&VAR_25), VAR_2, 0);

          FUNC_17(VAR_16, VAR_42->Buf, VAR_42->Size);

          FUNC_8(VAR_42);

          VAR_26 = 0;
         }
        }
       }
      }
     }

     if (VAR_38->TypeL3 == VAR_4 && VAR_38->TypeL4 == VAR_5 &&
      VAR_38->L3.IPv4Header->SrcIP == FUNC_18(&VAR_25) &&
      VAR_38->L3.IPv4Header->DstIP == FUNC_18(&VAR_16->ClientIPAddress) &&
      VAR_38->L4.TCPHeader->SrcPort == FUNC_5(80) && VAR_38->L4.TCPHeader->DstPort == FUNC_5(VAR_23))
     {
      TCP_HEADER *VAR_43 = (TCP_HEADER *)VAR_38->L4.TCPHeader;
      if ((VAR_43->Flag & VAR_13) && (VAR_43->Flag & VAR_11))
      {

       BUF *VAR_44;
       UINT VAR_45 = FUNC_6(VAR_43->SeqNumber) + 1;

       VAR_39 = 1;


       VAR_44 = FUNC_28(FUNC_29(FUNC_25(), FUNC_18(&VAR_16->ClientIPAddress), VAR_23,
        FUNC_18(&VAR_25), 80, VAR_24 + 1, VAR_45, VAR_12 | VAR_11, 8192, 0),
        FUNC_18(&VAR_16->ClientIPAddress), FUNC_18(&VAR_25), VAR_2, 0);

       FUNC_17(VAR_16, VAR_44->Buf, VAR_44->Size);

       FUNC_8(VAR_44);

       VAR_27 = VAR_30;
      }
     }

     if (VAR_14->RecvQueue->num_item > VAR_8)
     {
      VAR_39 = 1;
     }

     if (VAR_39 == 0)
     {

      FUNC_19(VAR_14->RecvQueue, VAR_38);
      VAR_31 = 1;
      VAR_32 = 1;
     }
     else
     {

      FUNC_10(VAR_38);
     }
    }
   }
  }
  FUNC_40(VAR_14->RecvQueue);

  if (VAR_32)
  {
   goto LABEL_RESTART;
  }

  if (VAR_31)
  {
   CANCEL *VAR_46 = ((void*)0);

   FUNC_21(VAR_14->CancelLock);
   {
    VAR_46 = VAR_14->Cancel;

    FUNC_1(VAR_46->ref);
   }
   FUNC_39(VAR_14->CancelLock);

   FUNC_2(VAR_46);

   FUNC_36(VAR_46);
  }

  if (FUNC_20(VAR_16->Sock->RecvTube) == 0 || FUNC_20(VAR_16->Sock->SendTube) == 0)
  {

   break;
  }

  if ((VAR_27 + (UINT64)VAR_10) < VAR_30)
  {

   FUNC_4("NN_POLL_CONNECTIVITY_TIMEOUT\n");
   break;
  }

  VAR_33 = FUNC_12(VAR_20);
  VAR_33 = FUNC_24(VAR_33, 1234);

  if (VAR_33 != 0)
  {
   FUNC_41(VAR_17, VAR_18, VAR_33);
  }
 }

 FUNC_9(VAR_20);
}
