
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_24__ {int OpCode; } ;
struct TYPE_21__ {TYPE_5__* TCPHeader; } ;
struct TYPE_20__ {TYPE_2__* BpduHeader; } ;
struct TYPE_23__ {int* PacketData; scalar_t__ TypeL3; scalar_t__ TypeL4; int PayloadSize; scalar_t__ TypeL7; int DhcpOpCode; int HttpLog; TYPE_4__ L4; TYPE_3__ L3; int MacAddressSrc; TYPE_1__* MacHeader; int MacAddressDest; scalar_t__ PacketSize; scalar_t__ VlanTypeID; } ;
struct TYPE_22__ {int DstPort; int Flag; } ;
struct TYPE_19__ {int BridgeMacAddress; } ;
struct TYPE_18__ {int DestAddress; int SrcAddress; } ;
typedef TYPE_5__ TCP_HEADER ;
typedef TYPE_6__ PKT ;
typedef TYPE_7__ DHCPV4_DATA ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_7__* FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int*,scalar_t__,int) ;
 int FUNC_8 (int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* FUNC_9 (int) ;

PKT *FUNC_10(UCHAR *VAR_10, UINT VAR_11, bool VAR_12, UINT VAR_13, bool VAR_14, bool VAR_15, bool VAR_16)
{
 PKT *VAR_17;
 USHORT VAR_18;

 if (VAR_10 == ((void*)0) || VAR_11 == 0)
 {
  return ((void*)0);
 }

 if (VAR_13 == 0)
 {
  VAR_13 = VAR_6;
 }

 VAR_18 = FUNC_1((USHORT)VAR_13);

 VAR_17 = FUNC_9(sizeof(PKT));

 VAR_17->VlanTypeID = VAR_13;


 if (VAR_11 >= 24)
 {
  if (VAR_10[12] == 0x08 && VAR_10[13] == 0x00)
  {
   USHORT VAR_19 = FUNC_8(&VAR_10[16]);
   UINT VAR_20;

   if (VAR_19 >= 1)
   {
    VAR_20 = (UINT)VAR_19 + 14;

    if (VAR_11 > VAR_20)
    {
     VAR_11 = VAR_20;
    }
   }
  }
  else if (VAR_10[12] == 0x86 && VAR_10[13] == 0xdd)
  {
   USHORT VAR_21 = FUNC_8(&VAR_10[18]);
   UINT VAR_22;

   if (VAR_21 >= 1)
   {
    VAR_22 = (UINT)VAR_21 + 14 + 40;

    if (VAR_11 > VAR_22)
    {
     VAR_11 = VAR_22;
    }
   }
  }
  else if (VAR_10[12] == ((UCHAR *)&VAR_18)[0] && VAR_10[13] == ((UCHAR *)&VAR_18)[1])
  {
   if (VAR_10[16] == 0x08 && VAR_10[17] == 0x00)
   {
    USHORT VAR_23 = FUNC_8(&VAR_10[20]);
    UINT VAR_24;

    if (VAR_23 >= 1)
    {
     VAR_24 = (UINT)VAR_23 + 14 + 4;

     if (VAR_11 > VAR_24)
     {
      VAR_11 = VAR_24;
     }
    }
   }
   else if (VAR_10[16] == 0x86 && VAR_10[17] == 0xdd)
   {
    USHORT VAR_25 = FUNC_8(&VAR_10[22]);
    UINT VAR_26;

    if (VAR_25 >= 1)
    {
     VAR_26 = (UINT)VAR_25 + 14 + 40 + 4;

     if (VAR_11 > VAR_26)
     {
      VAR_11 = VAR_26;
     }
    }
   }
  }
 }


 if (FUNC_7(VAR_17, VAR_10, VAR_11, VAR_12) == 0)
 {

  FUNC_3(VAR_17);
  return ((void*)0);
 }

 VAR_17->PacketData = VAR_10;
 VAR_17->PacketSize = VAR_11;

 VAR_17->MacAddressSrc = VAR_17->MacHeader->SrcAddress;
 VAR_17->MacAddressDest = VAR_17->MacHeader->DestAddress;

 if (VAR_14)
 {
  if (VAR_17->TypeL3 == VAR_0)
  {
   if (VAR_17->L3.BpduHeader != ((void*)0))
   {
    VAR_17->MacAddressSrc = VAR_17->L3.BpduHeader->BridgeMacAddress;
   }
  }
 }

 if (VAR_15 == 0)
 {
  USHORT VAR_27 = FUNC_1(80);
  USHORT VAR_28 = FUNC_1(8080);
  USHORT VAR_29 = FUNC_1(443);
  USHORT VAR_30 = FUNC_1(3128);


  if ((VAR_17->TypeL3 == VAR_1 || VAR_17->TypeL3 == VAR_2) && VAR_17->TypeL4 == VAR_3)
  {
   TCP_HEADER *VAR_31 = VAR_17->L4.TCPHeader;
   if (VAR_31 != ((void*)0) && (VAR_31->DstPort == VAR_27 || VAR_31->DstPort == VAR_28 || VAR_31->DstPort == VAR_30) &&
    (!((VAR_31->Flag & VAR_9) || (VAR_31->Flag & VAR_8) || (VAR_31->Flag & VAR_7))))
   {
    if (VAR_17->PayloadSize >= 1)
    {
     VAR_17->HttpLog = FUNC_5(VAR_17);
    }
   }
   if (VAR_31 != ((void*)0) && VAR_31->DstPort == VAR_29 &&
    (!((VAR_31->Flag & VAR_9) || (VAR_31->Flag & VAR_8) || (VAR_31->Flag & VAR_7))))
   {
    if (VAR_17->PayloadSize >= 1)
    {
     VAR_17->HttpLog = FUNC_6(VAR_17);
    }
   }
  }
 }

 if (VAR_17->TypeL3 == VAR_1 && VAR_17->TypeL4 == VAR_4 && VAR_17->TypeL7 == VAR_5)
 {

  DHCPV4_DATA *VAR_32 = FUNC_4(VAR_17);

  if (VAR_32 != ((void*)0))
  {
   VAR_17->DhcpOpCode = VAR_32->OpCode;

   FUNC_2(VAR_32);
  }
 }

 if (VAR_16)
 {

  FUNC_0(VAR_17);
 }


 return VAR_17;
}
