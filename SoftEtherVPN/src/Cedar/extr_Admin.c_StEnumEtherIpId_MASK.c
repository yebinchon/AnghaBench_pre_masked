
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {TYPE_2__* Server; } ;
struct TYPE_12__ {int NumItem; int * IdList; } ;
struct TYPE_11__ {TYPE_1__* IPsecServer; int * Cedar; } ;
struct TYPE_10__ {int LockSettings; int EtherIPIdList; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_ENUM_ETHERIP_ID ;
typedef int ETHERIP_ID ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int * FUNC_8 (int) ;

UINT FUNC_9(ADMIN *VAR_4, RPC_ENUM_ETHERIP_ID *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;
 VAR_3;
 VAR_2;
 if (FUNC_2(VAR_6, "b_support_ipsec") == 0 || VAR_6->IPsecServer == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_1(VAR_5);
 FUNC_7(VAR_5, sizeof(RPC_ENUM_ETHERIP_ID));

 FUNC_5(VAR_6->IPsecServer->LockSettings);
 {
  UINT VAR_9;
  UINT VAR_10;

  VAR_10 = FUNC_4(VAR_6->IPsecServer->EtherIPIdList);

  VAR_5->NumItem = VAR_10;
  VAR_5->IdList = FUNC_8(sizeof(ETHERIP_ID) * VAR_10);

  for (VAR_9 = 0;VAR_9 < VAR_10;VAR_9++)
  {
   ETHERIP_ID *VAR_11 = &VAR_5->IdList[VAR_9];
   ETHERIP_ID *VAR_12 = FUNC_3(VAR_6->IPsecServer->EtherIPIdList, VAR_9);

   FUNC_0(VAR_11, VAR_12, sizeof(ETHERIP_ID));
  }
 }
 FUNC_6(VAR_6->IPsecServer->LockSettings);

 return VAR_1;
}
