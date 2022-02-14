
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_15__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int RemoteClient; } ;
struct TYPE_13__ {int x; int Key; } ;
typedef TYPE_1__ RPC_GET_CA ;
typedef TYPE_2__ PC ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,int ) ;

UINT FUNC_11(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PC *VAR_10 = (PC *)VAR_8;
 UINT VAR_11 = VAR_4;
 RPC_GET_CA VAR_12;

 PARAM VAR_13[] =
 {
  {"[id]", &VAR_1, FUNC_9("CMD_CAGet_PROMPT_ID"), VAR_0, ((void*)0)},
  {"SAVECERT", &VAR_1, FUNC_9("CMD_CAGet_PROMPT_SAVECERT"), VAR_0, ((void*)0)},
 };


 VAR_9 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }


 FUNC_8(&VAR_12, sizeof(VAR_12));
 VAR_12.Key = FUNC_4(VAR_9, "[id]");

 VAR_11 = FUNC_0(VAR_10->RemoteClient, &VAR_12);

 if (VAR_11 == VAR_4)
 {

  if (FUNC_7(VAR_12.x, FUNC_5(VAR_9, "SAVECERT"), 1))
  {

  }
  else
  {

   VAR_11 = VAR_2;
   VAR_5->Write(VAR_5, FUNC_9("CMD_MSG_SAVE_CERT_FAILED"));
  }

  FUNC_1(&VAR_12);
 }

 if (VAR_11 != VAR_4)
 {

  FUNC_2(VAR_5, VAR_11);
 }


 FUNC_3(VAR_9);

 return VAR_11;
}
