
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int UINT ;
struct TYPE_23__ {int DstIP; scalar_t__ SrcIP; scalar_t__ Checksum; } ;
typedef TYPE_4__ UCHAR ;
struct TYPE_26__ {int MyPhysicalIP; int YourIP; TYPE_5__* RawIcmp; TYPE_5__* RawUdp; TYPE_5__* RawTcp; int RawIpMyMacAddr; int RawIpYourMacAddr; scalar_t__ RawIp_HasError; } ;
struct TYPE_22__ {TYPE_4__* IPv4Header; } ;
struct TYPE_21__ {TYPE_18__* TCPHeader; TYPE_1__* UDPHeader; } ;
struct TYPE_25__ {int BroadcastPacket; scalar_t__ TypeL3; scalar_t__ TypeL4; int PacketSize; TYPE_4__* PacketData; TYPE_3__ L3; int IPv4PayloadSize; TYPE_2__ L4; TYPE_4__* IPv4PayloadData; int MacAddressDest; int MacAddressSrc; } ;
struct TYPE_24__ {int RawIP_HeaderIncludeFlag; } ;
struct TYPE_20__ {scalar_t__ Checksum; } ;
struct TYPE_19__ {scalar_t__ Checksum; } ;
typedef TYPE_5__ SOCK ;
typedef TYPE_6__ PKT ;
typedef TYPE_4__ IPV4_HEADER ;
typedef int IP ;
typedef TYPE_8__ ETH ;


 scalar_t__ FUNC_0 (scalar_t__,int,int ,TYPE_18__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_12 (void*,int) ;
 int FUNC_13 (TYPE_5__*,int *,int ,TYPE_4__*,int) ;
 int FUNC_14 (int *,int) ;

void FUNC_15(ETH *VAR_8, void *VAR_9, UINT VAR_10)
{
 PKT *VAR_11;
 SOCK *VAR_12 = ((void*)0);

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }
 if (VAR_10 < 14 || VAR_10 > VAR_7 || VAR_8->RawIp_HasError)
 {
  FUNC_4(VAR_9);
  return;
 }

 VAR_11 = FUNC_12(VAR_9, VAR_10);
 if (VAR_11 == ((void*)0))
 {
  FUNC_4(VAR_9);
  return;
 }

 if (VAR_11->BroadcastPacket || FUNC_1(VAR_11->MacAddressDest, VAR_8->RawIpMyMacAddr, 6) == 0)
 {
  if (FUNC_9(VAR_11->MacAddressSrc))
  {
   FUNC_2(VAR_8->RawIpYourMacAddr, VAR_11->MacAddressSrc, 6);
  }
 }

 if (FUNC_10(VAR_8->RawIpYourMacAddr, 6) || FUNC_9(VAR_11->MacAddressSrc) == 0 ||
  (VAR_11->BroadcastPacket == 0 && FUNC_1(VAR_11->MacAddressDest, VAR_8->RawIpMyMacAddr, 6) != 0))
 {
  FUNC_4(VAR_9);
  FUNC_5(VAR_11);
  return;
 }


 if (VAR_11->TypeL3 == VAR_2)
 {
  if (VAR_11->TypeL4 == VAR_5)
  {
   if (FUNC_11(&VAR_8->MyPhysicalIP) == 0)
   {
    VAR_12 = VAR_8->RawTcp;
   }
  }
  else if (VAR_11->TypeL4 == VAR_6)
  {
   if (FUNC_3(VAR_8, VAR_11) == 0)
   {
    VAR_12 = VAR_8->RawUdp;
   }
  }
  else if (VAR_11->TypeL4 == VAR_4)
  {
   if (FUNC_11(&VAR_8->MyPhysicalIP) == 0)
   {
    VAR_12 = VAR_8->RawIcmp;
   }
  }
  else if (VAR_11->TypeL4 == VAR_3)
  {
   if (FUNC_11(&VAR_8->MyPhysicalIP) == 0)
   {
    VAR_12 = VAR_8->RawIcmp;
   }
  }
 }
 else if (VAR_11->TypeL3 == VAR_1)
 {
  FUNC_3(VAR_8, VAR_11);
 }

 if (VAR_12 != ((void*)0) && VAR_11->L3.IPv4Header->DstIP != 0xffffffff && VAR_11->BroadcastPacket == 0 &&
  VAR_11->L3.IPv4Header->SrcIP == FUNC_6(&VAR_8->YourIP))
 {
  UCHAR *VAR_13 = VAR_11->IPv4PayloadData;
  UCHAR *VAR_14 = VAR_11->PacketData;
  UINT VAR_15 = (UINT)(VAR_13 - VAR_14);

  if (VAR_11->PacketSize > VAR_15)
  {
   IP VAR_16;
   UINT VAR_17 = VAR_11->PacketSize - VAR_15;


   if (VAR_11->TypeL4 == VAR_6)
   {
    VAR_11->L4.UDPHeader->Checksum = 0;
   }
   else if (VAR_11->TypeL4 == VAR_5)
   {
    VAR_11->L4.TCPHeader->Checksum = 0;
    VAR_11->L4.TCPHeader->Checksum = FUNC_0(FUNC_6(&VAR_8->MyPhysicalIP),
     VAR_11->L3.IPv4Header->DstIP, VAR_0,
     VAR_11->L4.TCPHeader, VAR_11->IPv4PayloadSize, 0);
   }

   FUNC_14(&VAR_16, VAR_11->L3.IPv4Header->DstIP);

   if (VAR_12->RawIP_HeaderIncludeFlag == 0)
   {
    FUNC_13(VAR_12, &VAR_16, 0, VAR_13, VAR_17);
   }
   else
   {
    IPV4_HEADER *VAR_18 = VAR_11->L3.IPv4Header;

    VAR_18->SrcIP = FUNC_6(&VAR_8->MyPhysicalIP);
    VAR_18->Checksum = 0;
    VAR_18->Checksum = FUNC_8(VAR_18, FUNC_7(VAR_18) * 4);

    FUNC_13(VAR_12, &VAR_16, 0, VAR_18, ((UCHAR *)VAR_11->PacketData - (UCHAR *)VAR_18) + VAR_11->PacketSize);
   }
  }
 }

 FUNC_5(VAR_11);
 FUNC_4(VAR_9);
}
