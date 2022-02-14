
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * typeName; } ;
typedef int List ;
typedef TYPE_1__ AlterEnumStmt ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(AlterEnumStmt *VAR_0)
{
 List *VAR_1 = VAR_0->typeName;

 if (FUNC_2(VAR_1) == 1)
 {

  char *VAR_2 = FUNC_0(VAR_1);
  VAR_1 = FUNC_3(FUNC_4(VAR_2), FUNC_1(VAR_1));

  VAR_0->typeName = VAR_1;
 }
}
