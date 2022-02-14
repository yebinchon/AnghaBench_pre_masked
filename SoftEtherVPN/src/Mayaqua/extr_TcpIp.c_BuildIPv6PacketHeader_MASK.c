
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_14__ {void* NextHeader; } ;
struct TYPE_13__ {int Size; scalar_t__ Buf; } ;
struct TYPE_12__ {int PayloadLength; } ;
struct TYPE_11__ {int PayloadSize; TYPE_5__* Payload; int Protocol; TYPE_5__* FragmentHeader; int RoutingHeaderSize; int * RoutingHeader; int EndPointHeaderSize; int * EndPointHeader; int HopHeaderSize; int * HopHeader; TYPE_5__* IPv6Header; } ;
typedef int QUEUE ;
typedef TYPE_1__ IPV6_HEADER_PACKET_INFO ;
typedef TYPE_2__ IPV6_HEADER ;
typedef int IPV6_FRAGMENT_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (TYPE_3__*,int *,void*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_3__* FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,int) ;

BUF *FUNC_9(IPV6_HEADER_PACKET_INFO *VAR_5, UINT *VAR_6)
{
 BUF *VAR_7;
 QUEUE *VAR_8;
 UINT VAR_9 = 0;

 if (VAR_5 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_4();
 VAR_8 = FUNC_5();


 if (VAR_5->HopHeader != ((void*)0))
 {
  FUNC_3(VAR_8, VAR_2);
 }
 if (VAR_5->EndPointHeader != ((void*)0))
 {
  FUNC_3(VAR_8, VAR_0);
 }
 if (VAR_5->RoutingHeader != ((void*)0))
 {
  FUNC_3(VAR_8, VAR_4);
 }
 if (VAR_5->FragmentHeader != ((void*)0))
 {
  FUNC_3(VAR_8, VAR_1);
 }
 FUNC_3(VAR_8, VAR_5->Protocol);


 VAR_5->IPv6Header->NextHeader = FUNC_2(VAR_8);
 FUNC_8(VAR_7, VAR_5->IPv6Header, sizeof(IPV6_HEADER));


 if (VAR_5->HopHeader != ((void*)0))
 {
  FUNC_0(VAR_7, VAR_5->HopHeader,
   FUNC_2(VAR_8), VAR_5->HopHeaderSize);
 }


 if (VAR_5->EndPointHeader != ((void*)0))
 {
  FUNC_0(VAR_7, VAR_5->EndPointHeader,
   FUNC_2(VAR_8), VAR_5->EndPointHeaderSize);
 }


 if (VAR_5->RoutingHeader != ((void*)0))
 {
  FUNC_0(VAR_7, VAR_5->RoutingHeader,
   FUNC_2(VAR_8), VAR_5->RoutingHeaderSize);
 }


 if (VAR_5->FragmentHeader != ((void*)0))
 {
  VAR_5->FragmentHeader->NextHeader = FUNC_2(VAR_8);
  FUNC_8(VAR_7, VAR_5->FragmentHeader, sizeof(IPV6_FRAGMENT_HEADER));
 }

 VAR_9 = VAR_7->Size;
 if (VAR_5->FragmentHeader == ((void*)0))
 {
  VAR_9 += sizeof(IPV6_FRAGMENT_HEADER);
 }


 if (VAR_5->Protocol != VAR_3)
 {
  FUNC_8(VAR_7, VAR_5->Payload, VAR_5->PayloadSize);
 }

 FUNC_6(VAR_8);

 FUNC_7(VAR_7, 0, 0);


 ((IPV6_HEADER *)VAR_7->Buf)->PayloadLength = FUNC_1(VAR_7->Size - (USHORT)sizeof(IPV6_HEADER));

 if (VAR_6 != ((void*)0))
 {


  *VAR_6 = VAR_9;
 }

 return VAR_7;
}
