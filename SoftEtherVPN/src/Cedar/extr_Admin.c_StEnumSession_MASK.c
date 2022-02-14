
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_9__ {int HubName; } ;
struct TYPE_8__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ENUM_SESSION ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (int *) ;

UINT FUNC_6(ADMIN *VAR_4, RPC_ENUM_SESSION *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 HUB *VAR_8 = ((void*)0);
 UINT VAR_9 = VAR_3;

 VAR_0;

 FUNC_2(VAR_7);
 {
  VAR_8 = FUNC_0(VAR_7, VAR_5->HubName);
 }
 FUNC_5(VAR_7);

 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_4->ServerAdmin == 0 && FUNC_1(VAR_8, "no_enum_session") != 0)
 {
  FUNC_3(VAR_8);
  return VAR_2;
 }

 FUNC_4(VAR_6, VAR_5);

 FUNC_3(VAR_8);

 return VAR_9;
}
