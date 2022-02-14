
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int NextHeader; } ;
struct TYPE_7__ {int TotalHeaderSize; TYPE_2__* IPv6Header; int * Payload; } ;
typedef TYPE_1__ IPV6_HEADER_PACKET_INFO ;
typedef TYPE_2__ IPV6_HEADER ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

bool FUNC_3(IPV6_HEADER_PACKET_INFO *VAR_0, UCHAR *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  FUNC_2(VAR_0, sizeof(IPV6_HEADER_PACKET_INFO));
  return 0;
 }

 FUNC_2(VAR_0, sizeof(IPV6_HEADER_PACKET_INFO));


 if (VAR_2 < sizeof(IPV6_HEADER))
 {

  return 0;
 }

 VAR_0->IPv6Header = (IPV6_HEADER *)VAR_1;
 VAR_1 += sizeof(IPV6_HEADER);
 VAR_2 -= sizeof(IPV6_HEADER);

 if (FUNC_0(VAR_0->IPv6Header) != 6)
 {

  return 0;
 }


 if (FUNC_1(VAR_0, VAR_0->IPv6Header->NextHeader, VAR_1, VAR_2) == 0)
 {
  return 0;
 }


 if (VAR_0->Payload != ((void*)0))
 {
  VAR_0->TotalHeaderSize = (UINT)((UINT64)(VAR_0->Payload) - (UINT64)(VAR_0->IPv6Header));
 }

 return 1;
}
