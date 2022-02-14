
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int USERGROUP ;
struct TYPE_18__ {int lock; int UpdatedTime; int ExpireTime; void* Note; void* RealName; } ;
typedef TYPE_2__ USER ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int ServerAdmin; TYPE_3__* Server; } ;
struct TYPE_21__ {TYPE_1__* UserX; } ;
struct TYPE_20__ {scalar_t__ AuthType; int Name; int Policy; int ExpireTime; TYPE_5__* AuthData; int Note; int Realname; int GroupName; int HubName; } ;
struct TYPE_19__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_17__ {int is_compatible_bit; } ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_SET_USER ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_5__ AUTHUSERCERT ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,int *,char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (void*) ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int VAR_15 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ VAR_16 ;
 int FUNC_19 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 () ;
 void* FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int *) ;

UINT FUNC_27(ADMIN *VAR_17, RPC_SET_USER *VAR_18)
{
 SERVER *VAR_19 = VAR_17->Server;
 CEDAR *VAR_20 = VAR_19->Cedar;
 HUB *VAR_21 = ((void*)0);
 UINT VAR_22 = VAR_12;
 USER *VAR_23 = ((void*)0);
 USERGROUP *VAR_24 = ((void*)0);


 if (FUNC_11(VAR_18->Name) || FUNC_12(VAR_18->Name) == 0)
 {
  return VAR_7;
 }

 VAR_15;
 if (VAR_19->ServerType == VAR_16)
 {
  return VAR_10;
 }

 VAR_4;

 if (FUNC_7(VAR_14) != 0)
 {
  if (VAR_18->AuthType == VAR_3 || VAR_18->AuthType == VAR_1 || VAR_18->AuthType == VAR_2 || VAR_18->AuthType == VAR_0)
  {
   return VAR_11;
  }
 }

 if (FUNC_21(VAR_18->Name, "*") == 0)
 {
  if (VAR_18->AuthType != VAR_1 && VAR_18->AuthType != VAR_0)
  {
   return VAR_7;
  }
 }

 if (VAR_18->AuthType == VAR_3)
 {
  AUTHUSERCERT *VAR_25 = VAR_18->AuthData;
  if (VAR_25 != ((void*)0) && VAR_25->UserX != ((void*)0) &&
   VAR_25->UserX->is_compatible_bit == 0)
  {
   return VAR_9;
  }
  if (VAR_25 == ((void*)0) || VAR_25->UserX == ((void*)0))
  {
   return VAR_7;
  }
 }

 FUNC_15(VAR_20);
 {
  VAR_21 = FUNC_8(VAR_20, VAR_18->HubName);
 }
 FUNC_26(VAR_20);

 if (VAR_21 == ((void*)0))
 {
  return VAR_6;
 }

 if (VAR_17->ServerAdmin == 0 && FUNC_9(VAR_21, "no_change_users") != 0)
 {
  FUNC_17(VAR_21);
  return VAR_8;
 }

 FUNC_3(VAR_21);
 {
  VAR_23 = FUNC_2(VAR_21, VAR_18->Name);
  if (VAR_23 == ((void*)0))
  {
   VAR_22 = VAR_13;
  }
  else
  {
   FUNC_14(VAR_23->lock);
   {
    if (FUNC_22(VAR_18->GroupName) != 0)
    {
     VAR_24 = FUNC_1(VAR_21, VAR_18->GroupName);

     if (VAR_24 != ((void*)0))
     {
      FUNC_13(VAR_23, VAR_24);
      FUNC_16(VAR_24);
     }
     else
     {
      VAR_22 = VAR_5;
     }
    }
    else
    {
     FUNC_13(VAR_23, ((void*)0));
    }

    if (VAR_22 != VAR_5)
    {
     FUNC_6(VAR_23->RealName);
     FUNC_6(VAR_23->Note);
     VAR_23->RealName = FUNC_24(VAR_18->Realname);
     VAR_23->Note = FUNC_24(VAR_18->Note);
     FUNC_19(VAR_23, VAR_18->AuthType, FUNC_5(VAR_18->AuthData, VAR_18->AuthType));
     VAR_23->ExpireTime = VAR_18->ExpireTime;
     VAR_23->UpdatedTime = FUNC_23();

     FUNC_20(VAR_23, VAR_18->Policy);
    }
   }
   FUNC_25(VAR_23->lock);

   FUNC_10(VAR_19);

   FUNC_18(VAR_23);
  }
 }
 FUNC_4(VAR_21);

 if (VAR_22 == VAR_12)
 {
  FUNC_0(VAR_17, VAR_21, "LA_SET_USER", VAR_18->Name);
 }

 FUNC_17(VAR_21);

 return VAR_22;
}
