
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int table; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__ CreatePolicyStmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

List *
FUNC_5(CreatePolicyStmt *VAR_4)
{
 Oid VAR_5 = FUNC_1(VAR_4->table,
           VAR_0,
           0);
 if (FUNC_0(VAR_5))
 {
  FUNC_2(VAR_2, (FUNC_3(VAR_1),
      FUNC_4("policies on distributed tables are only supported in "
          "Citus Enterprise")));
 }


 return VAR_3;
}
