
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ behavior; int newname; int subname; TYPE_1__* relation; } ;
struct TYPE_4__ {int relname; int schemaname; } ;
typedef int StringInfo ;
typedef TYPE_2__ RenameStmt ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_1, RenameStmt *VAR_2)
{
 FUNC_0(VAR_1, "ALTER TYPE %s RENAME ATTRIBUTE %s TO %s",
      FUNC_3(VAR_2->relation->schemaname,
            VAR_2->relation->relname),
      FUNC_2(VAR_2->subname),
      FUNC_2(VAR_2->newname));

 if (VAR_2->behavior == VAR_0)
 {
  FUNC_1(VAR_1, " CASCADE");
 }

 FUNC_1(VAR_1, ";");
}
