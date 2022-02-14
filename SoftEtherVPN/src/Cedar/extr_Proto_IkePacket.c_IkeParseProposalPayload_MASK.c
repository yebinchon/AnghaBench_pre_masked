
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int Size; scalar_t__ Buf; } ;
struct TYPE_7__ {int PayloadList; int Spi; int ProtocolId; int Number; } ;
struct TYPE_6__ {scalar_t__ SpiSize; int ProtocolId; int Number; } ;
typedef TYPE_1__ IKE_PROPOSAL_HEADER ;
typedef TYPE_2__ IKE_PACKET_PROPOSAL_PAYLOAD ;
typedef TYPE_3__ BUF ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,scalar_t__) ;

bool FUNC_2(IKE_PACKET_PROPOSAL_PAYLOAD *VAR_1, BUF *VAR_2)
{
 IKE_PROPOSAL_HEADER *VAR_3;
 UCHAR *VAR_4;
 UINT VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Size < sizeof(IKE_PROPOSAL_HEADER))
 {
  return 0;
 }

 VAR_3 = (IKE_PROPOSAL_HEADER *)VAR_2->Buf;

 VAR_1->Number = VAR_3->Number;
 VAR_1->ProtocolId = VAR_3->ProtocolId;

 VAR_4 = (UCHAR *)VAR_2->Buf;
 VAR_4 += sizeof(IKE_PROPOSAL_HEADER);
 VAR_5 = VAR_2->Size - sizeof(IKE_PROPOSAL_HEADER);

 if (VAR_5 < (UINT)VAR_3->SpiSize)
 {
  return 0;
 }

 VAR_1->Spi = FUNC_1(VAR_4, VAR_3->SpiSize);

 VAR_4 += VAR_3->SpiSize;
 VAR_5 -= VAR_3->SpiSize;

 VAR_1->PayloadList = FUNC_0(VAR_4, VAR_5, VAR_0);

 return 1;
}
