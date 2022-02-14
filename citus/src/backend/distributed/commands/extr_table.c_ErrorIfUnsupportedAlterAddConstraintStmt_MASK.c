
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int Var ;
struct TYPE_4__ {int cmds; } ;
typedef int Relation ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef TYPE_1__ AlterTableStmt ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(AlterTableStmt *VAR_2)
{
 LOCKMODE VAR_3 = FUNC_0(VAR_2->cmds);
 Oid VAR_4 = FUNC_1(VAR_2, VAR_3);
 char VAR_5 = FUNC_4(VAR_4);
 Var *VAR_6 = FUNC_2(VAR_4);
 uint32 VAR_7 = FUNC_5(VAR_4);
 Relation VAR_8 = FUNC_7(VAR_4, VAR_0);

 FUNC_3(VAR_8, VAR_5, VAR_6,
         VAR_7);
 FUNC_6(VAR_8, VAR_1);
}
