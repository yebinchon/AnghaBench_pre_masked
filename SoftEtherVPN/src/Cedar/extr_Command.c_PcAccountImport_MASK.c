
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int name ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_21__ {int (* Write ) (TYPE_5__*,int *) ;} ;
struct TYPE_20__ {char* member_0; int * member_4; int member_3; int * member_2; int member_1; } ;
struct TYPE_19__ {int RemoteClient; } ;
struct TYPE_18__ {TYPE_1__* ClientOption; } ;
struct TYPE_17__ {int AccountName; } ;
typedef TYPE_2__ RPC_CLIENT_CREATE_ACCOUNT ;
typedef TYPE_3__ PC ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef TYPE_5__ CONSOLE ;
typedef int BUF ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int,int ) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int VAR_5 ;
 int * FUNC_9 (TYPE_5__*,char*,int *,TYPE_4__*,int) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int *,int *) ;
 int FUNC_12 (int ,int,int *) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (TYPE_5__*,int *) ;
 int FUNC_15 (TYPE_5__*,int *) ;
 int FUNC_16 (TYPE_5__*,int *) ;

UINT FUNC_17(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PC *VAR_11 = (PC *)VAR_9;
 UINT VAR_12 = VAR_4;
 BUF *VAR_13;
 wchar_t VAR_14[VAR_5];

 PARAM VAR_15[] =
 {
  {"[path]", &VAR_1, *FUNC_13("CMD_AccountImport_PROMPT_PATH"), &VAR_0, ((void*)0)},
 };


 VAR_10 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_3;
 }


 VAR_13 = FUNC_10(FUNC_8(VAR_10, "[path]"));

 if (VAR_13 == ((void*)0))
 {

  VAR_6->Write(VAR_6, FUNC_13("CMD_LOADFILE_FAILED"));
  VAR_12 = VAR_2;
 }
 else
 {
  RPC_CLIENT_CREATE_ACCOUNT *VAR_16;

  VAR_16 = FUNC_1(VAR_13);

  if (VAR_16 == ((void*)0))
  {

   VAR_6->Write(VAR_6, FUNC_13("CMD_AccountImport_FAILED_PARSE"));
   VAR_12 = VAR_2;
  }
  else
  {
   FUNC_3(VAR_11->RemoteClient, VAR_14, sizeof(VAR_14), VAR_16->ClientOption->AccountName);
   FUNC_12(VAR_16->ClientOption->AccountName, sizeof(VAR_16->ClientOption->AccountName), VAR_14);

   VAR_12 = FUNC_0(VAR_11->RemoteClient, VAR_16);

   if (VAR_12 == VAR_4)
   {
    wchar_t VAR_17[VAR_5];

    FUNC_11(VAR_17, sizeof(VAR_17), FUNC_13("CMD_AccountImport_OK"), VAR_14);
    VAR_6->Write(VAR_6, VAR_17);
   }

   FUNC_2(VAR_16);
   FUNC_5(VAR_16);
  }

  FUNC_6(VAR_13);
 }

 if (VAR_12 != VAR_4)
 {

  FUNC_4(VAR_6, VAR_12);
 }


 FUNC_7(VAR_10);

 return VAR_12;
}
