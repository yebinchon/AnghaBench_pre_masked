
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * conn; int state; } ;
typedef int TAOS_RES ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int *,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(void *VAR_2, TAOS_RES *VAR_3, int VAR_4) {
  if (VAR_4 < 0) {
    FUNC_0("monitor:%p, connect to database failed, code:%d", VAR_1->conn, VAR_4);
    FUNC_4(VAR_1->conn);
    VAR_1->conn = ((void*)0);
    VAR_1->state = VAR_0;
    FUNC_2();
    return;
  }

  FUNC_3("monitor:%p, connect to database success, code:%d", VAR_1->conn, VAR_4);
  FUNC_1();
}
