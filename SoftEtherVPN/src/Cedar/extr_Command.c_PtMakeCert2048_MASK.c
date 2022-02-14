
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int args ;
typedef int X_SERIAL ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int Size; int Buf; } ;
struct TYPE_17__ {char* member_0; int member_2; int member_1; } ;
struct TYPE_16__ {int (* Write ) (TYPE_2__*,int *) ;} ;
struct TYPE_15__ {char* member_0; TYPE_3__* member_4; int * member_3; int * member_2; int * member_1; } ;
typedef TYPE_1__ PARAM ;
typedef int NAME ;
typedef int LIST ;
typedef int K ;
typedef TYPE_2__ CONSOLE ;
typedef TYPE_3__ CMD_EVAL_MIN_MAX ;
typedef TYPE_4__ BUF ;


 int FUNC_0 (int *,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_2 (int ,int,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,int,int *) ;
 int * FUNC_15 (int ,int ,int ,int ,int ,int ) ;
 int * FUNC_16 (int *,int *,int *,scalar_t__,int *) ;
 int * FUNC_17 (int *,int *,int *,int *,scalar_t__,int *) ;
 int * FUNC_18 (int ,int) ;
 int * FUNC_19 (TYPE_2__*,char*,int *,TYPE_1__*,int) ;
 int FUNC_20 (int **,int **,int) ;
 TYPE_4__* FUNC_21 (int ) ;
 int FUNC_22 (int *,int ,int) ;
 int * FUNC_23 (char*) ;
 int FUNC_24 (TYPE_2__*,int *) ;
 int FUNC_25 (TYPE_2__*,int *) ;
 int FUNC_26 (TYPE_2__*,int *) ;
 int FUNC_27 (TYPE_2__*,int *) ;

UINT FUNC_28(CONSOLE *VAR_7, char *VAR_8, wchar_t *VAR_9, void *VAR_10)
{
 LIST *VAR_11;
 UINT VAR_12 = VAR_6;
 X *VAR_13 = ((void*)0);
 K *VAR_14 = ((void*)0);
 K *VAR_15 = ((void*)0);
 NAME *VAR_16;
 X_SERIAL *VAR_17 = ((void*)0);
 BUF *VAR_18;
 UINT VAR_19;
 X *VAR_20 = ((void*)0);
 K *VAR_21 = ((void*)0);

 CMD_EVAL_MIN_MAX VAR_22 =
 {
  "CMD_MakeCert_EVAL_EXPIRES",
  0,
  10950,
 };
 PARAM VAR_23[] =
 {
  {"CN", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_CN"), ((void*)0), ((void*)0)},
  {"O", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_O"), ((void*)0), ((void*)0)},
  {"OU", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_OU"), ((void*)0), ((void*)0)},
  {"C", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_C"), ((void*)0), ((void*)0)},
  {"ST", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_ST"), ((void*)0), ((void*)0)},
  {"L", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_L"), ((void*)0), ((void*)0)},
  {"SERIAL", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_SERIAL"), ((void*)0), ((void*)0)},
  {"EXPIRES", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_EXPIRES"), VAR_1, &VAR_22},
  {"SIGNCERT", ((void*)0), ((void*)0), VAR_0, ((void*)0)},
  {"SIGNKEY", ((void*)0), ((void*)0), VAR_0, ((void*)0)},
  {"SAVECERT", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_SAVECERT"), VAR_2, ((void*)0)},
  {"SAVEKEY", VAR_3, FUNC_23("CMD_MakeCert_PROMPT_SAVEKEY"), VAR_2, ((void*)0)},
 };


 VAR_11 = FUNC_19(VAR_7, VAR_8, VAR_9, VAR_23, sizeof(VAR_23) / sizeof(VAR_23[0]));
 if (VAR_11 == ((void*)0))
 {
  return VAR_5;
 }

 if (FUNC_13(FUNC_11(VAR_11, "SIGNCERT")) == 0 && FUNC_13(FUNC_11(VAR_11, "SIGNKEY")) == 0)
 {
  VAR_20 = FUNC_3(FUNC_12(VAR_11, "SIGNCERT"));
  VAR_21 = FUNC_2(FUNC_12(VAR_11, "SIGNKEY"), 1, ((void*)0));

  if (VAR_20 == ((void*)0) || VAR_21 == ((void*)0) || FUNC_0(VAR_20, VAR_21) == 0)
  {
   VAR_12 = VAR_4;

   VAR_7->Write(VAR_7, FUNC_23("CMD_MakeCert_ERROR_SIGNKEY"));
  }
 }

 if (VAR_12 == VAR_6)
 {
  VAR_18 = FUNC_21(FUNC_11(VAR_11, "SERIAL"));
  if (VAR_18 != ((void*)0) && VAR_18->Size >= 1)
  {
   VAR_17 = FUNC_18(VAR_18->Buf, VAR_18->Size);
  }
  FUNC_4(VAR_18);

  VAR_16 = FUNC_15(FUNC_12(VAR_11, "CN"), FUNC_12(VAR_11, "O"), FUNC_12(VAR_11, "OU"),
   FUNC_12(VAR_11, "C"), FUNC_12(VAR_11, "ST"), FUNC_12(VAR_11, "L"));

  VAR_19 = FUNC_10(VAR_11, "EXPIRES");
  if (VAR_19 == 0)
  {
   VAR_19 = 3650;
  }

  FUNC_20(&VAR_15, &VAR_14, 2048);

  if (VAR_20 == ((void*)0))
  {
   VAR_13 = FUNC_16(VAR_14, VAR_15, VAR_16, VAR_19, VAR_17);
  }
  else
  {
   VAR_13 = FUNC_17(VAR_14, VAR_21, VAR_20, VAR_16, VAR_19, VAR_17);
  }

  FUNC_9(VAR_17);
  FUNC_6(VAR_16);

  if (VAR_13 == ((void*)0))
  {
   VAR_12 = VAR_4;
   VAR_7->Write(VAR_7, FUNC_23("CMD_MakeCert_ERROR_GEN_FAILED"));
  }
  else
  {
   if (FUNC_22(VAR_13, FUNC_12(VAR_11, "SAVECERT"), 1) == 0)
   {
    VAR_7->Write(VAR_7, FUNC_23("CMD_SAVECERT_FAILED"));
   }
   else if (FUNC_14(VAR_15, FUNC_12(VAR_11, "SAVEKEY"), 1, ((void*)0)) == 0)
   {
    VAR_7->Write(VAR_7, FUNC_23("CMD_SAVEKEY_FAILED"));
   }
  }
 }

 if (VAR_12 != VAR_6)
 {

  FUNC_1(VAR_7, VAR_12);
 }


 FUNC_7(VAR_11);

 FUNC_8(VAR_20);
 FUNC_5(VAR_21);

 FUNC_8(VAR_13);
 FUNC_5(VAR_15);
 FUNC_5(VAR_14);

 return VAR_12;
}
