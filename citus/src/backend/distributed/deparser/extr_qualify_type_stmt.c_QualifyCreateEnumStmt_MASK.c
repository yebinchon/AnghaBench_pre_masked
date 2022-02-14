
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typeName; } ;
typedef int Oid ;
typedef TYPE_1__ CreateEnumStmt ;


 int FUNC_0 (int ,char**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(CreateEnumStmt *VAR_0)
{
 if (FUNC_3(VAR_0->typeName) == 1)
 {
  char *VAR_1 = ((void*)0);
  Oid VAR_2 = FUNC_0(VAR_0->typeName, &VAR_1);
  VAR_0->typeName = FUNC_4(FUNC_5(FUNC_1(VAR_2)),
         FUNC_2(VAR_0->typeName));
 }
}
