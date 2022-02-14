
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* HubDb; } ;
struct TYPE_6__ {int AcList; int CrlList; int RootCertList; } ;
typedef TYPE_2__ HUB ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

void FUNC_6(HUB *VAR_0, FOLDER *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0, FUNC_0(VAR_1, "GroupList"));
 FUNC_5(VAR_0, FUNC_0(VAR_1, "UserList"));

 if (VAR_0->HubDb != ((void*)0))
 {
  FUNC_2(VAR_0->HubDb->RootCertList, FUNC_0(VAR_1, "CertList"));
  FUNC_3(VAR_0->HubDb->CrlList, FUNC_0(VAR_1, "CrlList"));
  FUNC_1(VAR_0->HubDb->AcList, FUNC_0(VAR_1, "IPAccessControlList"));
 }
}
