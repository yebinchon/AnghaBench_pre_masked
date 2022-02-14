
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int objectType; } ;
typedef int ObjectAddress ;
typedef TYPE_1__ AlterObjectDependsStmt ;


 int const* FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;


 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static const ObjectAddress *
FUNC_3(AlterObjectDependsStmt *VAR_1, bool VAR_2)
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
   FUNC_1(VAR_0, (FUNC_2("unsupported alter depends on extension statement to "
           "get object address for")));
  }
 }
}
