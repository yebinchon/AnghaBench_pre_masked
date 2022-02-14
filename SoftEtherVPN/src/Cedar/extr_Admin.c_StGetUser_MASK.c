
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int name ;
typedef int hubname ;
typedef int USERGROUP ;
struct TYPE_11__ {char* GroupName; int lock; int * Policy; int Traffic; int NumLogin; int AuthData; int AuthType; int ExpireTime; int UpdatedTime; int CreatedTime; int Note; int RealName; } ;
typedef TYPE_1__ USER ;
typedef int UINT ;
struct TYPE_14__ {TYPE_2__* Server; } ;
struct TYPE_13__ {char* Name; char* HubName; char* GroupName; int Policy; int Traffic; int NumLogin; int AuthType; int AuthData; int ExpireTime; int UpdatedTime; int CreatedTime; int Note; int Realname; } ;
struct TYPE_12__ {scalar_t__ ServerType; int * Cedar; } ;
typedef int TRAFFIC ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_SET_USER ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_3__*) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (int ,int,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*,int) ;

UINT FUNC_19(ADMIN *VAR_10, RPC_SET_USER *VAR_11)
{
 SERVER *VAR_12 = VAR_10->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14 = ((void*)0);
 UINT VAR_15 = VAR_4;
 USER *VAR_16 = ((void*)0);
 USERGROUP *VAR_17 = ((void*)0);
 char VAR_18[VAR_7 + 1];
 char VAR_19[VAR_6 + 1];
 FUNC_14(VAR_18, sizeof(VAR_18), VAR_11->Name);
 FUNC_14(VAR_19, sizeof(VAR_19), VAR_11->HubName);

 if (FUNC_8(VAR_11->Name) || FUNC_9(VAR_11->Name) == 0)
 {
  return VAR_2;
 }

 VAR_0;
 VAR_8;
 if (VAR_12->ServerType == VAR_9)
 {
  return VAR_3;
 }

 FUNC_6(VAR_11);
 FUNC_18(VAR_11, sizeof(RPC_SET_USER));
 FUNC_14(VAR_11->HubName, sizeof(VAR_11->HubName), VAR_19);
 FUNC_14(VAR_11->Name, sizeof(VAR_11->Name), VAR_18);

 FUNC_11(VAR_13);
 {
  VAR_14 = FUNC_7(VAR_13, VAR_19);
 }
 FUNC_17(VAR_13);

 if (VAR_14 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_1(VAR_14);
 {
  VAR_16 = FUNC_0(VAR_14, VAR_18);
  if (VAR_16 == ((void*)0))
  {
   VAR_15 = VAR_5;
  }
  else
  {
   FUNC_10(VAR_16->lock);
   {
    FUNC_14(VAR_11->GroupName, sizeof(VAR_11->GroupName), VAR_16->GroupName);
    FUNC_15(VAR_11->Realname, sizeof(VAR_11->Realname), VAR_16->RealName);
    FUNC_15(VAR_11->Note, sizeof(VAR_11->Note), VAR_16->Note);
    VAR_11->CreatedTime = VAR_16->CreatedTime;
    VAR_11->UpdatedTime = VAR_16->UpdatedTime;
    VAR_11->ExpireTime = VAR_16->ExpireTime;

    VAR_11->AuthType = VAR_16->AuthType;
    VAR_11->AuthData = FUNC_5(VAR_16->AuthData, VAR_11->AuthType);
    VAR_11->NumLogin = VAR_16->NumLogin;
    FUNC_4(&VAR_11->Traffic, VAR_16->Traffic, sizeof(TRAFFIC));
    if (VAR_16->Policy != ((void*)0))
    {
     VAR_11->Policy = FUNC_3(VAR_16->Policy);
    }
   }
   FUNC_16(VAR_16->lock);

   FUNC_13(VAR_16);
  }
 }
 FUNC_2(VAR_14);

 FUNC_12(VAR_14);

 return VAR_15;
}
