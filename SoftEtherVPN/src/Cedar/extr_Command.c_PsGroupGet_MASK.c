
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int groupname ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_29__ {int (* Write ) (TYPE_6__*,char*) ;} ;
struct TYPE_28__ {char* member_0; char* member_2; int * member_4; int member_3; int member_1; } ;
struct TYPE_27__ {char* HubName; int Rpc; } ;
struct TYPE_26__ {int Name; int GroupName; } ;
struct TYPE_25__ {char* HubName; char* Name; char* Realname; char* Note; scalar_t__ NumUser; TYPE_2__* Users; int * Policy; } ;
typedef TYPE_1__ RPC_SET_GROUP ;
typedef TYPE_2__ RPC_ENUM_USER_ITEM ;
typedef TYPE_1__ RPC_ENUM_USER ;
typedef TYPE_4__ PS ;
typedef TYPE_5__ PARAM ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_6__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_8 (TYPE_6__*,char*,char*,TYPE_5__*,int) ;
 int FUNC_9 (TYPE_6__*,int *,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,int,char*) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (char*,int,char*,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (TYPE_6__*,char*) ;
 int FUNC_19 (TYPE_6__*,char*) ;
 int FUNC_20 (TYPE_6__*,char*) ;
 int FUNC_21 (TYPE_6__*,char*) ;
 int FUNC_22 (TYPE_6__*,char*) ;
 int FUNC_23 (TYPE_6__*,char*) ;
 int FUNC_24 (TYPE_6__*,char*) ;

UINT FUNC_25(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_SET_GROUP VAR_13;

 PARAM VAR_14[] =
 {

  {"[name]", VAR_1, FUNC_17("CMD_GroupCreate_Prompt_NAME"), VAR_0, ((void*)0)},
 };


 if (VAR_11->HubName == ((void*)0))
 {
  VAR_6->Write(VAR_6, FUNC_17("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_10 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_16(&VAR_13, sizeof(VAR_13));
 FUNC_13(VAR_13.HubName, sizeof(VAR_13.HubName), VAR_11->HubName);
 FUNC_13(VAR_13.Name, sizeof(VAR_13.Name), FUNC_7(VAR_10, "[name]"));


 VAR_12 = FUNC_11(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_3)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_4(VAR_10);
  return VAR_12;
 }
 else
 {
  wchar_t VAR_15[VAR_4];
  char VAR_16[VAR_5 + 1];
  CT *VAR_17 = FUNC_3();

  FUNC_13(VAR_16, sizeof(VAR_16), VAR_13.Name);

  FUNC_14(VAR_15, sizeof(VAR_15), VAR_13.Name);
  FUNC_2(VAR_17, FUNC_17("CMD_GroupGet_Column_NAME"), VAR_15);
  FUNC_2(VAR_17, FUNC_17("CMD_GroupGet_Column_REALNAME"), VAR_13.Realname);
  FUNC_2(VAR_17, FUNC_17("CMD_GroupGet_Column_NOTE"), VAR_13.Note);

  FUNC_1(VAR_17, VAR_6);

  if (VAR_13.Policy != ((void*)0))
  {
   VAR_6->Write(VAR_6, L"");
   VAR_6->Write(VAR_6, FUNC_17("CMD_GroupGet_Column_POLICY"));

   FUNC_9(VAR_6, VAR_13.Policy, 0);
  }

  {
   RPC_ENUM_USER VAR_18;
   bool VAR_19 = 0;

   FUNC_16(&VAR_18, sizeof(VAR_18));

   FUNC_13(VAR_18.HubName, sizeof(VAR_18.HubName), VAR_11->HubName);

   if (FUNC_10(VAR_11->Rpc, &VAR_18) == VAR_3)
   {
    UINT VAR_20;

    for (VAR_20 = 0;VAR_20 < VAR_18.NumUser;VAR_20++)
    {
     RPC_ENUM_USER_ITEM *VAR_21 = &VAR_18.Users[VAR_20];

     if (FUNC_12(VAR_21->GroupName, VAR_16) == 0)
     {
      if (VAR_19 == 0)
      {
       VAR_19 = 1;
       VAR_6->Write(VAR_6, L"");
       VAR_6->Write(VAR_6, FUNC_17("CMD_GroupGet_Column_MEMBERS"));
      }

      FUNC_15(VAR_15, sizeof(VAR_15), L" %S", VAR_21->Name);
      VAR_6->Write(VAR_6, VAR_15);
     }
    }
    FUNC_5(&VAR_18);

    if (VAR_19)
    {
     VAR_6->Write(VAR_6, L"");
    }
   }
  }

 }

 FUNC_6(&VAR_13);

 FUNC_4(VAR_10);

 return 0;
}
