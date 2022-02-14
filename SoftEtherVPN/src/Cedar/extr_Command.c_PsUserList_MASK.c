
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int time ;
typedef int t ;
typedef int num2 ;
typedef int num1 ;
typedef int name ;
typedef int group ;
typedef int exp ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int (* Write ) (TYPE_7__*,int ) ;} ;
struct TYPE_21__ {int Rpc; int * HubName; } ;
struct TYPE_20__ {scalar_t__ NumUser; TYPE_4__* Users; int HubName; } ;
struct TYPE_17__ {scalar_t__ UnicastCount; scalar_t__ BroadcastBytes; scalar_t__ UnicastBytes; } ;
struct TYPE_16__ {scalar_t__ UnicastCount; scalar_t__ BroadcastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastBytes; } ;
struct TYPE_18__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
struct TYPE_19__ {scalar_t__ LastLoginTime; int IsExpiresFilled; scalar_t__ Expires; int IsTrafficFilled; int AuthType; int Note; int Realname; TYPE_3__ Traffic; int NumLogin; int GroupName; int Name; } ;
typedef TYPE_4__ RPC_ENUM_USER_ITEM ;
typedef TYPE_5__ RPC_ENUM_USER ;
typedef TYPE_6__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_7__ CONSOLE ;


 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_7__*,int) ;
 int FUNC_2 (int *,int *,int ,int *,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int VAR_2 ;
 int * FUNC_9 (TYPE_7__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_10 (int ,TYPE_5__*) ;
 int FUNC_11 (int ,int,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,int,int ) ;
 int FUNC_16 (int *,int,scalar_t__) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (TYPE_5__*,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_7__*,int ) ;

UINT FUNC_21(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_USER VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_19("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_9(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_18(&VAR_10, sizeof(VAR_10));
 FUNC_11(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_10(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_5(VAR_7);
  return VAR_9;
 }
 else
 {
  UINT VAR_11;
  CT *VAR_12 = FUNC_4();

  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_1"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_2"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_3"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_4"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_5"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_6"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_USER_COLUMN_7"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_LICENSE_COLUMN_5"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_SESS_COLUMN_6"), 0);
  FUNC_3(VAR_12, FUNC_19("SM_SESS_COLUMN_7"), 0);

  for (VAR_11 = 0;VAR_11 < VAR_10.NumUser;VAR_11++)
  {
   RPC_ENUM_USER_ITEM *VAR_13 = &VAR_10.Users[VAR_11];
   wchar_t VAR_14[VAR_2];
   wchar_t VAR_15[VAR_2];
   wchar_t VAR_16[VAR_2];
   wchar_t VAR_17[VAR_2];
   wchar_t VAR_18[VAR_2];
   wchar_t VAR_19[64], VAR_20[64];

   FUNC_13(VAR_14, sizeof(VAR_14), VAR_13->Name);

   if (FUNC_12(VAR_13->GroupName) != 0)
   {
    FUNC_13(VAR_15, sizeof(VAR_15), VAR_13->GroupName);
   }
   else
   {
    FUNC_15(VAR_15, sizeof(VAR_15), FUNC_19("SM_NO_GROUP"));
   }

   FUNC_17(VAR_16, VAR_13->NumLogin);

   FUNC_8(VAR_17, sizeof(VAR_17), FUNC_14(VAR_13->LastLoginTime), ((void*)0));

   if (VAR_13->IsExpiresFilled == 0)
   {
    FUNC_15(VAR_18, sizeof(VAR_18), FUNC_19("CM_ST_NONE"));
   }
   else
   {
    if (VAR_13->Expires == 0)
    {
     FUNC_15(VAR_18, sizeof(VAR_18), FUNC_19("SM_LICENSE_NO_EXPIRES"));
    }
    else
    {
     FUNC_8(VAR_18, sizeof(VAR_18), FUNC_14(VAR_13->Expires), ((void*)0));
    }
   }

   if (VAR_13->IsTrafficFilled == 0)
   {
    FUNC_15(VAR_19, sizeof(VAR_19), FUNC_19("CM_ST_NONE"));
    FUNC_15(VAR_20, sizeof(VAR_20), FUNC_19("CM_ST_NONE"));
   }
   else
   {
    FUNC_16(VAR_19, sizeof(VAR_19),
     VAR_13->Traffic.Recv.BroadcastBytes + VAR_13->Traffic.Recv.UnicastBytes +
     VAR_13->Traffic.Send.BroadcastBytes + VAR_13->Traffic.Send.UnicastBytes);

    FUNC_16(VAR_20, sizeof(VAR_20),
     VAR_13->Traffic.Recv.BroadcastCount + VAR_13->Traffic.Recv.UnicastCount +
     VAR_13->Traffic.Send.BroadcastBytes + VAR_13->Traffic.Send.UnicastCount);
   }

   FUNC_2(VAR_12,
    VAR_14, VAR_13->Realname, VAR_15, VAR_13->Note, FUNC_7(VAR_13->AuthType),
    VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
  }

  FUNC_1(VAR_12, VAR_3, 1);
 }

 FUNC_6(&VAR_10);

 FUNC_5(VAR_7);

 return 0;
}
