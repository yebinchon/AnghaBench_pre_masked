
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_18__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_17__ {int CurrentVersion; } ;
struct TYPE_16__ {int LogSetting; int HubName; } ;
struct TYPE_15__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;

UINT FUNC_9(ADMIN *VAR_4, RPC_HUB_LOG *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 HUB *VAR_8;

 VAR_0;


 FUNC_4(VAR_7);
 {
  VAR_8 = FUNC_1(VAR_7, VAR_5->HubName);
 }
 FUNC_8(VAR_7);

 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_4->ServerAdmin == 0 && FUNC_2(VAR_8, "no_change_log_config") != 0)
 {
  FUNC_5(VAR_8);
  return VAR_2;
 }

 FUNC_0(VAR_4, VAR_8, "LA_SET_HUB_LOG");

 FUNC_6(VAR_8, &VAR_5->LogSetting,
  (VAR_4->ServerAdmin == 0 && FUNC_2(VAR_8, "no_change_log_switch_type") != 0));

 VAR_8->CurrentVersion++;
 FUNC_7(VAR_8);

 FUNC_5(VAR_8);

 FUNC_3(VAR_6);

 return VAR_3;
}
