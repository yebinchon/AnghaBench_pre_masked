
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int h ;
typedef int UINT ;
struct TYPE_13__ {int Size; TYPE_2__* Buf; } ;
struct TYPE_12__ {int SpiSize; int ProtocolId; int NumSpis; int DoI; } ;
struct TYPE_11__ {int SpiList; int ProtocolId; } ;
typedef TYPE_1__ IKE_PACKET_DELETE_PAYLOAD ;
typedef TYPE_2__ IKE_DELETE_HEADER ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

BUF *FUNC_7(IKE_PACKET_DELETE_PAYLOAD *VAR_1)
{
 IKE_DELETE_HEADER VAR_2;
 BUF *VAR_3;
 UINT VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_6(&VAR_2, sizeof(VAR_2));
 VAR_2.DoI = FUNC_1(VAR_0);
 VAR_2.NumSpis = FUNC_0(FUNC_3(VAR_1->SpiList));
 VAR_2.ProtocolId = VAR_1->ProtocolId;

 if (FUNC_3(VAR_1->SpiList) >= 1)
 {
  BUF *VAR_5 = FUNC_2(VAR_1->SpiList, 0);

  VAR_2.SpiSize = VAR_5->Size;
 }

 VAR_3 = FUNC_4();
 FUNC_5(VAR_3, &VAR_2, sizeof(VAR_2));

 for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_1->SpiList);VAR_4++)
 {
  BUF *VAR_6 = FUNC_2(VAR_1->SpiList, VAR_4);

  FUNC_5(VAR_3, VAR_6->Buf, VAR_6->Size);
 }

 return VAR_3;
}
