
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {scalar_t__ ServerType; int NumPort; void* Ports; int ControllerPort; int ControllerName; int PublicIp; int Weight; int ControllerOnly; } ;
struct TYPE_8__ {scalar_t__ ServerType; int NumPublicPort; int ControllerPort; int ControllerName; int PublicIp; int PublicPorts; int Weight; int ControllerOnly; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_FARM ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (void*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 void* FUNC_4 (int) ;

UINT FUNC_5(ADMIN *VAR_2, RPC_FARM *VAR_3)
{
 SERVER *VAR_4;
 FUNC_1(VAR_3);
 FUNC_3(VAR_3, sizeof(RPC_FARM));

 VAR_4 = VAR_2->Server;
 VAR_3->ServerType = VAR_4->ServerType;
 VAR_3->ControllerOnly = VAR_4->ControllerOnly;
 VAR_3->Weight = VAR_4->Weight;

 if (VAR_3->ServerType == VAR_1)
 {
  VAR_3->NumPort = VAR_4->NumPublicPort;
  VAR_3->Ports = FUNC_4(sizeof(UINT) * VAR_3->NumPort);
  FUNC_0(VAR_3->Ports, VAR_4->PublicPorts, sizeof(UINT) * VAR_3->NumPort);
  VAR_3->PublicIp = VAR_4->PublicIp;
  FUNC_2(VAR_3->ControllerName, sizeof(VAR_3->ControllerName), VAR_4->ControllerName);
  VAR_3->ControllerPort = VAR_4->ControllerPort;
 }
 else
 {
  VAR_3->NumPort = 0;
  VAR_3->Ports = FUNC_4(0);
 }

 return VAR_0;
}
