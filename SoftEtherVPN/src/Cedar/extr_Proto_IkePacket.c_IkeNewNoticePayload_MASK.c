
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int ProtocolId; void* Spi; void* MessageData; int MessageType; } ;
struct TYPE_7__ {TYPE_1__ Notice; } ;
struct TYPE_8__ {TYPE_2__ Payload; } ;
typedef TYPE_3__ IKE_PACKET_PAYLOAD ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 void* FUNC_1 (void*,scalar_t__) ;

IKE_PACKET_PAYLOAD *FUNC_2(UCHAR VAR_1, USHORT VAR_2,
          void *VAR_3, UINT VAR_4,
          void *VAR_5, UINT VAR_6)
{
 IKE_PACKET_PAYLOAD *VAR_7;
 if (VAR_3 == ((void*)0) && VAR_4 != 0)
 {
  return ((void*)0);
 }
 if (VAR_5 == ((void*)0) && VAR_6 != 0)
 {
  return ((void*)0);
 }

 VAR_7 = FUNC_0(VAR_0);
 VAR_7->Payload.Notice.MessageType = VAR_2;
 VAR_7->Payload.Notice.MessageData = FUNC_1(VAR_5, VAR_6);
 VAR_7->Payload.Notice.Spi = FUNC_1(VAR_3, VAR_4);
 VAR_7->Payload.Notice.ProtocolId = VAR_1;

 return VAR_7;
}
