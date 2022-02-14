
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int result ;
typedef int args ;
typedef unsigned long long UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {char* member_0; int member_2; int member_1; } ;
struct TYPE_15__ {scalar_t__ ConsoleType; int * Param; int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_14__ {int * InBuf; } ;
struct TYPE_13__ {char* member_0; TYPE_4__* member_4; int * member_3; int * member_2; int * member_1; } ;
typedef int TT_RESULT ;
typedef int TTC ;
typedef TYPE_1__ PARAM ;
typedef TYPE_2__ LOCAL_CONSOLE_PARAM ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;
typedef TYPE_4__ CMD_EVAL_MIN_MAX ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int * FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__,unsigned long long,int,int,int ,TYPE_3__*) ;
 int * FUNC_8 (TYPE_3__*,char*,int *,TYPE_1__*,int) ;
 int FUNC_9 (char*,char**,scalar_t__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (int *,int) ;
 int * FUNC_14 (char*) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (TYPE_3__*,int *) ;

UINT FUNC_17(CONSOLE *VAR_14, char *VAR_15, wchar_t *VAR_16, void *VAR_17)
{
 TTC *VAR_18;
 LIST *VAR_19;
 UINT VAR_20 = VAR_5;
 char *VAR_21 = ((void*)0);
 UINT VAR_22;
 UINT VAR_23, VAR_24;
 bool VAR_25 = 0, VAR_26 = 0;
 UINT64 VAR_27;

 CMD_EVAL_MIN_MAX VAR_28 =
 {
  "CMD_TrafficClient_EVAL_NUMTCP",
  0, VAR_9,
 };
 PARAM VAR_29[] =
 {
  {"[host:port]", VAR_3, FUNC_14("CMD_TrafficClient_PROMPT_HOST"), VAR_2, ((void*)0)},
  {"NUMTCP", ((void*)0), ((void*)0), VAR_1, &VAR_28},
  {"TYPE", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"SPAN", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"DOUBLE", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
  {"RAW", ((void*)0), ((void*)0), ((void*)0), ((void*)0)},
 };


 VAR_19 = FUNC_8(VAR_14, VAR_15, VAR_16, VAR_29, sizeof(VAR_29) / sizeof(VAR_29[0]));
 if (VAR_19 == ((void*)0))
 {
  return VAR_4;
 }

 if (FUNC_9(FUNC_5(VAR_19, "[host:port]"), &VAR_21, &VAR_22, VAR_7) == 0)
 {
  VAR_14->Write(VAR_14, FUNC_14("CMD_TrafficClient_ERROR_HOSTPORT"));
  VAR_20 = VAR_4;
 }
 else
 {
  char *VAR_30;
  UINT VAR_31;

  FUNC_11(VAR_21);

  VAR_23 = FUNC_4(VAR_19, "NUMTCP");
  if (VAR_23 == 0)
  {
   VAR_23 = VAR_8;
  }
  VAR_30 = FUNC_5(VAR_19, "TYPE");

  if (FUNC_10("download", VAR_30))
  {
   VAR_24 = VAR_11;
  }
  else if (FUNC_10("upload", VAR_30))
  {
   VAR_24 = VAR_13;
  }
  else
  {
   VAR_24 = VAR_12;
  }

  VAR_31 = FUNC_4(VAR_19, "SPAN");

  if (VAR_31 == 0)
  {
   VAR_31 = VAR_10;
  }

  VAR_27 = (UINT64)VAR_31 * 1000ULL;

  VAR_25 = FUNC_6(VAR_19, "DOUBLE");
  VAR_26 = FUNC_6(VAR_19, "RAW");

  if (VAR_24 == VAR_12)
  {
   if ((VAR_23 % 2) != 0)
   {
    VAR_20 = VAR_4;
    VAR_14->Write(VAR_14, FUNC_14("CMD_TrafficClient_ERROR_NUMTCP"));
   }
  }

  if (VAR_20 == VAR_5)
  {
   TT_RESULT VAR_32;
   VAR_18 = FUNC_7(VAR_21, VAR_22, VAR_23, VAR_24, VAR_27, VAR_25, VAR_26, VAR_6, VAR_14);

   if (VAR_14->ConsoleType == VAR_0)
   {
    if (VAR_14->Param != ((void*)0) && (((LOCAL_CONSOLE_PARAM *)VAR_14->Param)->InBuf == ((void*)0)))
    {



    }
   }


   FUNC_13(&VAR_32, sizeof(VAR_32));
   VAR_20 = FUNC_3(VAR_18, &VAR_32);

   if (VAR_20 == VAR_5)
   {
    FUNC_12(VAR_14, &VAR_32);
   }
  }
 }

 if (VAR_20 != VAR_5)
 {
  FUNC_0(VAR_14, VAR_20);
 }


 FUNC_2(VAR_19);

 FUNC_1(VAR_21);

 return VAR_20;
}
