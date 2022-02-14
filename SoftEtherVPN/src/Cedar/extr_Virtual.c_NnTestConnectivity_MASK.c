
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int yahoo_ip ;
typedef int USHORT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_36__ {TYPE_4__* TCPHeader; TYPE_1__* UDPHeader; } ;
struct TYPE_34__ {TYPE_2__* IPv4Header; } ;
struct TYPE_40__ {scalar_t__ TypeL3; scalar_t__ TypeL4; int PayloadSize; TYPE_5__ L4; TYPE_3__ L3; scalar_t__ Payload; } ;
struct TYPE_39__ {int Flag; int SeqNumber; } ;
struct TYPE_38__ {int * RecvTube; int * SendTube; } ;
struct TYPE_37__ {int MyPhysicalIPForce; } ;
struct TYPE_35__ {scalar_t__ SrcPort; scalar_t__ DstPort; } ;
struct TYPE_33__ {scalar_t__ SrcIP; scalar_t__ DstIP; } ;
struct TYPE_32__ {scalar_t__ SrcPort; scalar_t__ DstPort; } ;
struct TYPE_31__ {int Size; int Buf; } ;
struct TYPE_30__ {int Size; int Buf; } ;
struct TYPE_29__ {scalar_t__ TransactionId; } ;
struct TYPE_28__ {int ClientIPAddress; TYPE_7__* Sock; } ;
struct TYPE_27__ {scalar_t__ IsIpRawMode; int DnsServerIP; TYPE_11__* Ipc; int DnsServerIP2; TYPE_6__* Eth; } ;
typedef int TUBE ;
typedef TYPE_8__ TCP_HEADER ;
typedef TYPE_9__ PKT ;
typedef TYPE_10__ NATIVE_STACK ;
typedef TYPE_11__ IPC ;
typedef int IP ;
typedef int INTERRUPT_MANAGER ;
typedef TYPE_12__ DNSV4_HEADER ;
typedef TYPE_13__ BUF ;
typedef TYPE_14__ BLOCK ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_14__*) ;
 int FUNC_6 (TYPE_13__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (TYPE_11__*) ;
 TYPE_14__* FUNC_13 (TYPE_11__*) ;
 int FUNC_14 (TYPE_11__*,int ,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_18 () ;
 int * FUNC_19 () ;
 int FUNC_20 (int ,int) ;
 TYPE_13__* FUNC_21 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_22 (int ,scalar_t__,int,scalar_t__,int,int,int,int,int,int) ;
 int FUNC_23 (int ,scalar_t__,int,scalar_t__,int) ;
 int FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (scalar_t__,int,int *) ;
 int FUNC_26 (TYPE_10__*) ;
 TYPE_9__* FUNC_27 (int ,int ) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_31 () ;
 int FUNC_32 (int *,scalar_t__) ;
 int VAR_11 ;
 int FUNC_33 (int **,int,int ) ;
 int FUNC_34 (int *,int) ;

bool FUNC_35(NATIVE_STACK *VAR_12, TUBE *VAR_13)
{
 BUF *VAR_14;
 BUF *VAR_15;
 bool VAR_16 = 0;
 USHORT VAR_17 = FUNC_28();
 UINT64 VAR_18 = 0;
 UINT64 VAR_19;
 IPC *VAR_20;
 INTERRUPT_MANAGER *VAR_21;
 TUBE *VAR_22[3];
 UINT VAR_23 = 0;
 IP VAR_24;
 IP VAR_25;
 UINT VAR_26 = 0;
 IP VAR_27;
 UINT VAR_28 = 0;

 if (VAR_12 == ((void*)0))
 {
  return 0;
 }

 VAR_28 = FUNC_24(VAR_12->IsIpRawMode);

 FUNC_1(&VAR_27, &VAR_12->DnsServerIP, sizeof(IP));


 if (VAR_12->IsIpRawMode)
 {
  if (FUNC_9(&VAR_25, 0) == 0)
  {
   FUNC_2("NnTestConnectivity: GetMyPrivateIP failed.\n");
   return 0;
  }
  else
  {
   FUNC_2("NnTestConnectivity: GetMyPrivateIP ok: %r\n", &VAR_25);

   if (VAR_12->Eth != ((void*)0))
   {
    FUNC_1(&VAR_12->Eth->MyPhysicalIPForce, &VAR_25, sizeof(IP));
   }
  }
 }

 VAR_20 = VAR_12->Ipc;
 VAR_21 = FUNC_19();

 VAR_22[VAR_23++] = VAR_20->Sock->RecvTube;
 VAR_22[VAR_23++] = VAR_20->Sock->SendTube;

 if (VAR_13 != ((void*)0))
 {
  VAR_22[VAR_23++] = VAR_13;
 }

 FUNC_34(&VAR_24, sizeof(VAR_24));


 VAR_14 = FUNC_21(FUNC_23(FUNC_20(VAR_7, VAR_17),
  FUNC_15(&VAR_20->ClientIPAddress), VAR_28, FUNC_15(&VAR_12->DnsServerIP), 53),
  FUNC_15(&VAR_20->ClientIPAddress), FUNC_15(&VAR_12->DnsServerIP), VAR_1, 0);

 VAR_15 = FUNC_21(FUNC_23(FUNC_20(VAR_7, VAR_17),
  FUNC_15(&VAR_20->ClientIPAddress), VAR_28, FUNC_15(&VAR_12->DnsServerIP), 53),
  FUNC_15(&VAR_20->ClientIPAddress), FUNC_15(&VAR_12->DnsServerIP2), VAR_1, 0);

 VAR_19 = FUNC_31() + VAR_6;
 FUNC_0(VAR_21, VAR_19);
 while (1)
 {
  UINT64 VAR_29 = FUNC_31();

  FUNC_11(VAR_12->Ipc);

  if (VAR_29 >= VAR_19)
  {
   break;
  }


  if (VAR_18 == 0 || VAR_18 <= VAR_29)
  {
   VAR_18 = VAR_29 + (UINT64)VAR_5;

   FUNC_0(VAR_21, VAR_18);

   if ((VAR_26 % 2) == 0)
   {
    FUNC_14(VAR_20, VAR_14->Buf, VAR_14->Size);
   }
   else
   {
    FUNC_14(VAR_20, VAR_15->Buf, VAR_15->Size);
   }

   VAR_26++;
  }


  FUNC_12(VAR_20);

  while (1)
  {

   BLOCK *VAR_30 = FUNC_13(VAR_20);
   PKT *VAR_31;

   if (VAR_30 == ((void*)0))
   {
    break;
   }


   VAR_31 = FUNC_27(VAR_30->Buf, VAR_30->Size);

   if (VAR_31 != ((void*)0))
   {
    if (VAR_31->TypeL3 == VAR_2 && VAR_31->TypeL4 == VAR_4 &&
     (VAR_31->L3.IPv4Header->SrcIP == FUNC_15(&VAR_12->DnsServerIP) ||
      VAR_31->L3.IPv4Header->SrcIP == FUNC_15(&VAR_12->DnsServerIP2)) &&
     VAR_31->L3.IPv4Header->DstIP == FUNC_15(&VAR_20->ClientIPAddress) &&
     VAR_31->L4.UDPHeader->SrcPort == FUNC_3(53) && VAR_31->L4.UDPHeader->DstPort == FUNC_3(VAR_28))
    {
     DNSV4_HEADER *VAR_32 = (DNSV4_HEADER *)VAR_31->Payload;
     if (VAR_31->PayloadSize >= sizeof(DNSV4_HEADER))
     {
      if (VAR_32->TransactionId == FUNC_3(VAR_17))
      {
       IP VAR_33;

       if (FUNC_25(VAR_31->Payload, VAR_31->PayloadSize, &VAR_33))
       {
        FUNC_32(&VAR_27, VAR_31->L3.IPv4Header->SrcIP);
        FUNC_2("NativeStack: Using DNS: %r\n", &VAR_27);

        FUNC_1(&VAR_24, &VAR_33, sizeof(IP));
       }
      }
     }
    }
   }

   FUNC_8(VAR_31);
   FUNC_5(VAR_30);
  }

  if ((VAR_13 != ((void*)0) && FUNC_16(VAR_13) == 0) ||
   FUNC_16(VAR_20->Sock->SendTube) == 0 || FUNC_16(VAR_20->Sock->RecvTube) == 0)
  {

   break;
  }

  if (FUNC_17(&VAR_24) == 0)
  {

   break;
  }


  FUNC_33(VAR_22, VAR_23, FUNC_10(VAR_21));
 }

 FUNC_6(VAR_14);
 FUNC_6(VAR_15);

 if (FUNC_17(&VAR_24) == 0)
 {
  BUF *VAR_34;
  UINT VAR_35 = FUNC_29();
  bool VAR_36 = 0;
  UINT VAR_37 = 0;


  VAR_19 = FUNC_31() + VAR_6;
  FUNC_0(VAR_21, VAR_19);


  VAR_34 = FUNC_21(FUNC_22(FUNC_18(), FUNC_15(&VAR_20->ClientIPAddress), VAR_28,
   FUNC_15(&VAR_24), 80, VAR_35, 0, VAR_10, 8192, 1414),
   FUNC_15(&VAR_20->ClientIPAddress), FUNC_15(&VAR_24), VAR_0, 0);

  FUNC_2("Test TCP to %r\n", &VAR_24);

  VAR_18 = 0;

  while (1)
  {
   UINT64 VAR_38 = FUNC_31();

   FUNC_11(VAR_12->Ipc);

   if (VAR_38 >= VAR_19)
   {
    break;
   }


   if (VAR_18 == 0 || VAR_18 <= VAR_38)
   {
    VAR_18 = VAR_38 + (UINT64)VAR_5;

    FUNC_0(VAR_21, VAR_18);

    FUNC_14(VAR_20, VAR_34->Buf, VAR_34->Size);
   }


   FUNC_12(VAR_20);

   while (1)
   {

    BLOCK *VAR_39 = FUNC_13(VAR_20);
    PKT *VAR_40;

    if (VAR_39 == ((void*)0))
    {
     break;
    }


    VAR_40 = FUNC_27(VAR_39->Buf, VAR_39->Size);

    if (VAR_40 != ((void*)0))
    {
     if (VAR_40->TypeL3 == VAR_2 && VAR_40->TypeL4 == VAR_3 &&
      VAR_40->L3.IPv4Header->SrcIP == FUNC_15(&VAR_24) &&
      VAR_40->L3.IPv4Header->DstIP == FUNC_15(&VAR_20->ClientIPAddress) &&
      VAR_40->L4.TCPHeader->SrcPort == FUNC_3(80) && VAR_40->L4.TCPHeader->DstPort == FUNC_3(VAR_28))
     {
      TCP_HEADER *VAR_41 = (TCP_HEADER *)VAR_40->L4.TCPHeader;
      if ((VAR_41->Flag & VAR_10) && (VAR_41->Flag & VAR_8))
      {

       VAR_36 = 1;
       VAR_37 = FUNC_4(VAR_41->SeqNumber);
      }
     }
    }

    FUNC_8(VAR_40);
    FUNC_5(VAR_39);
   }

   if ((VAR_13 != ((void*)0) && FUNC_16(VAR_13) == 0) ||
    FUNC_16(VAR_20->Sock->SendTube) == 0 || FUNC_16(VAR_20->Sock->RecvTube) == 0)
   {

    break;
   }

   if (VAR_36)
   {
    VAR_11;
    break;
   }


   FUNC_33(VAR_22, VAR_23, FUNC_10(VAR_21));
  }

  FUNC_6(VAR_34);


  if (VAR_37 != 0)
  {
   VAR_37++;
  }

  VAR_34 = FUNC_21(FUNC_22(FUNC_18(), FUNC_15(&VAR_20->ClientIPAddress), VAR_28,
   FUNC_15(&VAR_24), 80, VAR_35 + 1, VAR_37, VAR_9 | VAR_8, 8192, 0),
   FUNC_15(&VAR_20->ClientIPAddress), FUNC_15(&VAR_24), VAR_0, 0);

  FUNC_14(VAR_20, VAR_34->Buf, VAR_34->Size);

  FUNC_6(VAR_34);

  FUNC_30(100);

  if (VAR_36)
  {
   VAR_16 = 1;
  }
 }

 FUNC_7(VAR_21);

 if (VAR_16)
 {
  if (FUNC_17(&VAR_27) == 0)
  {
   FUNC_1(&VAR_12->DnsServerIP, &VAR_27, sizeof(IP));
  }

  if (VAR_12->IsIpRawMode)
  {
   if (FUNC_26(VAR_12) == 0)
   {
    FUNC_2("NsStartIpTablesTracking failed.\n");
    VAR_16 = 0;
   }
  }
 }

 return VAR_16;
}
