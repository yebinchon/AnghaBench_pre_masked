
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int PEAP_CurrentReceivingMsg; int SslPipe; int UdpSock; } ;
typedef TYPE_1__ EAP_CLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(EAP_CLIENT *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->UdpSock);
 FUNC_4(VAR_0->UdpSock);

 FUNC_3(VAR_0->SslPipe);

 FUNC_2(VAR_0->PEAP_CurrentReceivingMsg);

 FUNC_1(VAR_0);
}
