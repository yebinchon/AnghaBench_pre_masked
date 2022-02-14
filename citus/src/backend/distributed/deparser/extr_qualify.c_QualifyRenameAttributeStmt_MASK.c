
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ renameType; int relationType; } ;
typedef TYPE_1__ RenameStmt ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(RenameStmt *VAR_1)
{
 FUNC_0(VAR_1->renameType == VAR_0);

 switch (VAR_1->relationType)
 {
  case 128:
  {
   FUNC_1(VAR_1);
   return;
  }

  default:
  {
   return;
  }
 }
}
