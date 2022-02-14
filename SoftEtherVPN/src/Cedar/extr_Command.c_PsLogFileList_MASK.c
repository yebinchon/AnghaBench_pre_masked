
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp4 ;
typedef int tmp3 ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_17__ {int Rpc; } ;
struct TYPE_16__ {scalar_t__ NumItem; TYPE_1__* Items; } ;
struct TYPE_15__ {char* FilePath; char* ServerName; int UpdatedTime; int FileSize; } ;
typedef TYPE_1__ RPC_ENUM_LOG_FILE_ITEM ;
typedef TYPE_2__ RPC_ENUM_LOG_FILE ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;
 int FUNC_2 (int *,char*,char*,char*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_8 (TYPE_4__*,char*,char*,int *,int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int,int ) ;
 int FUNC_13 (char*,int,char*,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int) ;
 char* FUNC_15 (char*) ;
 int FUNC_16 (TYPE_4__*,char*) ;
 int FUNC_17 (TYPE_4__*,char*) ;
 int FUNC_18 (TYPE_4__*,char*) ;

UINT FUNC_19(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_ENUM_LOG_FILE VAR_12;

 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, ((void*)0), 0);
 if (VAR_9 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_14(&VAR_12, sizeof(VAR_12));

 VAR_5->Write(VAR_5, FUNC_15("CMD_LogFileList_START"));
 VAR_5->Write(VAR_5, L"");


 VAR_11 = FUNC_9(VAR_10->Rpc, &VAR_12);

 if (VAR_11 != VAR_1)
 {

  FUNC_0(VAR_5, VAR_11);
  FUNC_5(VAR_9);
  return VAR_11;
 }
 else
 {
  UINT VAR_13;
  wchar_t VAR_14[VAR_4];
  CT *VAR_15;

  FUNC_13(VAR_14, sizeof(VAR_14), FUNC_15("CMD_LogFileList_NUM_LOGS"), VAR_12.NumItem);
  VAR_5->Write(VAR_5, VAR_14);

  VAR_15 = FUNC_4();

  FUNC_3(VAR_15, FUNC_15("SM_LOG_FILE_COLUMN_1"), 0);
  FUNC_3(VAR_15, FUNC_15("SM_LOG_FILE_COLUMN_2"), 1);
  FUNC_3(VAR_15, FUNC_15("SM_LOG_FILE_COLUMN_3"), 0);
  FUNC_3(VAR_15, FUNC_15("SM_LOG_FILE_COLUMN_4"), 0);

  for (VAR_13 = 0;VAR_13 < VAR_12.NumItem;VAR_13++)
  {
   RPC_ENUM_LOG_FILE_ITEM *VAR_16 = &VAR_12.Items[VAR_13];
   wchar_t VAR_17[VAR_3], VAR_18[128], VAR_19[128], VAR_20[VAR_2 + 1];
   char VAR_21[VAR_4];

   FUNC_10(VAR_17, sizeof(VAR_17), VAR_16->FilePath);

   FUNC_12(VAR_21, sizeof(VAR_21), VAR_16->FileSize);
   FUNC_10(VAR_18, sizeof(VAR_18), VAR_21);

   FUNC_7(VAR_19, sizeof(VAR_19), FUNC_11(VAR_16->UpdatedTime));

   FUNC_10(VAR_20, sizeof(VAR_20), VAR_16->ServerName);

   FUNC_2(VAR_15, VAR_17, VAR_18, VAR_19, VAR_20);
  }

  FUNC_1(VAR_15, VAR_5, 1);
 }

 FUNC_6(&VAR_12);

 FUNC_5(VAR_9);

 return 0;
}
