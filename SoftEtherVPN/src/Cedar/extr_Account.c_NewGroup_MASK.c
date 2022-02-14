
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int Traffic; int * Policy; void* Note; void* RealName; int Name; int ref; int lock; } ;
typedef TYPE_1__ USERGROUP ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;

USERGROUP *FUNC_6(char *VAR_0, wchar_t *VAR_1, wchar_t *VAR_2)
{
 USERGROUP *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_5(sizeof(USERGROUP));
 VAR_3->lock = FUNC_2();
 VAR_3->ref = FUNC_3();
 VAR_3->Name = FUNC_0(VAR_0);
 VAR_3->RealName = FUNC_1(VAR_1);
 VAR_3->Note = FUNC_1(VAR_2);
 VAR_3->Policy = ((void*)0);
 VAR_3->Traffic = FUNC_4();

 return VAR_3;
}
