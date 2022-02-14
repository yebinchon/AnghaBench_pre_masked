
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int NumExistingRoutes; } ;
struct TYPE_14__ {int ClasslessRoute; int BroadcastAddress; int DefaultGateway; int SubnetMask; int ClientIPAddress; } ;
typedef TYPE_1__ IPC ;
typedef TYPE_2__ IP ;
typedef TYPE_2__ DHCP_CLASSLESS_ROUTE_TABLE ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

bool FUNC_6(IPC *VAR_0, IP *VAR_1, IP *VAR_2, IP *VAR_3, DHCP_CLASSLESS_ROUTE_TABLE *VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(&VAR_0->ClientIPAddress, VAR_1) != 0)
 {
  VAR_5 = 1;
 }
 FUNC_2(&VAR_0->ClientIPAddress, VAR_1, sizeof(IP));

 if (FUNC_1(&VAR_0->SubnetMask, VAR_2) != 0)
 {
  VAR_5 = 1;
 }
 FUNC_2(&VAR_0->SubnetMask, VAR_2, sizeof(IP));

 if (VAR_3 != ((void*)0))
 {
  if (FUNC_1(&VAR_0->DefaultGateway, VAR_3) != 0)
  {
   VAR_5 = 1;
  }

  FUNC_2(&VAR_0->DefaultGateway, VAR_3, sizeof(IP));
 }
 else
 {
  if (FUNC_4(&VAR_0->DefaultGateway) == 0)
  {
   VAR_5 = 1;
  }

  FUNC_5(&VAR_0->DefaultGateway, sizeof(IP));
 }

 FUNC_3(&VAR_0->BroadcastAddress, VAR_1, VAR_2);

 if (VAR_4 != ((void*)0) && VAR_4->NumExistingRoutes >= 1)
 {
  if (FUNC_0(&VAR_0->ClasslessRoute, VAR_4, sizeof(DHCP_CLASSLESS_ROUTE_TABLE)) != 0)
  {
   VAR_5 = 1;

   FUNC_2(&VAR_0->ClasslessRoute, VAR_4, sizeof(DHCP_CLASSLESS_ROUTE_TABLE));
  }
 }

 return VAR_5;
}
