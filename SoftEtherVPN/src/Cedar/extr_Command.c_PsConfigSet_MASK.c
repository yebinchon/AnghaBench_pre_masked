
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {scalar_t__ Size; int Buf; } ;
struct TYPE_19__ {int (* Write ) (TYPE_4__*,int ) ;} ;
struct TYPE_18__ {char* member_0; int * member_4; int member_3; int member_2; int member_1; } ;
struct TYPE_17__ {int Rpc; } ;
struct TYPE_16__ {int FileData; } ;
typedef TYPE_1__ RPC_CONFIG ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;
typedef TYPE_5__ BUF ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 TYPE_5__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_4__*,int ) ;

UINT FUNC_13(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_CONFIG VAR_11;
 wchar_t *VAR_12;
 BUF *VAR_13;

 PARAM VAR_14[] =
 {

  {"[path]", &VAR_1, FUNC_11("CMD_ConfigSet_PROMPT_PATH"), VAR_0, ((void*)0)},
 };

 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_14, sizeof(VAR_14) / sizeof(VAR_14[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_2;
 }

 VAR_12 = FUNC_5(VAR_8, "[path]");

 VAR_13 = FUNC_7(VAR_12);
 if (VAR_13 == ((void*)0))
 {
  VAR_4->Write(VAR_4, FUNC_11("CMD_ConfigSet_FILE_LOAD_FAILED"));
 }
 else
 {
  FUNC_9(&VAR_11, sizeof(VAR_11));

  VAR_11.FileData = FUNC_10(VAR_13->Size + 1);
  FUNC_1(VAR_11.FileData, VAR_13->Buf, VAR_13->Size);
  FUNC_2(VAR_13);


  VAR_10 = FUNC_8(VAR_9->Rpc, &VAR_11);

  if (VAR_10 != VAR_3)
  {

   FUNC_0(VAR_4, VAR_10);
   FUNC_3(VAR_8);
   return VAR_10;
  }

  FUNC_4(&VAR_11);
 }

 FUNC_3(VAR_8);

 return 0;
}
