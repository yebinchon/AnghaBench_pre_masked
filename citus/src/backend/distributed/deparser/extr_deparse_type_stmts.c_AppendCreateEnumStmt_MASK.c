
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vals; int typeName; } ;
struct TYPE_5__ {int relname; int schemaname; } ;
typedef int StringInfo ;
typedef TYPE_1__ RangeVar ;
typedef TYPE_2__ CreateEnumStmt ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__* FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(StringInfo VAR_0, CreateEnumStmt *VAR_1)
{
 RangeVar *VAR_2 = ((void*)0);
 const char *VAR_3 = ((void*)0);

 VAR_2 = FUNC_2(VAR_1->typeName);


 VAR_3 = FUNC_3(VAR_2->schemaname, VAR_2->relname);

 FUNC_1(VAR_0, "CREATE TYPE %s AS ENUM (", VAR_3);
 FUNC_0(VAR_0, VAR_1->vals);
 FUNC_1(VAR_0, ");");
}
