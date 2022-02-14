
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_11__ {int DstPort; int SrcPort; } ;
typedef TYPE_3__ UDP_HEADER ;
typedef int UCHAR ;
struct TYPE_13__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; scalar_t__ ExchangeType; } ;
struct TYPE_10__ {TYPE_5__* IkeHeader; } ;
struct TYPE_9__ {TYPE_3__* UDPHeader; } ;
struct TYPE_12__ {int* Payload; int PayloadSize; scalar_t__ TypeL3; int TypeL7; TYPE_2__ L7; TYPE_1__ L4; int TypeL4; } ;
typedef TYPE_4__ PKT ;
typedef TYPE_5__ IKE_HEADER ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int*,int) ;
 int FUNC_3 (TYPE_4__*,int*,int) ;

bool FUNC_4(PKT *VAR_6, UCHAR *VAR_7, UINT VAR_8)
{
 USHORT VAR_9, VAR_10;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return 0;
 }


 if (VAR_8 < sizeof(UDP_HEADER))
 {

  return 0;
 }


 VAR_6->L4.UDPHeader = (UDP_HEADER *)VAR_7;
 VAR_6->TypeL4 = VAR_3;

 VAR_7 += sizeof(UDP_HEADER);
 VAR_8 -= sizeof(UDP_HEADER);

 VAR_6->Payload = VAR_7;
 VAR_6->PayloadSize = VAR_8;


 VAR_9 = FUNC_0(VAR_6->L4.UDPHeader->SrcPort);
 VAR_10 = FUNC_0(VAR_6->L4.UDPHeader->DstPort);

 if ((VAR_9 == 67 && VAR_10 == 68) ||
  (VAR_9 == 68 && VAR_10 == 67))
 {
  if (VAR_6->TypeL3 == VAR_2)
  {

   FUNC_2(VAR_6, VAR_7, VAR_8);

   return 1;
  }
 }

  if (VAR_10 == 53)
 {
   FUNC_3(VAR_6, VAR_7, VAR_8);
   return 1;
  }


 if (VAR_9 == 500 || VAR_10 == 500 || VAR_9 == 4500 || VAR_10 == 4500)
 {
  if (VAR_6->PayloadSize >= sizeof(IKE_HEADER))
  {
   IKE_HEADER *VAR_11 = (IKE_HEADER *)VAR_6->Payload;

   if (VAR_11->InitiatorCookie != 0 && VAR_11->ResponderCookie == 0 &&
    (VAR_11->ExchangeType == VAR_1 ||
    VAR_11->ExchangeType == VAR_0))
   {

    VAR_6->TypeL7 = VAR_4;
    VAR_6->L7.IkeHeader = VAR_11;
    return 1;
   }
  }
 }


 if (VAR_8 == 14)
 {
  if (VAR_7[0] == 0x38)
  {
   if (FUNC_1(VAR_7 + 9, 5))
   {
    if (FUNC_1(VAR_7 + 1, 8) == 0)
    {

     VAR_6->TypeL7 = VAR_5;
     return 1;
    }
   }
  }
 }

 return 1;
}
