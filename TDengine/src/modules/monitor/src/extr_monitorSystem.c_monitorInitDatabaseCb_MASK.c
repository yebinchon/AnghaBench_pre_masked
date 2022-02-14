
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdIndex; int state; int sql; int conn; } ;
typedef int TAOS_RES ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_5(void *VAR_13, TAOS_RES *VAR_14, int VAR_15) {
  if (-VAR_15 == VAR_3 || -VAR_15 == VAR_2 || VAR_15 >= 0) {
    FUNC_4("monitor:%p, sql success, code:%d, %s", VAR_4->conn, VAR_15, VAR_4->sql);
    if (VAR_4->cmdIndex == VAR_0) {
      VAR_9 = VAR_7;
      VAR_10 = VAR_5;




      FUNC_2("dnode:%s is started", VAR_11);

    }
    VAR_4->cmdIndex++;
    FUNC_1();
  } else {
    FUNC_0("monitor:%p, sql failed, code:%d, %s", VAR_4->conn, VAR_15, VAR_4->sql);
    VAR_4->state = VAR_1;
    FUNC_3();
  }
}
