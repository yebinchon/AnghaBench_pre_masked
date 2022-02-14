
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Password; int UserName; int HubName; int Id; } ;
typedef int PACK ;
typedef TYPE_1__ ETHERIP_ID ;


 int FUNC_0 (int *,char*,int ) ;

void FUNC_1(PACK *VAR_0, ETHERIP_ID *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "Id", VAR_1->Id);
 FUNC_0(VAR_0, "HubName", VAR_1->HubName);
 FUNC_0(VAR_0, "UserName", VAR_1->UserName);
 FUNC_0(VAR_0, "Password", VAR_1->Password);
}
