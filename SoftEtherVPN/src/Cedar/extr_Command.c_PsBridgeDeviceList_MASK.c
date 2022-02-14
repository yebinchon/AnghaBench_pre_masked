
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int (* Write ) (TYPE_4__*,int *) ;} ;
struct TYPE_14__ {int Rpc; } ;
struct TYPE_13__ {scalar_t__ NumItem; TYPE_1__* Items; } ;
struct TYPE_12__ {int DeviceName; } ;
typedef TYPE_1__ RPC_ENUM_ETH_ITEM ;
typedef TYPE_2__ RPC_ENUM_ETH ;
typedef TYPE_3__ PS ;
typedef int LIST ;
typedef TYPE_4__ CONSOLE ;


 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_3 (TYPE_4__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_4__*,int *) ;

UINT FUNC_8(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 RPC_ENUM_ETH VAR_10;
 UINT VAR_11;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_6(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_4(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_1(VAR_7);
  return VAR_9;
 }

 for (VAR_11 = 0;VAR_11 < VAR_10.NumItem;VAR_11++)
 {
  RPC_ENUM_ETH_ITEM *VAR_12 = &VAR_10.Items[VAR_11];
  wchar_t VAR_13[VAR_2 * 2];

  FUNC_5(VAR_13, sizeof(VAR_13), VAR_12->DeviceName);
  VAR_3->Write(VAR_3, VAR_13);
 }

 FUNC_2(&VAR_10);

 FUNC_1(VAR_7);

 return 0;
}
