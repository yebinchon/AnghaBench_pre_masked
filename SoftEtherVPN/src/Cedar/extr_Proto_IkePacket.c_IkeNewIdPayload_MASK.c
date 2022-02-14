
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef void* UCHAR ;
struct TYPE_7__ {void* Type; void* ProtocolId; int Port; int IdData; } ;
struct TYPE_6__ {TYPE_2__ Id; } ;
struct TYPE_8__ {TYPE_1__ Payload; } ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (void*,scalar_t__) ;

IKE_PACKET_PAYLOAD *FUNC_2(UCHAR VAR_1, UCHAR VAR_2, USHORT VAR_3, void *VAR_4, UINT VAR_5)
{
 IKE_PACKET_PAYLOAD *VAR_6;
 if (VAR_4 == ((void*)0) && VAR_5 != 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_0);
 VAR_6->Payload.Id.IdData = FUNC_1(VAR_4, VAR_5);
 VAR_6->Payload.Id.Port = VAR_3;
 VAR_6->Payload.Id.ProtocolId = VAR_2;
 VAR_6->Payload.Id.Type = VAR_1;

 return VAR_6;
}
