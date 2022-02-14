
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {TYPE_1__* Server; } ;
struct TYPE_10__ {int Interval; int lock; int UdpMode; int ServerPort; int ServerName; int Enable; } ;
struct TYPE_9__ {int KeepConnectInterval; int KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; int UseKeepConnect; } ;
struct TYPE_8__ {TYPE_3__* Keep; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_KEEP ;
typedef TYPE_3__ KEEP ;
typedef TYPE_4__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

UINT FUNC_4(ADMIN *VAR_1, RPC_KEEP *VAR_2)
{
 SERVER *VAR_3 = VAR_1->Server;

 FUNC_3(VAR_2, sizeof(RPC_KEEP));

 FUNC_0(VAR_3->Keep->lock);
 {
  KEEP *VAR_4 = VAR_3->Keep;
  VAR_2->UseKeepConnect = VAR_4->Enable;
  FUNC_1(VAR_2->KeepConnectHost, sizeof(VAR_2->KeepConnectHost), VAR_4->ServerName);
  VAR_2->KeepConnectPort = VAR_4->ServerPort;
  VAR_2->KeepConnectProtocol = VAR_4->UdpMode;
  VAR_2->KeepConnectInterval = VAR_4->Interval / 1000;
 }
 FUNC_2(VAR_3->Keep->lock);

 return VAR_0;
}
