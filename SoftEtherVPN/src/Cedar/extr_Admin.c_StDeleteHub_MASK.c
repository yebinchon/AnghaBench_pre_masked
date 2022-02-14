
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int HubName; } ;
struct TYPE_8__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_DELETE_HUB ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

UINT FUNC_10(ADMIN *VAR_7, RPC_DELETE_HUB *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11 = ((void*)0);

 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }


 if (FUNC_4(VAR_8->HubName) || FUNC_5(VAR_8->HubName) == 0)
 {
  return VAR_1;
 }

 VAR_4;

 VAR_5;

 FUNC_6(VAR_10);
 {
  VAR_11 = FUNC_2(VAR_10, VAR_8->HubName);
 }
 FUNC_9(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_8(VAR_11);

 FUNC_3(VAR_9);

 FUNC_1(VAR_10, VAR_11);
 FUNC_7(VAR_11);

 FUNC_0(VAR_7, ((void*)0), "LA_DELETE_HUB", VAR_8->HubName);

 return VAR_3;
}
