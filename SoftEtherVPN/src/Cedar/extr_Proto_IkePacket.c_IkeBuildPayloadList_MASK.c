
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int h ;
typedef scalar_t__ USHORT ;
typedef int UINT ;
struct TYPE_16__ {int Size; TYPE_2__* Buf; } ;
struct TYPE_15__ {int PayloadSize; int NextPayload; } ;
struct TYPE_14__ {int PayloadType; } ;
typedef int LIST ;
typedef TYPE_1__ IKE_PACKET_PAYLOAD ;
typedef TYPE_2__ IKE_COMMON_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;

BUF *FUNC_9(LIST *VAR_1)
{
 BUF *VAR_2;
 UINT VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_5();

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_1);VAR_3++)
 {
  IKE_PACKET_PAYLOAD *VAR_4 = FUNC_3(VAR_1, VAR_3);
  IKE_PACKET_PAYLOAD *VAR_5 = ((void*)0);
  IKE_COMMON_HEADER VAR_6;
  BUF *VAR_7;

  if (VAR_3 < (FUNC_4(VAR_1) - 1))
  {
   VAR_5 = FUNC_3(VAR_1, VAR_3 + 1);
  }

  FUNC_8(&VAR_6, sizeof(VAR_6));
  if (VAR_5 != ((void*)0))
  {
   VAR_6.NextPayload = VAR_5->PayloadType;
  }
  else
  {
   VAR_6.NextPayload = VAR_0;
  }

  VAR_7 = FUNC_2(VAR_4);
  if (VAR_7 != ((void*)0))
  {
   VAR_6.PayloadSize = FUNC_0(VAR_7->Size + (USHORT)sizeof(VAR_6));

   FUNC_7(VAR_2, &VAR_6, sizeof(VAR_6));
   FUNC_7(VAR_2, VAR_7->Buf, VAR_7->Size);

   FUNC_1(VAR_7);
  }
 }

 FUNC_6(VAR_2, 0, 0);

 return VAR_2;
}
