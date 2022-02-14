
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int h ;
struct TYPE_11__ {int SpiSize; int ProtocolId; int MessageType; int DoI; } ;
struct TYPE_10__ {TYPE_2__* MessageData; TYPE_1__* Spi; int ProtocolId; int MessageType; } ;
struct TYPE_9__ {int Size; TYPE_4__* Buf; } ;
struct TYPE_8__ {int Size; TYPE_4__* Buf; } ;
typedef TYPE_3__ IKE_PACKET_NOTICE_PAYLOAD ;
typedef TYPE_4__ IKE_NOTICE_HEADER ;
typedef int BUF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;

BUF *FUNC_5(IKE_PACKET_NOTICE_PAYLOAD *VAR_1)
{
 IKE_NOTICE_HEADER VAR_2;
 BUF *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_4(&VAR_2, sizeof(VAR_2));
 VAR_2.DoI = FUNC_1(VAR_0);
 VAR_2.MessageType = FUNC_0(VAR_1->MessageType);
 VAR_2.ProtocolId = VAR_1->ProtocolId;
 VAR_2.SpiSize = VAR_1->Spi->Size;

 VAR_3 = FUNC_2();
 FUNC_3(VAR_3, &VAR_2, sizeof(VAR_2));
 FUNC_3(VAR_3, VAR_1->Spi->Buf, VAR_1->Spi->Size);

 if (VAR_1->MessageData != ((void*)0))
 {
  FUNC_3(VAR_3, VAR_1->MessageData->Buf, VAR_1->MessageData->Size);
 }

 return VAR_3;
}
