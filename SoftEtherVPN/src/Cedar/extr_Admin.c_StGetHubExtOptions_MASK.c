
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_15__ {TYPE_1__* Server; } ;
struct TYPE_14__ {int lock; int Name; int Option; } ;
struct TYPE_13__ {int HubName; } ;
struct TYPE_12__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int) ;

UINT FUNC_10(ADMIN *VAR_3, RPC_ADMIN_OPTION *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;
 HUB *VAR_7;

 VAR_0;

 FUNC_4(VAR_6);
 {
  VAR_7 = FUNC_1(VAR_6, VAR_4->HubName);
 }
 FUNC_8(VAR_6);

 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_0(VAR_4);
 FUNC_9(VAR_4, sizeof(RPC_ADMIN_OPTION));

 FUNC_6(VAR_4->HubName, sizeof(VAR_4->HubName), VAR_7->Name);


 FUNC_3(VAR_7->lock);
 {
  FUNC_2(VAR_4, VAR_7->Option, VAR_7->Name);
 }
 FUNC_7(VAR_7->lock);

 FUNC_5(VAR_7);

 return VAR_2;
}
