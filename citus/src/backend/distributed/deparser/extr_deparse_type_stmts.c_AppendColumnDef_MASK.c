
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ colname; int is_not_null; int typeName; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef TYPE_1__ ColumnDef ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 char const* FUNC_6 (int ) ;
 char const* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(StringInfo VAR_0, ColumnDef *VAR_1)
{
 Oid VAR_2 = FUNC_3(((void*)0), VAR_1->typeName, 0);
 Oid VAR_3 = FUNC_2(((void*)0), VAR_1, VAR_2);

 FUNC_0(!VAR_1->is_not_null);

 if (VAR_1->colname)
 {
  FUNC_5(VAR_0, "%s ", FUNC_7(VAR_1->colname));
 }

 FUNC_5(VAR_0, "%s", FUNC_6(VAR_2));

 if (FUNC_4(VAR_3))
 {
  const char *VAR_4 = FUNC_1(VAR_3);
  FUNC_5(VAR_0, " COLLATE %s", VAR_4);
 }
}
