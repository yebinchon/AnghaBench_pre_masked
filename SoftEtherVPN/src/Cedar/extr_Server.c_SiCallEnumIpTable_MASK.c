
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {int hostname; } ;
struct TYPE_10__ {size_t NumIpTable; TYPE_1__* IpTables; } ;
struct TYPE_9__ {int RemoteItem; int RemoteHostname; } ;
typedef int SERVER ;
typedef TYPE_2__ RPC_ENUM_IP_TABLE ;
typedef int PACK ;
typedef TYPE_3__ FARM_MEMBER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (TYPE_3__*,int *,char*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

void FUNC_7(SERVER *VAR_0, FARM_MEMBER *VAR_1, char *VAR_2, RPC_ENUM_IP_TABLE *VAR_3)
{
 PACK *VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_2();
 FUNC_3(VAR_4, "HubName", VAR_2);

 VAR_4 = FUNC_4(VAR_1, VAR_4, "enumiptable");

 FUNC_6(VAR_3, sizeof(RPC_ENUM_IP_TABLE));
 FUNC_1(VAR_3, VAR_4);

 for (VAR_5 = 0;VAR_5 < VAR_3->NumIpTable;VAR_5++)
 {
  VAR_3->IpTables[VAR_5].RemoteItem = 1;
  FUNC_5(VAR_3->IpTables[VAR_5].RemoteHostname, sizeof(VAR_3->IpTables[VAR_5].RemoteHostname),
   VAR_1->hostname);
 }

 FUNC_0(VAR_4);
}
