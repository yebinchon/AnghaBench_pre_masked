
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Protocol; scalar_t__ IsFragment; int PayloadSize; int * Payload; int IPv6Header; } ;
struct TYPE_8__ {int IPv6Header; } ;
struct TYPE_9__ {TYPE_5__ IPv6HeaderPacketInfo; int TypeL4; TYPE_1__ L3; int TypeL3; } ;
typedef TYPE_2__ PKT ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_5__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;

bool FUNC_4(PKT *VAR_2, UCHAR *VAR_3, UINT VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(&VAR_2->IPv6HeaderPacketInfo, VAR_3, VAR_4) == 0)
 {
  return 0;
 }

 VAR_2->TypeL3 = VAR_0;
 VAR_2->L3.IPv6Header = VAR_2->IPv6HeaderPacketInfo.IPv6Header;

 if (VAR_2->IPv6HeaderPacketInfo.Payload == ((void*)0))
 {

  return 1;
 }

 VAR_3 = VAR_2->IPv6HeaderPacketInfo.Payload;
 VAR_4 = VAR_2->IPv6HeaderPacketInfo.PayloadSize;

 if (VAR_2->IPv6HeaderPacketInfo.IsFragment)
 {

  VAR_2->TypeL4 = VAR_1;
  return 1;
 }


 switch (VAR_2->IPv6HeaderPacketInfo.Protocol)
 {
 case 130:
  if (FUNC_0(VAR_2, VAR_3, VAR_4) == 0)
  {

   return 1;
  }
  else
  {
   return 1;
  }

 case 129:
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 case 128:
  return FUNC_3(VAR_2, VAR_3, VAR_4);

 default:
  return 1;
 }

 return 1;
}
