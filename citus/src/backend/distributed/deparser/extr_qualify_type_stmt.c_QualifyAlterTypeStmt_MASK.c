
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* schemaname; } ;
struct TYPE_4__ {scalar_t__ relkind; TYPE_3__* relation; } ;
typedef int List ;
typedef TYPE_1__ AlterTableStmt ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;

void
FUNC_3(AlterTableStmt *VAR_1)
{
 FUNC_0(VAR_1->relkind == VAR_0);

 if (VAR_1->relation->schemaname == ((void*)0))
 {
  List *VAR_2 = FUNC_2(VAR_1->relation);
  char *VAR_3 = FUNC_1(VAR_2);
  VAR_1->relation->schemaname = VAR_3;
 }
}
