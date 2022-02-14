
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_15__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_14__ {int * HubName; int Rpc; } ;
struct TYPE_13__ {int HubName; } ;
typedef TYPE_1__ RPC_HUB_STATUS ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int *,int,int *,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_4__*,int *) ;

UINT FUNC_14(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_HUB_STATUS VAR_10;

 PARAM VAR_11[] =
 {

  {"[name]", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_11, sizeof(VAR_11) / sizeof(VAR_11[0]));
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 if (FUNC_5(FUNC_4(VAR_7, "[name]")) == 0)
 {
  wchar_t VAR_12[VAR_2];
  FUNC_10(&VAR_10, sizeof(VAR_10));


  FUNC_8(VAR_10.HubName, sizeof(VAR_10.HubName), FUNC_4(VAR_7, "[name]"));


  VAR_9 = FUNC_7(VAR_8->Rpc, &VAR_10);

  if (VAR_9 != VAR_1)
  {

   FUNC_0(VAR_3, VAR_9);
   FUNC_3(VAR_7);
   return VAR_9;
  }


  if (VAR_8->HubName != ((void*)0))
  {
   FUNC_2(VAR_8->HubName);
  }
  VAR_8->HubName = FUNC_1(VAR_10.HubName);

  FUNC_9(VAR_12, sizeof(VAR_12), FUNC_11("CMD_Hub_Selected"), VAR_10.HubName);
  VAR_3->Write(VAR_3, VAR_12);
 }
 else
 {

  if (VAR_8->HubName != ((void*)0))
  {
   VAR_3->Write(VAR_3, FUNC_11("CMD_Hub_Unselected"));
   FUNC_2(VAR_8->HubName);
  }
  VAR_8->HubName = ((void*)0);
 }

 FUNC_3(VAR_7);

 return 0;
}
