
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int coldeflist; TYPE_1__* typevar; } ;
struct TYPE_4__ {int relname; int schemaname; } ;
typedef int StringInfo ;
typedef TYPE_2__ CompositeTypeStmt ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(StringInfo VAR_0, CompositeTypeStmt *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1->typevar->schemaname,
              VAR_1->typevar->relname);
 FUNC_1(VAR_0, "CREATE TYPE %s AS (", VAR_2);
 FUNC_0(VAR_0, VAR_1->coldeflist);
 FUNC_1(VAR_0, ");");
}
