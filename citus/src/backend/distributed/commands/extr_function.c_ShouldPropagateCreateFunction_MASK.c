
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int replace; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef TYPE_1__ CreateFunctionStmt ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_2(CreateFunctionStmt *VAR_2)
{
 const ObjectAddress *VAR_3 = ((void*)0);

 if (VAR_1)
 {




  return 0;
 }

 if (!VAR_0)
 {



  return 0;
 }

 if (!VAR_2->replace)
 {




  return 0;
 }





 VAR_3 = FUNC_0((Node *) VAR_2, 1);
 if (!FUNC_1(VAR_3))
 {

  return 0;
 }

 return 1;
}
