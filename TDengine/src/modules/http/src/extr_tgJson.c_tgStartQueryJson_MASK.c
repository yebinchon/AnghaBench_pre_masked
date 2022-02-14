
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; int table; int stable; int metric; } ;
typedef int TAOS_RES ;
typedef int JsonBuf ;
typedef TYPE_1__ HttpSqlCmd ;
typedef int HttpContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(HttpContext *VAR_1, HttpSqlCmd *VAR_2, TAOS_RES *VAR_3) {
  JsonBuf *VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 == ((void*)0)) return;


  FUNC_1(VAR_4);
  FUNC_3(VAR_4, VAR_0);


  FUNC_1(VAR_4);
  FUNC_2(VAR_4, "metric", 6, FUNC_0(VAR_1, VAR_2->stable),
               (int)FUNC_5(FUNC_0(VAR_1, VAR_2->metric)));

  FUNC_1(VAR_4);
  FUNC_2(VAR_4, "stable", 6, FUNC_0(VAR_1, VAR_2->stable),
               (int)FUNC_5(FUNC_0(VAR_1, VAR_2->stable)));

  FUNC_1(VAR_4);
  FUNC_2(VAR_4, "table", 5, FUNC_0(VAR_1, VAR_2->table),
               (int)FUNC_5(FUNC_0(VAR_1, VAR_2->table)));

  FUNC_1(VAR_4);
  FUNC_2(VAR_4, "timestamp", 9, FUNC_0(VAR_1, VAR_2->timestamp),
               (int)FUNC_5(FUNC_0(VAR_1, VAR_2->timestamp)));
}
