
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfRows; } ;
typedef int JsonBuf ;
typedef TYPE_1__ HttpSqlCmd ;
typedef int HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;

void FUNC_4(HttpContext *VAR_2, HttpSqlCmd *VAR_3, int VAR_4) {
  JsonBuf *VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 == ((void*)0)) return;


  FUNC_1(VAR_5);
  FUNC_2(VAR_5, VAR_1);

  FUNC_1(VAR_5);
  FUNC_0(VAR_5, VAR_4);


  FUNC_2(VAR_5, VAR_0);

  VAR_3->numOfRows = VAR_4;
}
