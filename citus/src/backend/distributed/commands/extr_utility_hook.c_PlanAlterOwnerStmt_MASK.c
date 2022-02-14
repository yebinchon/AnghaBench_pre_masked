
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int objectType; } ;
typedef int List ;
typedef TYPE_1__ AlterOwnerStmt ;


 int * VAR_0 ;




 int * FUNC_0 (TYPE_1__*,char const*) ;
 int * FUNC_1 (TYPE_1__*,char const*) ;

__attribute__((used)) static List *
FUNC_2(AlterOwnerStmt *VAR_1, const char *VAR_2)
{
 switch (VAR_1->objectType)
 {
  case 128:
  {
   return FUNC_1(VAR_1, VAR_2);
  }

  case 129:
  case 131:
  case 130:
  {
   return FUNC_0(VAR_1, VAR_2);
  }

  default:
  {

   return VAR_0;
  }
 }
}
