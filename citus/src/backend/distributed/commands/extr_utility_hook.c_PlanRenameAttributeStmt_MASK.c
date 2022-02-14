
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ renameType; int relationType; } ;
typedef TYPE_1__ RenameStmt ;
typedef int List ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;

 int * FUNC_1 (TYPE_1__*,char const*) ;

__attribute__((used)) static List *
FUNC_2(RenameStmt *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_2->renameType == VAR_1);

 switch (VAR_2->relationType)
 {
  case 128:
  {
   return FUNC_1(VAR_2, VAR_3);
  }

  default:
  {

   return VAR_0;
  }
 }
}
