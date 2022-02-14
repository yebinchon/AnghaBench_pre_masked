
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_21__ {int Size; scalar_t__ Buf; } ;
struct TYPE_20__ {int (* Write ) (TYPE_3__*,char*) ;} ;
struct TYPE_19__ {char* member_0; char* member_2; int * member_4; int * member_3; int * member_1; } ;
struct TYPE_18__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef TYPE_2__ PARAM ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;
typedef int BYTE ;
typedef TYPE_4__ BUF ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_4__* FUNC_1 (int ,char*,char*,int ,int *,int *) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int * FUNC_8 (TYPE_3__*,char*,char*,TYPE_2__*,int) ;
 int FUNC_9 (char*,int,char*,int ) ;
 int FUNC_10 (char*,scalar_t__,int *,int ) ;
 char* FUNC_11 (scalar_t__) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (TYPE_3__*,char*) ;
 int FUNC_14 (TYPE_3__*,char*) ;
 int FUNC_15 (TYPE_3__*,char*) ;
 int FUNC_16 (TYPE_3__*,char*) ;
 int FUNC_17 (TYPE_3__*,char*) ;
 int FUNC_18 (TYPE_3__*,char*) ;
 int FUNC_19 (TYPE_3__*,char*) ;

UINT FUNC_20(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 BUF *VAR_12;
 char *VAR_13 = ((void*)0);
 char *VAR_14;

 PARAM VAR_15[] =
 {

  {"[name]", VAR_1, FUNC_12("CMD_LogFileGet_PROMPT_NAME"), VAR_0, ((void*)0)},
  {"SERVER", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"SAVEPATH", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };

 VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_15, sizeof(VAR_15) / sizeof(VAR_15[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 VAR_13 = FUNC_6(VAR_9, "SAVE");
 if (FUNC_7(VAR_13))
 {
  VAR_13 = FUNC_6(VAR_9, "SAVEPATH");
 }

 VAR_5->Write(VAR_5, FUNC_12("CMD_LogFileGet_START"));

 VAR_14 = FUNC_6(VAR_9, "SERVER");

 VAR_12 = FUNC_1(VAR_10->Rpc, VAR_14,
  FUNC_6(VAR_9, "[name]"), 0, ((void*)0), ((void*)0));

 if (VAR_12 == ((void*)0))
 {
  VAR_5->Write(VAR_5, FUNC_12("CMD_LogFileGet_FAILED"));

  VAR_11 = VAR_2;
 }
 else
 {
  if (FUNC_7(VAR_13) == 0)
  {

   if (FUNC_2(VAR_12, VAR_13) == 0)
   {
    VAR_11 = VAR_2;
    VAR_5->Write(VAR_5, FUNC_12("CMD_LogFileGet_SAVE_FAILED"));
   }
  }
  else
  {

   wchar_t VAR_16[VAR_4];
   UINT VAR_17;
   wchar_t *VAR_18;

   FUNC_9(VAR_16, sizeof(VAR_16), FUNC_12("CMD_LogFileGet_FILESIZE"),
    VAR_12->Size);
   VAR_5->Write(VAR_5, VAR_16);
   VAR_5->Write(VAR_5, L"");

   VAR_17 = FUNC_0((BYTE *)VAR_12->Buf, VAR_12->Size);
   VAR_18 = FUNC_11(VAR_17 + 32);

   FUNC_10(VAR_18, VAR_17, (BYTE *)VAR_12->Buf, VAR_12->Size);

   VAR_5->Write(VAR_5, VAR_18);
   VAR_5->Write(VAR_5, L"");

   FUNC_3(VAR_18);
  }

  FUNC_4(VAR_12);
 }

 FUNC_5(VAR_9);

 return VAR_11;
}
