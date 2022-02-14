
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int Table ;
struct TYPE_6__ {int end_of_table; } ;
typedef int Statement ;
typedef int Row ;
typedef int ExecuteResult ;
typedef TYPE_1__ Cursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *) ;

ExecuteResult FUNC_6(Statement* VAR_1, Table* VAR_2) {
  Cursor* VAR_3 = FUNC_5(VAR_2);

  Row VAR_4;
  while (!(VAR_3->end_of_table)) {
    FUNC_2(FUNC_1(VAR_3), &VAR_4);
    FUNC_4(&VAR_4);
    FUNC_0(VAR_3);
  }

  FUNC_3(VAR_3);

  return VAR_0;
}
