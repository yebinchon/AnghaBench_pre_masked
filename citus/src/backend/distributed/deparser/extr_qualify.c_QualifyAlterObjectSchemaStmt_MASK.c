
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objectType; } ;
typedef TYPE_1__ AlterObjectSchemaStmt ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(AlterObjectSchemaStmt *VAR_0)
{
 switch (VAR_0->objectType)
 {
  case 128:
  {
   FUNC_1(VAR_0);
   return;
  }

  case 130:
  case 129:
  {
   FUNC_0(VAR_0);
  }

  default:
  {

   break;
  }
 }
}
