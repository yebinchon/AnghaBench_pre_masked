
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objectType; } ;
typedef TYPE_1__ AlterObjectSchemaStmt ;


 char const* FUNC_0 (TYPE_1__*) ;
 char const* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;




 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static const char *
FUNC_4(AlterObjectSchemaStmt *VAR_1)
{
 switch (VAR_1->objectType)
 {
  case 128:
  {
   return FUNC_1(VAR_1);
  }

  case 129:
  case 131:
  case 130:
  {
   return FUNC_0(VAR_1);
  }

  default:
  {
   FUNC_2(VAR_0, (FUNC_3("unsupported rename statement for deparsing")));
  }
 }
}
