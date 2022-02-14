
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int newname; scalar_t__ object; } ;
typedef int StringInfo ;
typedef TYPE_1__ RenameStmt ;
typedef int List ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_0, RenameStmt *VAR_1)
{
 List *VAR_2 = (List *) VAR_1->object;

 FUNC_1(VAR_0, "ALTER TYPE %s RENAME TO %s;", FUNC_0(VAR_2),
      FUNC_2(VAR_1->newname));
}
