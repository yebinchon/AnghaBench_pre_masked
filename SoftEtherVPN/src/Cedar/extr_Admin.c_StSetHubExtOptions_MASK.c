
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_16__ {int CurrentVersion; int Name; int lock; int Option; } ;
struct TYPE_15__ {scalar_t__ NumItem; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

UINT FUNC_11(ADMIN *VAR_8, RPC_ADMIN_OPTION *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;

 bool VAR_13 = 0;

 if (VAR_9->NumItem > VAR_6)
 {
  return VAR_5;
 }

 if (VAR_10->ServerType == VAR_7)
 {
  return VAR_3;
 }


 VAR_0;

 if (VAR_8->ServerAdmin == 0)
 {
  VAR_13 = 1;
 }

 FUNC_6(VAR_11);
 {
  VAR_12 = FUNC_2(VAR_11, VAR_9->HubName);
 }
 FUNC_10(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (FUNC_3(VAR_12, "deny_hub_admin_change_ext_option") && VAR_13)
 {

  FUNC_7(VAR_12);

  return VAR_2;
 }


 FUNC_5(VAR_12->lock);
 {
  FUNC_1(VAR_12->Option, VAR_9);
 }
 FUNC_9(VAR_12->lock);

 FUNC_0(VAR_8, ((void*)0), "LA_SET_HUB_EXT_OPTION", VAR_12->Name);

 VAR_12->CurrentVersion++;
 FUNC_8(VAR_12);

 FUNC_7(VAR_12);

 FUNC_4(VAR_10);

 return VAR_4;
}
