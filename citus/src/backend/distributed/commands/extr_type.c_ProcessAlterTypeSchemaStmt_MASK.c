
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectType; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int const*) ;

void
FUNC_4(AlterObjectSchemaStmt *VAR_1, const char *VAR_2)
{
 const ObjectAddress *VAR_3 = ((void*)0);

 FUNC_0(VAR_1->objectType == VAR_0);

 VAR_3 = FUNC_2((Node *) VAR_1, 0);
 if (!FUNC_3(VAR_3))
 {
  return;
 }


 FUNC_1(VAR_3);
}
