
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int Server; } ;
struct TYPE_6__ {scalar_t__ ServerType; int ControllerOnly; int Weight; int MemberPassword; int ControllerPort; int ControllerName; int Ports; int NumPort; int PublicIp; } ;
typedef TYPE_1__ RPC_FARM ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ) ;

UINT FUNC_4(ADMIN *VAR_5, RPC_FARM *VAR_6)
{
 bool VAR_7 = 0;

 VAR_3;
 VAR_2;


 VAR_7 = FUNC_1(VAR_5->Server, "b_support_cluster");

 if (VAR_6->ServerType != VAR_4 && VAR_7 == 0)
 {

  return VAR_0;
 }

 FUNC_0(VAR_5, ((void*)0), "LA_SET_FARM_SETTING");

 FUNC_2(VAR_5->Server);

 FUNC_3(VAR_5->Server, VAR_6->ServerType, VAR_6->PublicIp, VAR_6->NumPort, VAR_6->Ports,
  VAR_6->ControllerName, VAR_6->ControllerPort, VAR_6->MemberPassword, VAR_6->Weight, VAR_6->ControllerOnly);

 return VAR_1;
}
