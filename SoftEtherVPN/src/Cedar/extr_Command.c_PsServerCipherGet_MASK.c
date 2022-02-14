
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_22__ {int (* Write ) (TYPE_4__*,char*) ;} ;
struct TYPE_21__ {int Rpc; } ;
struct TYPE_20__ {int String; } ;
struct TYPE_19__ {scalar_t__ NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_STR ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (TYPE_4__*,char*,char*,int *,int ) ;
 TYPE_1__* FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 int FUNC_8 (char*,int,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int FUNC_14 (TYPE_4__*,char*) ;
 int FUNC_15 (TYPE_4__*,char*) ;

UINT FUNC_16(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 RPC_STR VAR_9;
 TOKEN_LIST *VAR_10;
 UINT VAR_11;
 wchar_t VAR_12[4096];

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_9(&VAR_9, sizeof(VAR_9));


 VAR_8 = FUNC_6(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_8(VAR_12, sizeof(VAR_12), L" %S", VAR_9.String);
 FUNC_2(&VAR_9);
 FUNC_9(&VAR_9, sizeof(RPC_STR));

 VAR_2->Write(VAR_2, FUNC_10("CMD_ServerCipherGet_SERVER"));
 VAR_2->Write(VAR_2, VAR_12);

 VAR_8 = FUNC_7(VAR_7->Rpc, &VAR_9);

 if (VAR_8 == VAR_1)
 {
  VAR_10 = FUNC_5(VAR_9.String, ";");

  FUNC_2(&VAR_9);

  VAR_2->Write(VAR_2, L"");
  VAR_2->Write(VAR_2, FUNC_10("CMD_ServerCipherGet_CIPHERS"));

  for (VAR_11 = 0; VAR_11 < VAR_10->NumTokens; VAR_11++)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), L" %S", VAR_10->Token[VAR_11]);
   VAR_2->Write(VAR_2, VAR_12);
  }

  FUNC_3(VAR_10);
 }

 FUNC_1(VAR_6);

 return 0;
}
