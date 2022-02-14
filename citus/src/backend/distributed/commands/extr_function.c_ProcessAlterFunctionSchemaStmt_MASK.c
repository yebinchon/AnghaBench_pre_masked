
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectType; } ;
typedef int ObjectAddress ;
typedef int Node ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int const*) ;

void
FUNC_4(AlterObjectSchemaStmt *VAR_0, const char *VAR_1)
{
 const ObjectAddress *VAR_2 = ((void*)0);

 FUNC_0(VAR_0->objectType);

 VAR_2 = FUNC_2((Node *) VAR_0, 0);
 if (!FUNC_3(VAR_2))
 {
  return;
 }


 FUNC_1(VAR_2);
}
