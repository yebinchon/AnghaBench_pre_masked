
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AcList; int CrlList; int RootCertList; int GroupList; int UserList; } ;
typedef TYPE_1__ HUBDB ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(FOLDER *VAR_0, HUBDB *VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(FUNC_0(VAR_0, "UserList"), VAR_1->UserList);
 FUNC_4(FUNC_0(VAR_0, "GroupList"), VAR_1->GroupList);
 FUNC_2(FUNC_0(VAR_0, "CertList"), VAR_1->RootCertList);
 FUNC_3(FUNC_0(VAR_0, "CrlList"), VAR_1->CrlList);

 if (VAR_2 == 0)
 {
  FUNC_1(FUNC_0(VAR_0, "IPAccessControlList"), VAR_1->AcList);
 }
}
