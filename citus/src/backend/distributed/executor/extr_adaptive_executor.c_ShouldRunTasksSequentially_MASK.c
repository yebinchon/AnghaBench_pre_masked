
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rowValuesLists; } ;
typedef TYPE_1__ Task ;
typedef int List ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(List *VAR_1)
{
 Task *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_1) < 2)
 {

  return 0;
 }


 VAR_2 = (Task *) FUNC_0(VAR_1);
 if (VAR_2->rowValuesLists != VAR_0)
 {

  return 1;
 }

 return 0;
}
