
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {TYPE_1__* Server; } ;
struct TYPE_11__ {int Server; int ServerPort; int Interval; int lock; int UdpMode; int ServerName; scalar_t__ Enable; } ;
struct TYPE_10__ {int KeepConnectPort; int KeepConnectInterval; int KeepConnectProtocol; int KeepConnectHost; scalar_t__ UseKeepConnect; } ;
struct TYPE_9__ {TYPE_3__* Keep; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_KEEP ;
typedef TYPE_3__ KEEP ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;

UINT FUNC_6(ADMIN *VAR_3, RPC_KEEP *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;

 if (VAR_4->UseKeepConnect)
 {
  if (FUNC_2(VAR_4->KeepConnectHost) ||
   VAR_4->KeepConnectPort == 0 ||
   VAR_4->KeepConnectPort >= 65536)
  {
   return VAR_0;
  }
 }

 VAR_2;

 FUNC_3(VAR_5->Keep->lock);
 {
  KEEP *VAR_6 = VAR_5->Keep;
  VAR_6->Enable = VAR_4->UseKeepConnect;
  VAR_6->Server = 1;
  FUNC_4(VAR_6->ServerName, sizeof(VAR_6->ServerName), VAR_4->KeepConnectHost);
  VAR_6->ServerPort = VAR_4->KeepConnectPort;
  VAR_6->UdpMode = VAR_4->KeepConnectProtocol;
  VAR_6->Interval = VAR_4->KeepConnectInterval * 1000;
  if (VAR_6->Interval < 5000)
  {
   VAR_6->Interval = 5000;
  }
  else if (VAR_6->Interval > 600000)
  {
   VAR_6->Interval = 600000;
  }
 }
 FUNC_5(VAR_5->Keep->lock);

 FUNC_0(VAR_3, ((void*)0), "LA_SET_KEEP");

 FUNC_1(VAR_5);

 return VAR_1;
}
