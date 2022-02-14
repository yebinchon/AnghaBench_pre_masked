
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Disconnecting; int WantToDisconnect; int SessionList; int TunnelId2; int TunnelId1; } ;
typedef TYPE_1__ L2TP_TUNNEL ;
typedef int L2TP_SESSION ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(L2TP_TUNNEL *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if ( VAR_0->Disconnecting == 0 && VAR_0->WantToDisconnect == 0)
 {
  UINT VAR_1;

  FUNC_0("Trying to Disconnect Tunnel ID %u/%u\n", VAR_0->TunnelId1, VAR_0->TunnelId2);
  VAR_0->WantToDisconnect = 1;


  for (VAR_1 = 0;VAR_1 < FUNC_3(VAR_0->SessionList);VAR_1++)
  {
   L2TP_SESSION *VAR_2 = FUNC_2(VAR_0->SessionList, VAR_1);

   FUNC_1(VAR_0, VAR_2);
  }
 }
}
