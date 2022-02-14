
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectType; } ;
typedef int List ;
typedef TYPE_1__ AlterObjectDependsStmt ;


 int * VAR_0 ;


 int * FUNC_0 (TYPE_1__*,char const*) ;

__attribute__((used)) static List *
FUNC_1(AlterObjectDependsStmt *VAR_1, const char *VAR_2)
{
 switch (VAR_1->objectType)
 {
  case 128:
  case 129:
  {
   return FUNC_0(VAR_1, VAR_2);
  }

  default:
  {
   return VAR_0;
  }
 }
}
