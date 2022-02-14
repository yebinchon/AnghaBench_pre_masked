
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kind; int name; int is_local; } ;
typedef TYPE_1__ VariableSetStmt ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;







bool
FUNC_1(VariableSetStmt *VAR_2)
{
 if (VAR_1 != VAR_0)
 {

  return 0;
 }

 switch (VAR_2->kind)
 {
  case 128:
  case 131:
  case 130:
  {

   return VAR_2->is_local && FUNC_0(VAR_2->name);
  }

  case 133:
  {

   return FUNC_0(VAR_2->name);
  }

  case 132:
  {

   return 1;
  }

  case 129:
  default:
  {

   return 0;
  }
 }
}
