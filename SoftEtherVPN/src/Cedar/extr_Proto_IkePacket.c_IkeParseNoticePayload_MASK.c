
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h ;
struct TYPE_6__ {int SpiSize; int ProtocolId; int MessageType; int DoI; } ;
struct TYPE_5__ {int MessageData; int * Spi; int ProtocolId; int MessageType; } ;
typedef TYPE_1__ IKE_PACKET_NOTICE_PAYLOAD ;
typedef TYPE_2__ IKE_NOTICE_HEADER ;
typedef int BUF ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

bool FUNC_6(IKE_PACKET_NOTICE_PAYLOAD *VAR_1, BUF *VAR_2)
{
 IKE_NOTICE_HEADER VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_3(VAR_2, &VAR_3, sizeof(VAR_3)) != sizeof(VAR_3))
 {
  return 0;
 }

 if (FUNC_2(VAR_3.DoI) != VAR_0)
 {
  FUNC_0("ISAKMP: Invalid DoI Value: 0x%x\n", FUNC_2(VAR_3.DoI));
  return 0;
 }

 VAR_1->MessageType = FUNC_1(VAR_3.MessageType);
 VAR_1->ProtocolId = VAR_3.ProtocolId;
 VAR_1->Spi = FUNC_4(VAR_2, VAR_3.SpiSize);
 if (VAR_1->Spi == ((void*)0))
 {
  return 0;
 }
 VAR_1->MessageData = FUNC_5(VAR_2);

 return 1;
}
