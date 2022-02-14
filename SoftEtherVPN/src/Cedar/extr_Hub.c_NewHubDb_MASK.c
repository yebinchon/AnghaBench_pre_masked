
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AcList; void* CrlList; void* RootCertList; void* UserList; void* GroupList; } ;
typedef TYPE_1__ HUBDB ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

HUBDB *FUNC_3()
{
 HUBDB *VAR_3 = FUNC_2(sizeof(HUBDB));

 VAR_3->GroupList = FUNC_1(VAR_1);
 VAR_3->UserList = FUNC_1(VAR_2);
 VAR_3->RootCertList = FUNC_1(VAR_0);
 VAR_3->CrlList = FUNC_1(((void*)0));
 VAR_3->AcList = FUNC_0();

 return VAR_3;
}
