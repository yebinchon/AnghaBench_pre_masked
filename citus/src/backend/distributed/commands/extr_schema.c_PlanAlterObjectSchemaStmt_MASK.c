
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int objectType; } ;
typedef int List ;
typedef TYPE_1__ AlterObjectSchemaStmt ;






 int * FUNC_0 (TYPE_1__*,char const*) ;
 int * FUNC_1 (TYPE_1__*,char const*) ;
 int * FUNC_2 (TYPE_1__*,char const*) ;

List *
FUNC_3(AlterObjectSchemaStmt *VAR_0, const char *VAR_1)
{
 switch (VAR_0->objectType)
 {
  case 128:
  {
   return FUNC_2(VAR_0, VAR_1);
  }

  case 129:
  case 131:
  case 130:
  {
   return FUNC_0(VAR_0, VAR_1);
  }

  default:
  {

   break;
  }
 }






 return FUNC_1(VAR_0, VAR_1);
}
