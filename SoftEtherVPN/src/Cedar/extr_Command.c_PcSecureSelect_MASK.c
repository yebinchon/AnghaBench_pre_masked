
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {char* member_0; int * member_4; int * member_3; int member_2; int member_1; } ;
struct TYPE_8__ {int RemoteClient; } ;
struct TYPE_7__ {int DeviceId; } ;
typedef TYPE_1__ RPC_USE_SECURE ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef int CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int *,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*) ;

UINT FUNC_7(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PC *VAR_8 = (PC *)VAR_6;
 UINT VAR_9 = VAR_2;
 RPC_USE_SECURE VAR_10;

 PARAM VAR_11[] =
 {
  {"[id]", &VAR_0, FUNC_6("CMD_SecureSelect_PROMPT_ID"), ((void*)0), ((void*)0)},
 };


 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_11, sizeof(VAR_11) / sizeof(VAR_11[0]));
 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }


 FUNC_5(&VAR_10, sizeof(VAR_10));
 VAR_10.DeviceId = FUNC_3(VAR_7, "[id]");

 VAR_9 = FUNC_0(VAR_8->RemoteClient, &VAR_10);

 if (VAR_9 == VAR_2)
 {

 }

 if (VAR_9 != VAR_2)
 {

  FUNC_1(VAR_3, VAR_9);
 }


 FUNC_2(VAR_7);

 return VAR_9;
}
