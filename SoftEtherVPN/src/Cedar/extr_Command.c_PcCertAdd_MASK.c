
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_14__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_13__ {int RemoteClient; } ;
struct TYPE_12__ {int * x; } ;
typedef TYPE_1__ RPC_CERT ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_4__*,int ) ;

UINT FUNC_10(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PC *VAR_9 = (PC *)VAR_7;
 UINT VAR_10 = VAR_3;
 RPC_CERT VAR_11;
 X *VAR_12;

 PARAM VAR_13[] =
 {
  {"[path]", &VAR_1, FUNC_8("CMD_CAAdd_PROMPT_PATH"), VAR_0, ((void*)0)},
 };


 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }


 VAR_12 = FUNC_2(FUNC_5(VAR_8, "[path]"));

 if (VAR_12 == ((void*)0))
 {
  FUNC_3(VAR_8);
  VAR_4->Write(VAR_4, FUNC_8("CMD_MSG_LOAD_CERT_FAILED"));
  return VAR_2;
 }


 FUNC_7(&VAR_11, sizeof(VAR_11));
 VAR_11.x = VAR_12;

 VAR_10 = FUNC_0(VAR_9->RemoteClient, &VAR_11);

 if (VAR_10 == VAR_3)
 {

 }

 if (VAR_10 != VAR_3)
 {

  FUNC_1(VAR_4, VAR_10);
 }

 FUNC_4(VAR_12);


 FUNC_3(VAR_8);

 return VAR_10;
}
