
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Active; void* TableList; void* IfList; int * Cedar; int ref; int lock; int Name; } ;
typedef TYPE_1__ L3SW ;
typedef int CEDAR ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*) ;
 TYPE_1__* FUNC_4 (int) ;

L3SW *FUNC_5(CEDAR *VAR_2, char *VAR_3)
{
 L3SW *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(sizeof(L3SW));

 FUNC_3(VAR_4->Name, sizeof(VAR_4->Name), VAR_3);

 VAR_4->lock = FUNC_1();
 VAR_4->ref = FUNC_2();
 VAR_4->Cedar = VAR_2;
 VAR_4->Active = 0;

 VAR_4->IfList = FUNC_0(VAR_0);
 VAR_4->TableList = FUNC_0(VAR_1);

 return VAR_4;
}
