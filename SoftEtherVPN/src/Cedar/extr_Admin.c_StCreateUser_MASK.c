
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int USERGROUP ;
struct TYPE_32__ {int ExpireTime; } ;
typedef TYPE_3__ USER ;
typedef scalar_t__ UINT ;
struct TYPE_37__ {int ServerAdmin; TYPE_4__* Server; } ;
struct TYPE_36__ {TYPE_1__* UserX; } ;
struct TYPE_35__ {TYPE_2__* HubDb; } ;
struct TYPE_34__ {scalar_t__ AuthType; int Name; int GroupName; int Policy; int ExpireTime; TYPE_7__* AuthData; int Note; int Realname; int HubName; } ;
struct TYPE_33__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_31__ {int UserList; } ;
struct TYPE_30__ {int is_compatible_bit; } ;
typedef TYPE_4__ SERVER ;
typedef TYPE_5__ RPC_SET_USER ;
typedef TYPE_6__ HUB ;
typedef int CEDAR ;
typedef TYPE_7__ AUTHUSERCERT ;
typedef TYPE_8__ ADMIN ;


 int FUNC_0 (TYPE_8__*,TYPE_6__*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,TYPE_3__*) ;
 int * FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_7__*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_6__* FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int VAR_18 ;
 TYPE_3__* FUNC_17 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_6__*) ;
 int FUNC_20 (TYPE_3__*) ;
 scalar_t__ VAR_19 ;
 int FUNC_21 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_22 (TYPE_4__*,int) ;
 scalar_t__ FUNC_23 (int ,char*) ;
 scalar_t__ FUNC_24 (int ) ;
 int FUNC_25 (int *) ;

UINT FUNC_26(ADMIN *VAR_20, RPC_SET_USER *VAR_21)
{
 SERVER *VAR_22 = VAR_20->Server;
 CEDAR *VAR_23 = VAR_22->Cedar;
 HUB *VAR_24 = ((void*)0);
 UINT VAR_25 = VAR_13;
 USER *VAR_26;
 USERGROUP *VAR_27 = ((void*)0);


 if (FUNC_12(VAR_21->Name) || FUNC_13(VAR_21->Name) == 0)
 {
  return VAR_8;
 }

 VAR_18;
 if (VAR_22->ServerType == VAR_19)
 {
  return VAR_11;
 }

 VAR_4;

 if (FUNC_7(VAR_17) != 0)
 {
  if (VAR_21->AuthType == VAR_3 || VAR_21->AuthType == VAR_1 || VAR_21->AuthType == VAR_2 || VAR_21->AuthType == VAR_0)
  {
   return VAR_12;
  }
 }

 if (VAR_21->AuthType == VAR_3)
 {
  AUTHUSERCERT *VAR_28 = VAR_21->AuthData;
  if (VAR_28 != ((void*)0) && VAR_28->UserX != ((void*)0) &&
   VAR_28->UserX->is_compatible_bit == 0)
  {
   return VAR_10;
  }
  if (VAR_28 == ((void*)0) || VAR_28->UserX == ((void*)0))
  {
   return VAR_8;
  }
 }

 if (FUNC_13(VAR_21->Name) == 0)
 {
  return VAR_8;
 }

 if (FUNC_23(VAR_21->Name, "*") == 0)
 {
  if (VAR_21->AuthType != VAR_1 && VAR_21->AuthType != VAR_0)
  {
   return VAR_8;
  }
 }

 FUNC_16(VAR_23);
 {
  VAR_24 = FUNC_8(VAR_23, VAR_21->HubName);
 }
 FUNC_25(VAR_23);

 if (VAR_24 == ((void*)0))
 {
  return VAR_6;
 }

 if (VAR_20->ServerAdmin == 0 && FUNC_9(VAR_24, "no_change_users") != 0)
 {
  FUNC_19(VAR_24);
  return VAR_9;
 }

 VAR_26 = FUNC_17(VAR_21->Name, VAR_21->Realname, VAR_21->Note, VAR_21->AuthType, FUNC_6(VAR_21->AuthData, VAR_21->AuthType));
 if (VAR_26 == ((void*)0))
 {
  FUNC_19(VAR_24);
  return VAR_7;
 }

 VAR_26->ExpireTime = VAR_21->ExpireTime;

 FUNC_21(VAR_26, VAR_21->Policy);

 FUNC_4(VAR_24);
 {
  if ((FUNC_15(VAR_24->HubDb->UserList) >= FUNC_10(VAR_20->Server, "i_max_users_per_hub")) ||
   ((FUNC_9(VAR_24, "max_users") != 0) && (FUNC_15(VAR_24->HubDb->UserList) >= FUNC_9(VAR_24, "max_users"))))
  {
   VAR_25 = VAR_14;
  }
  else if (FUNC_22(VAR_22, 0))
  {
   VAR_25 = VAR_15;
   FUNC_0(VAR_20, VAR_24, "ERR_128");
  }
  else if (FUNC_3(VAR_24, VAR_21->Name))
  {
   VAR_25 = VAR_16;
  }
  else
  {
   if (FUNC_24(VAR_21->GroupName) != 0)
   {
    VAR_27 = FUNC_2(VAR_24, VAR_21->GroupName);
    if (VAR_27 == ((void*)0))
    {
     VAR_25 = VAR_5;
    }
   }

   if (VAR_25 != VAR_5)
   {
    if (VAR_27 != ((void*)0))
    {
     FUNC_14(VAR_26, VAR_27);
     FUNC_18(VAR_27);
    }

    FUNC_1(VAR_24, VAR_26);
    FUNC_0(VAR_20, VAR_24, "LA_CREATE_USER", VAR_21->Name);

    FUNC_11(VAR_22);
   }
  }
 }
 FUNC_5(VAR_24);

 FUNC_20(VAR_26);

 FUNC_19(VAR_24);

 return VAR_25;
}
