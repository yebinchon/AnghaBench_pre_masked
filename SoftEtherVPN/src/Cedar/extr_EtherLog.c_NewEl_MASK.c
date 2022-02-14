
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int AutoDeleteCheckDiskFreeSpaceMin; int Eraser; int LicenseStatus; int LicenseSystem; int Cedar; int ref; int lock; } ;
typedef TYPE_1__ EL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (int) ;

EL *FUNC_10()
{
 EL *VAR_0;





 VAR_0 = FUNC_9(sizeof(EL));
 VAR_0->lock = FUNC_6();
 VAR_0->ref = FUNC_7();

 VAR_0->Cedar = FUNC_4(((void*)0), ((void*)0));



 FUNC_3();


 FUNC_0(VAR_0);


 FUNC_2(VAR_0);


 FUNC_1(VAR_0->LicenseSystem, VAR_0->LicenseStatus);


 VAR_0->Eraser = FUNC_5(((void*)0), VAR_0->AutoDeleteCheckDiskFreeSpaceMin);

 return VAR_0;
}
