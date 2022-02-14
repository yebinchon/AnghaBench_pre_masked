
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int USERGROUP ;
typedef int UINT ;
struct TYPE_23__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_22__ {TYPE_1__* HubDb; } ;
struct TYPE_21__ {int Name; int Policy; int Note; int Realname; int HubName; } ;
struct TYPE_20__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_19__ {int GroupList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_SET_GROUP ;
typedef TYPE_4__ HUB ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*,char*,int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__* FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;
 int * FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_4__*) ;
 scalar_t__ VAR_10 ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;

UINT FUNC_18(ADMIN *VAR_11, RPC_SET_GROUP *VAR_12)
{
 SERVER *VAR_13 = VAR_11->Server;
 CEDAR *VAR_14 = VAR_13->Cedar;
 HUB *VAR_15 = ((void*)0);
 UINT VAR_16 = VAR_7;

 if (FUNC_9(VAR_12->Name) || FUNC_10(VAR_12->Name) == 0)
 {
  return VAR_3;
 }

 if (VAR_13->ServerType == VAR_10)
 {
  return VAR_5;
 }

 VAR_0;

 VAR_9;
 if (VAR_13->ServerType == VAR_10)
 {
  return VAR_6;
 }

 FUNC_12(VAR_14);
 {
  VAR_15 = FUNC_5(VAR_14, VAR_12->HubName);
 }
 FUNC_17(VAR_14);

 if (VAR_15 == ((void*)0))
 {
  return VAR_2;
 }

 if (VAR_11->ServerAdmin == 0 && FUNC_6(VAR_15, "no_change_groups") != 0)
 {
  FUNC_15(VAR_15);
  return VAR_4;
 }

 FUNC_3(VAR_15);
 {
  if (FUNC_2(VAR_15, VAR_12->Name))
  {
   VAR_16 = VAR_1;
  }
  else
  {
   USERGROUP *VAR_17 = FUNC_13(VAR_12->Name, VAR_12->Realname, VAR_12->Note);
   FUNC_16(VAR_17, VAR_12->Policy);

   if ((FUNC_11(VAR_15->HubDb->GroupList) >= FUNC_7(VAR_11->Server, "i_max_users_per_hub")) ||
    ((FUNC_6(VAR_15, "max_groups") != 0) && (FUNC_11(VAR_15->HubDb->GroupList) >= FUNC_6(VAR_15, "max_groups"))))
   {
    VAR_16 = VAR_8;
   }
   else
   {
    FUNC_1(VAR_15, VAR_17);
   }

   FUNC_14(VAR_17);

   FUNC_0(VAR_11, VAR_15, "LA_CREATE_GROUP", VAR_12->Name);
  }
 }
 FUNC_4(VAR_15);

 FUNC_15(VAR_15);

 FUNC_8(VAR_13);

 return VAR_16;
}
