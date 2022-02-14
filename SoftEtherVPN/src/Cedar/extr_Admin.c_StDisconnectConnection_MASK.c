
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int tt ;
typedef int UINT ;
struct TYPE_18__ {TYPE_1__* Server; } ;
struct TYPE_17__ {int ConnectionList; } ;
struct TYPE_16__ {int ref; int Name; } ;
struct TYPE_15__ {int Name; } ;
struct TYPE_14__ {TYPE_4__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_DISCONNECT_CONNECTION ;
typedef TYPE_3__ CONNECTION ;
typedef TYPE_4__ CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int) ;

UINT FUNC_9(ADMIN *VAR_4, RPC_DISCONNECT_CONNECTION *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 CONNECTION *VAR_8;

 if (FUNC_2(VAR_5->Name))
 {
  return VAR_0;
 }

 VAR_3;

 FUNC_3(VAR_7->ConnectionList);
 {
  CONNECTION VAR_9;
  FUNC_8(&VAR_9, sizeof(VAR_9));
  VAR_9.Name = VAR_5->Name;

  VAR_8 = FUNC_5(VAR_7->ConnectionList, &VAR_9);
  if (VAR_8 != ((void*)0))
  {
   FUNC_1(VAR_8->ref);
  }
 }
 FUNC_7(VAR_7->ConnectionList);

 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_6(VAR_8, 1);

 FUNC_4(VAR_8);

 FUNC_0(VAR_4, ((void*)0), "LA_DISCONNECT_CONN", VAR_5->Name);

 return VAR_1;
}
