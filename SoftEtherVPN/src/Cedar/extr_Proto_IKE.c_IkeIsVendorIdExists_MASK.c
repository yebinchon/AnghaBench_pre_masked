
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ UINT ;
struct TYPE_17__ {int Size; int Buf; } ;
struct TYPE_16__ {int PayloadList; } ;
struct TYPE_13__ {TYPE_10__* Data; } ;
struct TYPE_14__ {TYPE_1__ VendorId; } ;
struct TYPE_15__ {TYPE_2__ Payload; } ;
struct TYPE_12__ {int Buf; int Size; } ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;
typedef TYPE_4__ IKE_PACKET ;
typedef TYPE_5__ BUF ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_10__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (char*) ;

bool FUNC_6(IKE_PACKET *VAR_1, char *VAR_2)
{
 BUF *VAR_3;
 UINT VAR_4, VAR_5;
 bool VAR_6 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_4(VAR_1->PayloadList, VAR_0);
 for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
 {
  IKE_PACKET_PAYLOAD *VAR_7 = FUNC_3(VAR_1->PayloadList, VAR_0, VAR_4);
  if (VAR_7 == ((void*)0))
  {
   return 0;
  }

  if (FUNC_1(VAR_7->Payload.VendorId.Data, VAR_3))
  {
   VAR_6 = 1;
  }
  else
  {
   if (VAR_7->Payload.VendorId.Data != ((void*)0))
   {
    if (VAR_7->Payload.VendorId.Data->Size >= VAR_3->Size)
    {
     if (FUNC_0(VAR_7->Payload.VendorId.Data->Buf, VAR_3->Buf, VAR_3->Size) == 0)
     {
      VAR_6 = 1;
     }
    }
   }
  }
 }

 FUNC_2(VAR_3);

 return VAR_6;
}
