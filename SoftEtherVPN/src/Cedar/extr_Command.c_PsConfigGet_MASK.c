
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int args ;
struct TYPE_20__ {scalar_t__ NumTokens; char** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef scalar_t__ UINT ;
struct TYPE_24__ {int (* Write ) (TYPE_5__*,char*) ;} ;
struct TYPE_23__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_22__ {int Rpc; } ;
struct TYPE_21__ {scalar_t__ FileData; int FileName; } ;
typedef TYPE_2__ RPC_CONFIG ;
typedef TYPE_3__ PS ;
typedef TYPE_4__ PARAM ;
typedef int LIST ;
typedef int IO ;
typedef TYPE_5__ CONSOLE ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 char* FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_3 ;
 int * FUNC_10 (TYPE_5__*,char*,char*,TYPE_4__*,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,int,char*,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (char*) ;
 int FUNC_16 (char*,scalar_t__,int *,int ) ;
 int FUNC_17 (TYPE_2__*,int) ;
 char* FUNC_18 (scalar_t__) ;
 char* FUNC_19 (char*) ;
 int FUNC_20 (TYPE_5__*,char*) ;
 int FUNC_21 (TYPE_5__*,char*) ;
 int FUNC_22 (TYPE_5__*,char*) ;
 int FUNC_23 (TYPE_5__*,char*) ;
 int FUNC_24 (TYPE_5__*,char*) ;

UINT FUNC_25(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 RPC_CONFIG VAR_11;

 PARAM VAR_12[] =
 {

  {"[path]", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_8 = FUNC_10(VAR_4, VAR_5, VAR_6, VAR_12, sizeof(VAR_12) / sizeof(VAR_12[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_17(&VAR_11, sizeof(VAR_11));


 VAR_10 = FUNC_11(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_2)
 {

  FUNC_1(VAR_4, VAR_10);
  FUNC_6(VAR_8);
  return VAR_10;
 }
 else
 {
  wchar_t *VAR_13 = FUNC_8(VAR_8, "[path]");

  if (FUNC_9(VAR_13))
  {

   wchar_t VAR_14[VAR_3];
   UINT VAR_15;
   wchar_t *VAR_16;
   UNI_TOKEN_LIST *VAR_17;

   FUNC_13(VAR_14, sizeof(VAR_14), FUNC_19("CMD_ConfigGet_FILENAME"), VAR_11.FileName,
    FUNC_12(VAR_11.FileData));
   VAR_4->Write(VAR_4, VAR_14);
   VAR_4->Write(VAR_4, L"");

   VAR_15 = FUNC_0((BYTE *)VAR_11.FileData, FUNC_12(VAR_11.FileData));
   VAR_16 = FUNC_18(VAR_15 + 32);

   FUNC_16(VAR_16, VAR_15, (BYTE *)VAR_11.FileData, FUNC_12(VAR_11.FileData));

   VAR_17 = FUNC_15(VAR_16);
   if (VAR_17 != ((void*)0))
   {
    UINT VAR_18;

    for (VAR_18 = 0;VAR_18 < VAR_17->NumTokens;VAR_18++)
    {
     VAR_4->Write(VAR_4, VAR_17->Token[VAR_18]);
    }

    FUNC_14(VAR_17);
   }

   VAR_4->Write(VAR_4, L"");

   FUNC_5(VAR_16);
  }
  else
  {

   IO *VAR_19 = FUNC_3(VAR_13);

   if (VAR_19 == ((void*)0))
   {
    VAR_4->Write(VAR_4, FUNC_19("CMD_ConfigGet_FILE_SAVE_FAILED"));

    VAR_10 = VAR_0;
   }
   else
   {
    FUNC_4(VAR_19, VAR_11.FileData, FUNC_12(VAR_11.FileData));
    FUNC_2(VAR_19);
   }
  }
 }

 FUNC_7(&VAR_11);

 FUNC_6(VAR_8);

 return VAR_10;
}
