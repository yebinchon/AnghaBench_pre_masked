
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int icmp_info ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_13__ {scalar_t__ HeaderPointer; int * NeighborAdvertisementHeader; int * NeighborSoliciationHeader; int * RouterAdvertisementHeader; int * RouterSoliciationHeader; } ;
struct TYPE_12__ {void* SeqNo; void* Identifier; } ;
struct TYPE_17__ {int Type; int DataSize; int EchoDataSize; TYPE_3__ Headers; int OptionList; int * Data; int * EchoData; TYPE_2__ EchoHeader; int Code; } ;
struct TYPE_16__ {int SeqNo; int Identifier; } ;
struct TYPE_15__ {int Type; int Code; } ;
struct TYPE_11__ {TYPE_5__* ICMPHeader; } ;
struct TYPE_14__ {int ICMPv6HeaderPacketInfo; int TypeL4; TYPE_1__ L4; } ;
typedef TYPE_4__ PKT ;
typedef TYPE_5__ ICMP_HEADER ;
typedef TYPE_6__ ICMP_ECHO ;
typedef int ICMPV6_ROUTER_SOLICIATION_HEADER ;
typedef int ICMPV6_ROUTER_ADVERTISEMENT_HEADER ;
typedef int ICMPV6_NEIGHBOR_SOLICIATION_HEADER ;
typedef int ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER ;
typedef TYPE_7__ ICMPV6_HEADER_INFO ;


 int FUNC_0 (int *,TYPE_7__*,int) ;
 void* FUNC_1 (int ) ;






 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_7__*,int) ;

bool FUNC_4(PKT *VAR_1, UCHAR *VAR_2, UINT VAR_3)
{
 ICMPV6_HEADER_INFO VAR_4;
 ICMP_HEADER *VAR_5;
 ICMP_ECHO *VAR_6;
 UINT VAR_7;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(&VAR_4, sizeof(VAR_4));

 if (VAR_3 < sizeof(ICMP_HEADER))
 {
  return 0;
 }

 VAR_5 = (ICMP_HEADER *)VAR_2;
 VAR_1->L4.ICMPHeader = VAR_5;

 VAR_7 = VAR_3 - sizeof(ICMP_HEADER);

 VAR_4.Type = VAR_5->Type;
 VAR_4.Code = VAR_5->Code;
 VAR_4.Data = ((UCHAR *)VAR_2) + sizeof(ICMP_HEADER);
 VAR_4.DataSize = VAR_7;

 switch (VAR_4.Type)
 {
 case 133:
 case 132:

  if (VAR_4.DataSize < sizeof(ICMP_ECHO))
  {
   return 0;
  }

  VAR_6 = (ICMP_ECHO *)VAR_4.Data;

  VAR_4.EchoHeader.Identifier = FUNC_1(VAR_6->Identifier);
  VAR_4.EchoHeader.SeqNo = FUNC_1(VAR_6->SeqNo);
  VAR_4.EchoData = (UCHAR *)VAR_6 + sizeof(ICMP_ECHO);
  VAR_4.EchoDataSize = VAR_4.DataSize - sizeof(ICMP_ECHO);

  break;

 case 128:

  if (VAR_4.DataSize < sizeof(ICMPV6_ROUTER_SOLICIATION_HEADER))
  {
   return 0;
  }

  VAR_4.Headers.RouterSoliciationHeader =
   (ICMPV6_ROUTER_SOLICIATION_HEADER *)(((UCHAR *)VAR_4.Data));

  if (FUNC_2(&VAR_4.OptionList, ((UCHAR *)VAR_4.Headers.HeaderPointer) + sizeof(ICMPV6_ROUTER_SOLICIATION_HEADER),
   VAR_4.DataSize - sizeof(ICMPV6_ROUTER_SOLICIATION_HEADER)) == 0)
  {
   return 0;
  }

  break;

 case 129:

  if (VAR_4.DataSize < sizeof(ICMPV6_ROUTER_ADVERTISEMENT_HEADER))
  {
   return 0;
  }

  VAR_4.Headers.RouterAdvertisementHeader =
   (ICMPV6_ROUTER_ADVERTISEMENT_HEADER *)(((UCHAR *)VAR_4.Data));

  if (FUNC_2(&VAR_4.OptionList, ((UCHAR *)VAR_4.Headers.HeaderPointer) + sizeof(ICMPV6_ROUTER_ADVERTISEMENT_HEADER),
   VAR_4.DataSize - sizeof(ICMPV6_ROUTER_ADVERTISEMENT_HEADER)) == 0)
  {
   return 0;
  }

  break;

 case 130:

  if (VAR_4.DataSize < sizeof(ICMPV6_NEIGHBOR_SOLICIATION_HEADER))
  {
   return 0;
  }

  VAR_4.Headers.NeighborSoliciationHeader =
   (ICMPV6_NEIGHBOR_SOLICIATION_HEADER *)(((UCHAR *)VAR_4.Data));

  if (FUNC_2(&VAR_4.OptionList, ((UCHAR *)VAR_4.Headers.HeaderPointer) + sizeof(ICMPV6_NEIGHBOR_SOLICIATION_HEADER),
   VAR_4.DataSize - sizeof(ICMPV6_NEIGHBOR_SOLICIATION_HEADER)) == 0)
  {
   return 0;
  }

  break;

 case 131:

  if (VAR_4.DataSize < sizeof(ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER))
  {
   return 0;
  }

  VAR_4.Headers.NeighborAdvertisementHeader =
   (ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER *)(((UCHAR *)VAR_4.Data));

  if (FUNC_2(&VAR_4.OptionList, ((UCHAR *)VAR_4.Headers.HeaderPointer) + sizeof(ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER),
   VAR_4.DataSize - sizeof(ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER)) == 0)
  {
   return 0;
  }

  break;
 }

 VAR_1->TypeL4 = VAR_0;
 FUNC_0(&VAR_1->ICMPv6HeaderPacketInfo, &VAR_4, sizeof(ICMPV6_HEADER_INFO));

 return 1;
}
