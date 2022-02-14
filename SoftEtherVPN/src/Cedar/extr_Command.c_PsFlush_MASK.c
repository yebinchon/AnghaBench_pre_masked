
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef int sizestr ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_12__ {int Rpc; } ;
struct TYPE_11__ {scalar_t__ IntValue; } ;
typedef TYPE_1__ RPC_TEST ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *,int,int *,char*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,int *) ;

UINT FUNC_10(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 if (1)
 {
  RPC_TEST VAR_9;
  UINT VAR_10;
  wchar_t VAR_11[VAR_2];
  char VAR_12[VAR_2];

  VAR_3->Write(VAR_3, FUNC_7("CMD_Flush_Msg1"));

  FUNC_6(&VAR_9, sizeof(VAR_9));

  VAR_10 = FUNC_3(VAR_8->Rpc, &VAR_9);

  if (VAR_10 != VAR_1)
  {

   FUNC_0(VAR_3, VAR_10);
   FUNC_1(VAR_7);
   return VAR_10;
  }

  FUNC_4(VAR_12, sizeof(VAR_12), (UINT64)VAR_9.IntValue);
  FUNC_5(VAR_11, sizeof(VAR_11), FUNC_7("CMD_Flush_Msg2"), VAR_12);
  VAR_3->Write(VAR_3, VAR_11);
 }

 FUNC_1(VAR_7);

 return 0;
}
