
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ renameType; int * object; } ;
typedef TYPE_1__ RenameStmt ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

void
FUNC_6(RenameStmt *VAR_1)
{
 List *VAR_2 = (List *) VAR_1->object;

 FUNC_0(VAR_1->renameType == VAR_0);

 if (FUNC_3(VAR_2) == 1)
 {

  char *VAR_3 = FUNC_1(VAR_2);
  VAR_2 = FUNC_4(FUNC_5(VAR_3), FUNC_2(VAR_2));

  VAR_1->object = (Node *) VAR_2;
 }
}
