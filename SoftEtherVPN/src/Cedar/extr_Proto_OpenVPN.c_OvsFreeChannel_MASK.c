
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int * X; } ;
struct TYPE_6__ {TYPE_1__ ClientCert; int MdSend; int MdRecv; int CipherEncrypt; int CipherDecrypt; int SendControlPacketList; int AckReplyList; int * SslPipe; } ;
typedef int OPENVPN_CONTROL_PACKET ;
typedef TYPE_2__ OPENVPN_CHANNEL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(OPENVPN_CHANNEL *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->SslPipe != ((void*)0))
 {
  FUNC_3(VAR_0->SslPipe);
 }

 FUNC_8(VAR_0->AckReplyList);

 for (VAR_1 = 0;VAR_1 < FUNC_6(VAR_0->SendControlPacketList);VAR_1++)
 {
  OPENVPN_CONTROL_PACKET *VAR_2 = FUNC_5(VAR_0->SendControlPacketList, VAR_1);

  FUNC_7(VAR_2);
 }

 FUNC_9(VAR_0->SendControlPacketList);

 FUNC_1(VAR_0->CipherDecrypt);
 FUNC_1(VAR_0->CipherEncrypt);

 FUNC_2(VAR_0->MdRecv);
 FUNC_2(VAR_0->MdSend);

 if (VAR_0->ClientCert.X != ((void*)0))
 {
  FUNC_4(VAR_0->ClientCert.X);
 }

 FUNC_0(VAR_0);
}
