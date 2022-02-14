
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int * PayloadList; } ;
struct TYPE_8__ {int * PayloadList; } ;
struct TYPE_10__ {TYPE_3__ Proposal; TYPE_2__ Sa; } ;
struct TYPE_11__ {int PayloadType; TYPE_4__ Payload; TYPE_1__* BitArray; } ;
struct TYPE_7__ {int Size; } ;
typedef int LIST ;
typedef TYPE_5__ IKE_PACKET_PAYLOAD ;


 int FUNC_0 (char*,char*,int,int,int ) ;


 TYPE_5__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char*,char,int) ;

void FUNC_4(LIST *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_4, ' ', VAR_2 * 2);

 for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_1);VAR_3++)
 {
  IKE_PACKET_PAYLOAD *VAR_5 = FUNC_1(VAR_1, VAR_3);

  FUNC_0("%s%u: Type = %u, Size = %u\n", VAR_4, VAR_3, VAR_5->PayloadType, VAR_5->BitArray->Size);

  switch (VAR_5->PayloadType)
  {
  case 128:
   FUNC_4(VAR_5->Payload.Sa.PayloadList, VAR_2 + 1);
   break;

  case 129:
   FUNC_4(VAR_5->Payload.Proposal.PayloadList, VAR_2 + 1);
   break;
  }
 }
}
