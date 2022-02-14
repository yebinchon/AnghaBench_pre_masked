
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS_RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,int *,int) ;

void FUNC_5(void *VAR_2, TAOS_RES *VAR_3, int VAR_4) {
  char *VAR_5 = VAR_2;
  if (VAR_4 < 0) {
    FUNC_2("taos:%p, slow query connect failed, code:%d", VAR_0, VAR_4);
    FUNC_1(VAR_0);
    VAR_0 = ((void*)0);
    VAR_1 = 0;
    FUNC_0(VAR_5);
  } else {
    FUNC_4("taos:%p, slow query connect success, code:%d", VAR_0, VAR_4);
    VAR_1 = 1;
    FUNC_3(VAR_5, ((void*)0));
  }
}
