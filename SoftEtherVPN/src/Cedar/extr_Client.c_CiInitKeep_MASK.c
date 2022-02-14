
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int KeepConnectInterval; scalar_t__ KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; scalar_t__ UseKeepConnect; } ;
struct TYPE_8__ {TYPE_1__ Config; TYPE_2__* Keep; } ;
struct TYPE_7__ {int Interval; int UdpMode; int Enable; int lock; int ServerPort; int ServerName; } ;
typedef TYPE_2__ KEEP ;
typedef TYPE_3__ CLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(CLIENT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->Keep = FUNC_1();


 if (VAR_1->Config.UseKeepConnect)
 {
  KEEP *VAR_2 = VAR_1->Keep;
  FUNC_0(VAR_2->lock);
  {
   FUNC_2(VAR_2->ServerName, sizeof(VAR_2->ServerName), VAR_1->Config.KeepConnectHost);
   VAR_2->ServerPort = VAR_1->Config.KeepConnectPort;
   VAR_2->Interval = VAR_1->Config.KeepConnectInterval * 1000;
   VAR_2->UdpMode = (VAR_1->Config.KeepConnectProtocol == VAR_0) ? 1 : 0;
   VAR_2->Enable = 1;
  }
  FUNC_3(VAR_2->lock);
 }
}
