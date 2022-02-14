
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_5__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; int * HubName; } ;
struct TYPE_16__ {scalar_t__ NumItem; int HubName; TYPE_1__* Items; } ;
struct TYPE_15__ {int Value; int Name; } ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_5__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ADMIN_OPTION VAR_12;

 PARAM VAR_13[] =
 {

  {"[name]", &VAR_1, FUNC_11("CMD_AdminOptionSet_Prompt_name"), VAR_0, ((void*)0)},
  {"VALUE", &VAR_1, FUNC_11("CMD_AdminOptionSet_Prompt_VALUE"), VAR_0, ((void*)0)},
 };


 if (VAR_10->HubName == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_11("CMD_Hub_Not_Selected"));
  return VAR_2;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_2;
 }

 FUNC_10(&VAR_12, sizeof(VAR_12));
 FUNC_9(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);


 VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_3)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_1(VAR_9);
  return VAR_11;
 }
 else
 {
  UINT VAR_14;
  bool VAR_15 = 0;

  for (VAR_14 = 0;VAR_14 < VAR_12.NumItem;VAR_14++)
  {
   if (FUNC_8(VAR_12.Items[VAR_14].Name, FUNC_4(VAR_9, "[name]")) == 0)
   {
    VAR_12.Items[VAR_14].Value = FUNC_3(VAR_9, "VALUE");
    VAR_15 = 1;
   }
  }

  if (VAR_15 == 0)
  {

   VAR_11 = VAR_4;
   FUNC_0(VAR_5, VAR_11);
   FUNC_1(VAR_9);
   FUNC_2(&VAR_12);
   return VAR_11;
  }
  else
  {
   FUNC_9(VAR_12.HubName, sizeof(VAR_12.HubName), VAR_10->HubName);
   VAR_11 = FUNC_7(VAR_10->Rpc, &VAR_12);

   if (VAR_11 != VAR_3)
   {

    FUNC_0(VAR_5, VAR_11);
    FUNC_1(VAR_9);
    return VAR_11;
   }
  }
 }

 FUNC_2(&VAR_12);

 FUNC_1(VAR_9);

 return 0;
}
