
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ Size; int DestPort; int * Data; void* Type; } ;
typedef TYPE_1__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_8__ {int * Ike; int * L2TP; } ;
typedef int L2TP_SERVER ;
typedef TYPE_2__ IPSEC_SERVER ;
typedef int IKE_SERVER ;


 void* VAR_0 ;
 void* VAR_1 ;




 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(IPSEC_SERVER *VAR_4, UDPPACKET *VAR_5)
{
 L2TP_SERVER *VAR_6;
 IKE_SERVER *VAR_7;
 void *VAR_8;
 UINT VAR_9;
 bool VAR_10 = 1;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 VAR_8 = VAR_5->Data;
 VAR_9 = VAR_5->Size;

 VAR_6 = VAR_4->L2TP;
 VAR_7 = VAR_4->Ike;


 if (VAR_5->DestPort == 130)
 {
  if (VAR_5->Size >= 4 && FUNC_0(VAR_5->Data, 4))
  {

   VAR_5->Data = ((UCHAR *)VAR_5->Data) + 4;
   VAR_5->Size -= 4;

   VAR_5->Type = VAR_1;
  }
  else
  {
   VAR_5->Type = VAR_0;
  }
 }
 else if (VAR_5->DestPort == 129)
 {
  if (VAR_5->Size >= 8 && FUNC_0(VAR_5->Data, 8))
  {

   VAR_5->Data = ((UCHAR *)VAR_5->Data) + 8;
   VAR_5->Size -= 8;

   VAR_5->Type = VAR_0;
  }
  else
  {
   VAR_5->Type = VAR_1;
  }
 }
 else if (VAR_5->DestPort == 131)
 {

  VAR_5->Type = VAR_0;
 }


 if (VAR_10)
 {
  switch (VAR_5->DestPort)
  {
  case 128:

   FUNC_2(VAR_6, VAR_5);
   break;

  case 129:
  case 130:
  case 131:

   FUNC_1(VAR_7, VAR_5);
   break;
  }
 }

 VAR_5->Data = VAR_8;
 VAR_5->Size = VAR_9;
}
