
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int h ;
struct TYPE_16__ {int Size; } ;
struct TYPE_15__ {int PayloadList; TYPE_3__* Spi; int ProtocolId; int Number; } ;
struct TYPE_14__ {int SpiSize; int ProtocolId; int NumTransforms; int Number; } ;
typedef TYPE_1__ IKE_PROPOSAL_HEADER ;
typedef TYPE_2__ IKE_PACKET_PROPOSAL_PAYLOAD ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

BUF *FUNC_7(IKE_PACKET_PROPOSAL_PAYLOAD *VAR_0)
{
 IKE_PROPOSAL_HEADER VAR_1;
 BUF *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_6(&VAR_1, sizeof(VAR_1));
 VAR_1.Number = VAR_0->Number;
 VAR_1.NumTransforms = FUNC_2(VAR_0->PayloadList);
 VAR_1.ProtocolId = VAR_0->ProtocolId;
 VAR_1.SpiSize = VAR_0->Spi->Size;

 VAR_2 = FUNC_3();
 FUNC_4(VAR_2, &VAR_1, sizeof(VAR_1));
 FUNC_5(VAR_2, VAR_0->Spi);

 VAR_3 = FUNC_1(VAR_0->PayloadList);
 FUNC_5(VAR_2, VAR_3);

 FUNC_0(VAR_3);

 return VAR_2;
}
