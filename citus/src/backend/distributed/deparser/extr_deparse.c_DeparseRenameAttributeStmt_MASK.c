
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ renameType; int relationType; } ;
typedef TYPE_1__ RenameStmt ;


 int FUNC_0 (int) ;
 char const* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static const char *
FUNC_4(RenameStmt *VAR_2)
{
 FUNC_0(VAR_2->renameType == VAR_1);

 switch (VAR_2->relationType)
 {
  case 128:
  {
   return FUNC_1(VAR_2);
  }

  default:
  {
   FUNC_2(VAR_0, (FUNC_3("unsupported rename attribute statement for"
           " deparsing")));
  }
 }
}
