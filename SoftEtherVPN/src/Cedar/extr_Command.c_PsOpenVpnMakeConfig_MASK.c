
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
typedef int filename ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_15__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_14__ {int Rpc; } ;
struct TYPE_13__ {int Buffer; } ;
typedef TYPE_1__ RPC_READ_LOG_FILE ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int VAR_5 ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int FUNC_9 (int *,int,char*) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_4__*,int *) ;

UINT FUNC_14(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_READ_LOG_FILE VAR_13;

 PARAM VAR_14[] =
 {

  {"[ZIP_FileName]", &VAR_1, FUNC_12("CMD_OpenVpnMakeConfig_Prompt_ZIP"), VAR_0, ((void*)0)},
 };

 VAR_10 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_10 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_11(&VAR_13, sizeof(VAR_13));


 VAR_12 = FUNC_6(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_4)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_2(VAR_10);
  return VAR_12;
 }
 else
 {

  wchar_t VAR_15[VAR_5];
  wchar_t VAR_16[VAR_5];

  FUNC_10(VAR_15, sizeof(VAR_15), FUNC_4(VAR_10, "[ZIP_FileName]"));

  if (FUNC_7(VAR_15, L".zip") == 0)
  {
   FUNC_9(VAR_15, sizeof(VAR_15), L".zip");
  }

  if (FUNC_1(VAR_13.Buffer, VAR_15) == 0)
  {
   VAR_12 = VAR_2;

   FUNC_8(VAR_16, sizeof(VAR_16), FUNC_12("CMD_OpenVpnMakeConfig_ERROR"), VAR_15);
  }
  else
  {
   FUNC_8(VAR_16, sizeof(VAR_16), FUNC_12("CMD_OpenVpnMakeConfig_OK"), VAR_15);
  }

  VAR_6->Write(VAR_6, VAR_16);

  FUNC_3(&VAR_13);
 }

 FUNC_2(VAR_10);

 return VAR_12;
}
