
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int UserClass; } ;
struct TYPE_11__ {TYPE_1__* Option; } ;
struct TYPE_10__ {int HubName; int Cedar; } ;
struct TYPE_9__ {scalar_t__ UseHubNameAsDhcpUserClassOption; } ;
typedef TYPE_2__ IPC ;
typedef TYPE_3__ HUB ;
typedef TYPE_4__ DHCP_OPTION_LIST ;


 TYPE_3__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int,int ) ;

void FUNC_3(IPC *VAR_0, DHCP_OPTION_LIST *VAR_1)
{
 HUB *VAR_2;

 VAR_2 = FUNC_0(VAR_0->Cedar, VAR_0->HubName);
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Option && VAR_2->Option->UseHubNameAsDhcpUserClassOption)
 {
  FUNC_2(VAR_1->UserClass, sizeof(VAR_1->UserClass), VAR_0->HubName);
 }
 FUNC_1(VAR_2);
}
