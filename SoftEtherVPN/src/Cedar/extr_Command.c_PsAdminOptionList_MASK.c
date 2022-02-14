
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp1 ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int Name; int Value; } ;
struct TYPE_15__ {int (* Write ) (TYPE_3__*,int ) ;} ;
struct TYPE_14__ {int Rpc; int * HubName; } ;
struct TYPE_13__ {scalar_t__ NumItem; TYPE_4__* Items; int HubName; } ;
typedef TYPE_1__ RPC_ADMIN_OPTION ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef TYPE_3__ CONSOLE ;
typedef TYPE_4__ ADMIN_OPTION ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int * FUNC_7 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_3__*,int ) ;

UINT FUNC_15(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ADMIN_OPTION VAR_10;


 if (VAR_8->HubName == ((void*)0))
 {
  VAR_3->Write(VAR_3, FUNC_13("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_12(&VAR_10, sizeof(VAR_10));
 FUNC_9(VAR_10.HubName, sizeof(VAR_10.HubName), VAR_8->HubName);


 VAR_9 = FUNC_8(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_4(VAR_7);
  return VAR_9;
 }
 else
 {
  CT *VAR_11 = FUNC_3();
  UINT VAR_12;

  for (VAR_12 = 0;VAR_12 < VAR_10.NumItem;VAR_12++)
  {
   ADMIN_OPTION *VAR_13 = &VAR_10.Items[VAR_12];
   wchar_t VAR_14[VAR_2];
   wchar_t VAR_15[VAR_2];

   FUNC_10(VAR_14, sizeof(VAR_14), VAR_13->Name);
   FUNC_11(VAR_15, VAR_13->Value);

   FUNC_2(VAR_11, VAR_14, VAR_15, FUNC_6(VAR_13->Name));

  }

  FUNC_1(VAR_11, VAR_3, 1);
 }

 FUNC_5(&VAR_10);

 FUNC_4(VAR_7);

 return 0;
}
