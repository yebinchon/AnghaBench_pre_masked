
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ objectType; int newschema; scalar_t__ object; } ;
typedef int StringInfo ;
typedef int List ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_2, AlterObjectSchemaStmt *VAR_3)
{
 List *VAR_4 = VAR_0;

 FUNC_0(VAR_3->objectType == VAR_1);

 VAR_4 = (List *) VAR_3->object;
 FUNC_2(VAR_2, "ALTER TYPE %s SET SCHEMA %s;", FUNC_1(VAR_4),
      FUNC_3(VAR_3->newschema));
}
