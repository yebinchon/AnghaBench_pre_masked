
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {TYPE_1__* Server; } ;
struct TYPE_7__ {int LogSetting; int HubName; } ;
struct TYPE_6__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_HUB_LOG ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

UINT FUNC_5(ADMIN *VAR_3, RPC_HUB_LOG *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 HUB *VAR_7;

 VAR_0;

 FUNC_2(VAR_6);
 {
  VAR_7 = FUNC_0(VAR_6, VAR_4->HubName);
 }
 FUNC_4(VAR_6);

 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_1(VAR_7, &VAR_4->LogSetting);

 FUNC_3(VAR_7);

 return VAR_2;
}
