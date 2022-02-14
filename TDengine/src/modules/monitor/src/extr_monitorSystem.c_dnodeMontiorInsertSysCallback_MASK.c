
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sql; int conn; } ;
typedef int TAOS_RES ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (char*,int ,int,int ) ;

void FUNC_2(void *VAR_1, TAOS_RES *VAR_2, int VAR_3) {
  if (VAR_3 < 0) {
    FUNC_0("monitor:%p, save system info failed, code:%d %s", VAR_0->conn, VAR_3, VAR_0->sql);
  } else if (VAR_3 == 0) {
    FUNC_0("monitor:%p, save system info failed, affect rows:%d %s", VAR_0->conn, VAR_3, VAR_0->sql);
  } else {
    FUNC_1("monitor:%p, save system info success, code:%d %s", VAR_0->conn, VAR_3, VAR_0->sql);
  }
}
