
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ renameType; scalar_t__ relationType; TYPE_1__* relation; } ;
struct TYPE_4__ {char* schemaname; int relname; } ;
typedef TYPE_2__ RenameStmt ;
typedef int List ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(RenameStmt *VAR_2)
{
 FUNC_0(VAR_2->renameType == VAR_0);
 FUNC_0(VAR_2->relationType == VAR_1);

 if (VAR_2->relation->schemaname == ((void*)0))
 {
  List *VAR_3 = FUNC_2(FUNC_3(VAR_2->relation->relname));
  char *VAR_4 = FUNC_1(VAR_3);
  VAR_2->relation->schemaname = VAR_4;
 }
}
