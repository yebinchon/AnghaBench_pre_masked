
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS_RES ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;

void FUNC_2(void *VAR_0, TAOS_RES *VAR_1, int VAR_2) {
  if (VAR_2 < 0) {
    FUNC_0("failed to save slow query, code:%d", VAR_2);
  } else {
    FUNC_1("success to save slow query, code:%d", VAR_2);
  }
}
