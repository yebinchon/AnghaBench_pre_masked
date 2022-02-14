
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int IsFragment; int HopHeaderSize; int EndPointHeaderSize; int RoutingHeaderSize; int PayloadSize; int Protocol; int * Payload; int * FragmentHeader; TYPE_1__* RoutingHeader; TYPE_1__* EndPointHeader; TYPE_1__* HopHeader; } ;
struct TYPE_4__ {int Size; } ;
typedef TYPE_1__ IPV6_OPTION_HEADER ;
typedef TYPE_2__ IPV6_HEADER_PACKET_INFO ;
typedef int IPV6_FRAGMENT_HEADER ;


 int FUNC_0 (int *) ;



 int VAR_0 ;


bool FUNC_1(IPV6_HEADER_PACKET_INFO *VAR_1, UCHAR VAR_2, UCHAR *VAR_3, UINT VAR_4)
{
 bool VAR_5 = 0;
 IPV6_OPTION_HEADER *VAR_6;
 UINT VAR_7;
 UCHAR VAR_8 = VAR_0;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_1->IsFragment = 0;

 while (1)
 {
  if (VAR_4 > 8)
  {
   VAR_8 = *((UCHAR *)VAR_3);
  }

  switch (VAR_2)
  {
  case 129:
  case 131:
  case 128:

   if (VAR_4 < 8)
   {
    return 0;
   }

   VAR_6 = (IPV6_OPTION_HEADER *)VAR_3;
   VAR_7 = (VAR_6->Size + 1) * 8;
   if (VAR_4 < VAR_7)
   {
    return 0;
   }

   switch (VAR_2)
   {
   case 129:
    VAR_1->HopHeader = (IPV6_OPTION_HEADER *)VAR_3;
    VAR_1->HopHeaderSize = VAR_7;
    break;

   case 131:
    VAR_1->EndPointHeader = (IPV6_OPTION_HEADER *)VAR_3;
    VAR_1->EndPointHeaderSize = VAR_7;
    break;

   case 128:
    VAR_1->RoutingHeader = (IPV6_OPTION_HEADER *)VAR_3;
    VAR_1->RoutingHeaderSize = VAR_7;
    break;
   }

   VAR_3 += VAR_7;
   VAR_4 -= VAR_7;
   break;

  case 130:

   if (VAR_4 < sizeof(IPV6_FRAGMENT_HEADER))
   {
    return 0;
   }

   VAR_1->FragmentHeader = (IPV6_FRAGMENT_HEADER *)VAR_3;

   if (FUNC_0(VAR_1->FragmentHeader) != 0)
   {
    VAR_1->IsFragment = 1;
   }

   VAR_3 += sizeof(IPV6_FRAGMENT_HEADER);
   VAR_4 -= sizeof(IPV6_FRAGMENT_HEADER);
   break;

  default:

   if (VAR_2 != VAR_0)
   {
    VAR_1->Payload = VAR_3;
    VAR_1->PayloadSize = VAR_4;
   }
   else
   {
    VAR_1->Payload = ((void*)0);
    VAR_1->PayloadSize = 0;
   }
   VAR_1->Protocol = VAR_2;
   return 1;
  }

  VAR_2 = VAR_8;
 }
}
