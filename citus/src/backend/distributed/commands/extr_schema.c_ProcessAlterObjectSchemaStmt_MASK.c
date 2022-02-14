
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objectType; } ;
typedef TYPE_1__ AlterObjectSchemaStmt ;






 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;

void
FUNC_2(AlterObjectSchemaStmt *VAR_0, const char *VAR_1)
{
 switch (VAR_0->objectType)
 {
  case 128:
  {
   FUNC_1(VAR_0, VAR_1);
   return;
  }

  case 129:
  case 131:
  case 130:
  {
   FUNC_0(VAR_0, VAR_1);
   return;
  }

  default:
  {

   return;
  }
 }
}
