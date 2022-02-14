
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int SubnetMask; int IpAddress; int HubName; } ;
struct TYPE_6__ {int TableList; int IfList; int Active; } ;
struct TYPE_5__ {int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
typedef TYPE_1__ L3TABLE ;
typedef TYPE_2__ L3SW ;
typedef TYPE_3__ L3IF ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int,char*,scalar_t__) ;
 void* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_0 ;

void FUNC_8(FOLDER *VAR_1, L3SW *VAR_2)
{
 UINT VAR_3;
 FOLDER *VAR_4, *VAR_5;
 char VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_1, "Active", VAR_2->Active);


 VAR_4 = FUNC_4(VAR_1, "InterfaceList");
 for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_2->IfList);VAR_3++)
 {
  L3IF *VAR_7 = FUNC_6(VAR_2->IfList, VAR_3);
  FOLDER *VAR_8;

  FUNC_5(VAR_6, sizeof(VAR_6), "Interface%u", VAR_3);
  VAR_8 = FUNC_4(VAR_4, VAR_6);

  FUNC_3(VAR_8, "HubName", VAR_7->HubName);
  FUNC_2(VAR_8, "IpAddress", VAR_7->IpAddress);
  FUNC_2(VAR_8, "SubnetMask", VAR_7->SubnetMask);
 }


 VAR_5 = FUNC_4(VAR_1, "RoutingTable");
 for (VAR_3 = 0;VAR_3 < FUNC_7(VAR_2->TableList);VAR_3++)
 {
  L3TABLE *VAR_9 = FUNC_6(VAR_2->TableList, VAR_3);
  FOLDER *VAR_10;

  FUNC_5(VAR_6, sizeof(VAR_6), "Entry%u", VAR_3);
  VAR_10 = FUNC_4(VAR_5, VAR_6);

  FUNC_2(VAR_10, "NetworkAddress", VAR_9->NetworkAddress);
  FUNC_2(VAR_10, "SubnetMask", VAR_9->SubnetMask);
  FUNC_2(VAR_10, "GatewayAddress", VAR_9->GatewayAddress);
  FUNC_1(VAR_10, "Metric", VAR_9->Metric);
 }
}
