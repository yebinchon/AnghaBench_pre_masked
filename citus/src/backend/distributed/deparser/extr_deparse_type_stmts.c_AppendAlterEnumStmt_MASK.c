
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ newValNeighbor; scalar_t__ newValIsAfter; scalar_t__ newVal; scalar_t__ skipIfNewValExists; scalar_t__ oldVal; int typeName; } ;
typedef int StringInfo ;
typedef TYPE_1__ AlterEnumStmt ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(StringInfo VAR_0, AlterEnumStmt *VAR_1)
{
 FUNC_3(VAR_0, "ALTER TYPE %s", FUNC_2(VAR_1->typeName));

 if (FUNC_1(VAR_1))
 {

  FUNC_3(VAR_0, " RENAME VALUE %s TO %s;",
       FUNC_5(VAR_1->oldVal),
       FUNC_5(VAR_1->newVal));
 }
 else if (FUNC_0(VAR_1))
 {

  FUNC_4(VAR_0, " ADD VALUE ");
  if (VAR_1->skipIfNewValExists)
  {
   FUNC_4(VAR_0, "IF NOT EXISTS ");
  }
  FUNC_4(VAR_0, FUNC_5(VAR_1->newVal));

  if (VAR_1->newValNeighbor)
  {
   FUNC_3(VAR_0, " %s %s",
        VAR_1->newValIsAfter ? "AFTER" : "BEFORE",
        FUNC_5(VAR_1->newValNeighbor));
  }

  FUNC_4(VAR_0, ";");
 }
}
