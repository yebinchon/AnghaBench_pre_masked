
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ varattno; } ;
typedef TYPE_1__ Var ;
struct TYPE_12__ {char* name; } ;
struct TYPE_11__ {int cmds; } ;
struct TYPE_10__ {scalar_t__ attnum; } ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ AlterTableStmt ;
typedef TYPE_4__ AlterTableCmd ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;

__attribute__((used)) static bool
FUNC_8(AlterTableStmt *VAR_0,
        AlterTableCmd *VAR_1)
{
 bool VAR_2 = 0;
 Var *VAR_3 = ((void*)0);
 HeapTuple VAR_4 = ((void*)0);
 char *VAR_5 = VAR_1->name;

 LOCKMODE VAR_6 = FUNC_0(VAR_0->cmds);
 Oid VAR_7 = FUNC_1(VAR_0, VAR_6);
 if (!FUNC_5(VAR_7))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_7);

 VAR_4 = FUNC_7(VAR_7, VAR_5);
 if (FUNC_4(VAR_4))
 {
  Form_pg_attribute VAR_8 = (Form_pg_attribute) FUNC_3(VAR_4);


  if (VAR_3 != ((void*)0) &&
   VAR_8->attnum == VAR_3->varattno)
  {
   VAR_2 = 1;
  }

  FUNC_6(VAR_4);
 }

 return VAR_2;
}
