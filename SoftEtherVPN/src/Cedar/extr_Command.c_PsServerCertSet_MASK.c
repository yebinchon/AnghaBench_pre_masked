
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef int args ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_18__ {char* member_0; char* member_2; int * member_4; int member_3; int member_1; } ;
struct TYPE_17__ {int Rpc; } ;
struct TYPE_16__ {scalar_t__ Flag1; int Key; int Cert; } ;
typedef TYPE_1__ RPC_KEY_PAIR ;
typedef TYPE_2__ PS ;
typedef TYPE_3__ PARAM ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (TYPE_4__*,char*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_4__*,char*) ;
 int FUNC_10 (TYPE_4__*,char*) ;
 int FUNC_11 (TYPE_4__*,char*) ;

UINT FUNC_12(CONSOLE *VAR_5, char *VAR_6, wchar_t *VAR_7, void *VAR_8)
{
 LIST *VAR_9;
 PS *VAR_10 = (PS *)VAR_8;
 UINT VAR_11 = 0;
 RPC_KEY_PAIR VAR_12;

 PARAM VAR_13[] =
 {

  {"LOADCERT", VAR_1, FUNC_8("CMD_LOADCERTPATH"), VAR_0, ((void*)0)},
  {"LOADKEY", VAR_1, FUNC_8("CMD_LOADKEYPATH"), VAR_0, ((void*)0)},
 };

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_13, sizeof(VAR_13) / sizeof(VAR_13[0]));
 if (VAR_9 == ((void*)0))
 {
  return VAR_3;
 }

 FUNC_7(&VAR_12, sizeof(VAR_12));

 if (FUNC_0(VAR_5, &VAR_12.Cert, &VAR_12.Key,
  FUNC_4(VAR_9, "LOADCERT"),
  FUNC_4(VAR_9, "LOADKEY")))
 {

  VAR_11 = FUNC_6(VAR_10->Rpc, &VAR_12);

  if (VAR_11 != VAR_4)
  {

   FUNC_1(VAR_5, VAR_11);
   FUNC_2(VAR_9);
   return VAR_11;
  }

  if (VAR_12.Flag1 == 0)
  {

   VAR_5->Write(VAR_5, L"");
   VAR_5->Write(VAR_5, FUNC_8("SM_CERT_NEED_ROOT"));
   VAR_5->Write(VAR_5, L"");
  }

  FUNC_3(&VAR_12);
 }
 else
 {
  VAR_11 = VAR_2;
 }

 FUNC_2(VAR_9);

 return VAR_11;
}
