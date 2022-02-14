
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_9__ {int Name; int HubName; } ;
struct TYPE_8__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_DELETE_USER ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 (int *) ;

UINT FUNC_12(ADMIN *VAR_9, RPC_DELETE_USER *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13 = ((void*)0);
 UINT VAR_14 = VAR_5;

 if (FUNC_7(VAR_10->Name) || FUNC_8(VAR_10->Name) == 0)
 {
  return VAR_2;
 }

 VAR_0;

 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_4;
 }

 FUNC_9(VAR_12);
 {
  VAR_13 = FUNC_4(VAR_12, VAR_10->HubName);
 }
 FUNC_11(VAR_12);

 if (VAR_13 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_9->ServerAdmin == 0 && FUNC_5(VAR_13, "no_change_groups") != 0)
 {
  FUNC_10(VAR_13);
  return VAR_3;
 }

 FUNC_2(VAR_13);
 {
  if (FUNC_1(VAR_13, VAR_10->Name) == 0)
  {
   VAR_14 = VAR_6;
  }
 }
 FUNC_3(VAR_13);

 if (VAR_14 == VAR_5)
 {
  FUNC_0(VAR_9, VAR_13, "LA_DELETE_GROUP", VAR_10->Name);
 }

 FUNC_10(VAR_13);

 FUNC_6(VAR_11);

 return VAR_14;
}
