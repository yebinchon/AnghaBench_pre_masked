
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Disconnecting; int WantToDisconnect; int SessionId2; int SessionId1; scalar_t__ Established; } ;
struct TYPE_5__ {int TunnelId2; int TunnelId1; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef TYPE_2__ L2TP_SESSION ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;

void FUNC_1(L2TP_TUNNEL *VAR_0, L2TP_SESSION *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Established && VAR_1->Disconnecting == 0 && VAR_1->WantToDisconnect == 0)
 {
  FUNC_0("Trying to Disconnect Session ID %u/%u on Tunnel %u/%u\n", VAR_1->SessionId1, VAR_1->SessionId2,
   VAR_0->TunnelId1, VAR_0->TunnelId2);
  VAR_1->WantToDisconnect = 1;
 }
}
