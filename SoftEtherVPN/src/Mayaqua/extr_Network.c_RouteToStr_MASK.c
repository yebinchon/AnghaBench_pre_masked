
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gateway_ip ;
typedef int dest_mask ;
typedef int dest_ip ;
typedef int UINT ;
struct TYPE_3__ {int PPPConnection; int LocalRouting; int InterfaceID; int OldIfMetric; int Metric; int GatewayIP; int DestMask; int DestIP; } ;
typedef TYPE_1__ ROUTE_ENTRY ;


 int FUNC_0 (char*,int ,char*,char*,char*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,int *) ;
 int VAR_0 ;

void FUNC_2(char *VAR_1, UINT VAR_2, ROUTE_ENTRY *VAR_3)
{
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];
 char VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_4, sizeof(VAR_4), &VAR_3->DestIP);
 FUNC_1(VAR_5, sizeof(VAR_5), &VAR_3->DestMask);
 FUNC_1(VAR_6, sizeof(VAR_6), &VAR_3->GatewayIP);

 FUNC_0(VAR_1, VAR_2, "%s/%s %s m=%u oif=%u if=%u lo=%u p=%u",
  VAR_4, VAR_5, VAR_6,
  VAR_3->Metric, VAR_3->OldIfMetric, VAR_3->InterfaceID,
  VAR_3->LocalRouting, VAR_3->PPPConnection);
}
