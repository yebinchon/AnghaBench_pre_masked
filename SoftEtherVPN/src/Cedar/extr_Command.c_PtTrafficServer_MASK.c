
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* ReadLine ) (TYPE_3__*,char*,int) ;int (* Write ) (TYPE_3__*,int ) ;} ;
struct TYPE_14__ {char* member_0; int * member_4; int * member_3; int * member_2; int * member_1; } ;
struct TYPE_13__ {scalar_t__ ErrorCode; } ;
typedef TYPE_1__ TTS ;
typedef TYPE_2__ PARAM ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 TYPE_1__* FUNC_6 (scalar_t__,TYPE_3__*,int ) ;
 int * FUNC_7 (TYPE_3__*,char*,int *,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,char*,int) ;

UINT FUNC_12(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 UINT VAR_9 = VAR_1;
 UINT VAR_10;
 bool VAR_11;
 TTS *VAR_12;
 PARAM VAR_13[] =
 {
  {"[port]", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"NOHUP", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_10 = FUNC_4(VAR_8, "[port]");
 if (VAR_10 == 0)
 {
  VAR_10 = VAR_3;
 }

 VAR_11 = FUNC_5(VAR_8, "nohup");

 VAR_12 = FUNC_6(VAR_10, VAR_4, VAR_2);

 if (VAR_11)
 {
  while (1)
  {
   FUNC_8(10000);
  }
 }

 VAR_4->Write(VAR_4, FUNC_9("TTS_ENTER_TO_EXIT"));

 FUNC_1(VAR_4->ReadLine(VAR_4, L"", 1));

 VAR_9 = VAR_12->ErrorCode;

 FUNC_3(VAR_12);

 if (VAR_9 != VAR_1)
 {
  FUNC_0(VAR_4, VAR_9);
 }


 FUNC_2(VAR_8);

 return VAR_9;
}
