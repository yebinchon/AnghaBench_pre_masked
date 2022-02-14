
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Password; int UserName; int HubName; int Id; } ;
typedef int PACK ;
typedef TYPE_1__ ETHERIP_ID ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(ETHERIP_ID *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(ETHERIP_ID));

 FUNC_0(VAR_1, "Id", VAR_0->Id, sizeof(VAR_0->Id));
 FUNC_0(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_0(VAR_1, "UserName", VAR_0->UserName, sizeof(VAR_0->UserName));
 FUNC_0(VAR_1, "Password", VAR_0->Password, sizeof(VAR_0->Password));
}
