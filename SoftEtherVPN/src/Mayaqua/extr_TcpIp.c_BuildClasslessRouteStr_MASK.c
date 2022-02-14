
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Exists; int Gateway; int SubnetMask; int Network; } ;
typedef TYPE_1__ DHCP_CLASSLESS_ROUTE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,char*,int *,int *,int *) ;

void FUNC_2(char *VAR_0, UINT VAR_1, DHCP_CLASSLESS_ROUTE *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_2->Exists == 0)
 {
  return;
 }

 FUNC_1(VAR_0, VAR_1, "%r/%r/%r", &VAR_2->Network, &VAR_2->SubnetMask, &VAR_2->Gateway);
}
