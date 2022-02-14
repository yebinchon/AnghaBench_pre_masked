
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_25__ {int Size; int OptionSize; TYPE_8__* Header; TYPE_11__* ParsedOptionList; int * OptionData; int OpCode; int * OptionList; void* DestPort; void* SrcPort; int DestIP; int SrcIP; int * Data; } ;
struct TYPE_24__ {scalar_t__ ServerIP; int YourIP; } ;
struct TYPE_23__ {int Size; scalar_t__ Data; } ;
struct TYPE_21__ {TYPE_4__* UDPHeader; } ;
struct TYPE_19__ {TYPE_2__* IPv4Header; } ;
struct TYPE_17__ {scalar_t__ PointerL7; } ;
struct TYPE_22__ {scalar_t__ TypeL3; scalar_t__ TypeL4; scalar_t__ TypeL7; int PacketSize; TYPE_5__ L4; TYPE_3__ L3; TYPE_1__ L7; scalar_t__ PacketData; } ;
struct TYPE_20__ {int DstPort; int SrcPort; } ;
struct TYPE_18__ {int DstIP; int SrcIP; } ;
struct TYPE_16__ {scalar_t__ ServerAddress; int ClientAddress; } ;
typedef TYPE_6__ PKT ;
typedef TYPE_7__ DHCP_OPTION ;
typedef TYPE_8__ DHCPV4_HEADER ;
typedef TYPE_9__ DHCPV4_DATA ;


 int * FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*) ;
 TYPE_7__* FUNC_5 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_11__* FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 TYPE_9__* FUNC_9 (int) ;

DHCPV4_DATA *FUNC_10(PKT *VAR_5)
{
 DHCPV4_DATA *VAR_6;
 UCHAR *VAR_7;
 UINT VAR_8;
 UINT VAR_9 = FUNC_3(VAR_1);
 bool VAR_10 = 0;
 DHCP_OPTION *VAR_11;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_5->TypeL3 != VAR_2 || VAR_5->TypeL4 != VAR_3 || VAR_5->TypeL7 != VAR_4)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_9(sizeof(DHCPV4_DATA));
 VAR_6->Size = (UINT)(VAR_5->PacketSize - (((UCHAR *)VAR_5->L7.PointerL7) - ((UCHAR *)VAR_5->PacketData)));
 VAR_6->Data = FUNC_0(VAR_5->L7.PointerL7, VAR_6->Size);

 if (VAR_6->Size < sizeof(DHCPV4_HEADER))
 {
  goto LABEL_ERROR;
 }


 VAR_6->Header = (DHCPV4_HEADER *)VAR_6->Data;

 VAR_7 = VAR_6->Data;
 VAR_8 = VAR_6->Size;


 VAR_10 = 0;
 while (VAR_8 >= 5)
 {
  if (FUNC_1(VAR_7, &VAR_9, 4) == 0)
  {

   VAR_7 += 4;
   VAR_8 -= 4;
   VAR_10 = 1;
   break;
  }

  VAR_7++;
  VAR_8--;
 }

 if (VAR_10 == 0)
 {

  goto LABEL_ERROR;
 }


 VAR_6->OptionData = VAR_7;
 VAR_6->OptionSize = VAR_8;

 VAR_6->OptionList = FUNC_7(VAR_7, VAR_8);
 if (VAR_6->OptionList == ((void*)0))
 {

  goto LABEL_ERROR;
 }

 FUNC_8(&VAR_6->SrcIP, VAR_5->L3.IPv4Header->SrcIP);
 FUNC_8(&VAR_6->DestIP, VAR_5->L3.IPv4Header->DstIP);

 VAR_6->SrcPort = FUNC_2(VAR_5->L4.UDPHeader->SrcPort);
 VAR_6->DestPort = FUNC_2(VAR_5->L4.UDPHeader->DstPort);

 VAR_11 = FUNC_5(VAR_6->OptionList, VAR_0);
 if (VAR_11 == ((void*)0) || VAR_11->Size != 1)
 {
  goto LABEL_ERROR;
 }

 VAR_6->OpCode = *((UCHAR *)VAR_11->Data);

 VAR_6->ParsedOptionList = FUNC_6(VAR_6->OptionData, VAR_6->OptionSize);

 if (VAR_6->ParsedOptionList == ((void*)0))
 {
  goto LABEL_ERROR;
 }

 if (VAR_6->ParsedOptionList->ServerAddress == 0)
 {
  VAR_6->ParsedOptionList->ServerAddress = VAR_6->Header->ServerIP;
 }

 VAR_6->ParsedOptionList->ClientAddress = VAR_6->Header->YourIP;

 return VAR_6;

LABEL_ERROR:
 FUNC_4(VAR_6);
 return ((void*)0);
}
