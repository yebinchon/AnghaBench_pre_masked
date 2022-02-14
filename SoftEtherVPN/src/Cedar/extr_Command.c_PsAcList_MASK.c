
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp3 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_18__ {int Priority; scalar_t__ Deny; int Id; } ;
struct TYPE_17__ {int (* Write ) (TYPE_3__*,int *) ;} ;
struct TYPE_16__ {int Rpc; int * HubName; } ;
struct TYPE_15__ {int o; int HubName; } ;
typedef TYPE_1__ RPC_AC_LIST ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_3__ CONSOLE ;
typedef TYPE_4__ AC ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 char* FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_2 ;
 int * FUNC_11 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ,int,int *) ;
 int FUNC_14 (int *,int,char*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int * FUNC_17 (char*) ;
 int FUNC_18 (TYPE_3__*,int *) ;

UINT FUNC_19(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_AC_LIST VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_17("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_11(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_16(&VAR_10, sizeof(VAR_10));
 FUNC_13(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_12(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_6(VAR_7);
  return VAR_9;
 }
 else
 {
  UINT VAR_11;
  CT *VAR_12;

  VAR_12 = FUNC_4();
  FUNC_3(VAR_12, FUNC_17("SM_AC_COLUMN_1"), 1);
  FUNC_3(VAR_12, FUNC_17("SM_AC_COLUMN_2"), 1);
  FUNC_3(VAR_12, FUNC_17("SM_AC_COLUMN_3"), 0);
  FUNC_3(VAR_12, FUNC_17("SM_AC_COLUMN_4"), 0);

  for (VAR_11 = 0;VAR_11 < FUNC_10(VAR_10.o);VAR_11++)
  {
   wchar_t VAR_13[32], *VAR_14, VAR_15[VAR_2], VAR_16[32];
   char *VAR_17;
   AC *VAR_18 = FUNC_9(VAR_10.o, VAR_11);

   FUNC_15(VAR_13, VAR_18->Id);
   VAR_14 = VAR_18->Deny ? FUNC_17("SM_AC_DENY") : FUNC_17("SM_AC_PASS");
   VAR_17 = FUNC_8(VAR_18);
   FUNC_14(VAR_15, sizeof(VAR_15), VAR_17);

   FUNC_5(VAR_17);

   FUNC_15(VAR_16, VAR_18->Priority);

   FUNC_2(VAR_12, VAR_13, VAR_16, VAR_14, VAR_15);
  }

  FUNC_1(VAR_12, VAR_3);
 }

 FUNC_7(&VAR_10);

 FUNC_6(VAR_7);

 return 0;
}
