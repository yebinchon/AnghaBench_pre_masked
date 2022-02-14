
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef void* UCHAR ;
struct TYPE_7__ {int * PayloadList; int Spi; void* ProtocolId; void* Number; } ;
struct TYPE_6__ {TYPE_2__ Proposal; } ;
struct TYPE_8__ {TYPE_1__ Payload; } ;
typedef int LIST ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (void*,scalar_t__) ;

IKE_PACKET_PAYLOAD *FUNC_2(UCHAR VAR_1, UCHAR VAR_2, void *VAR_3, UINT VAR_4, LIST *VAR_5)
{
 IKE_PACKET_PAYLOAD *VAR_6;
 if (VAR_5 == ((void*)0) || (VAR_3 == ((void*)0) && VAR_4 != 0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_0);
 VAR_6->Payload.Proposal.Number = VAR_1;
 VAR_6->Payload.Proposal.ProtocolId = VAR_2;
 VAR_6->Payload.Proposal.Spi = FUNC_1(VAR_3, VAR_4);
 VAR_6->Payload.Proposal.PayloadList = VAR_5;

 return VAR_6;
}
