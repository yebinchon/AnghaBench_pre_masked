
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;
typedef int TAOS_RES ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;

void FUNC_2(void *VAR_1, TAOS_RES *VAR_2, int VAR_3) {
  if (VAR_3 < 0) {
    FUNC_0("monitor:%p, save account info failed, code:%d", VAR_0->conn, VAR_3);
  } else if (VAR_3 == 0) {
    FUNC_0("monitor:%p, save account info failed, affect rows:%d", VAR_0->conn, VAR_3);
  } else {
    FUNC_1("monitor:%p, save account info success, code:%d", VAR_0->conn, VAR_3);
  }
}
