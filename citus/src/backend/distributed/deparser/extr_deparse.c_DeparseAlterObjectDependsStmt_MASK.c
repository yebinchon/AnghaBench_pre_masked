
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectType; } ;
typedef TYPE_1__ AlterObjectDependsStmt ;


 char const* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;



 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3(AlterObjectDependsStmt *VAR_1)
{
 switch (VAR_1->objectType)
 {
  case 128:
  case 130:
  case 129:
  {
   return FUNC_0(VAR_1);
  }

  default:
  {
   FUNC_1(VAR_0, (FUNC_2("unsupported alter depends statement for deparsing")));
  }
 }
}
