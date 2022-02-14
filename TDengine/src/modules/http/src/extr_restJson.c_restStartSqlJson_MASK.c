
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ TAOS_FIELD ;
typedef int JsonBuf ;
typedef int HttpSqlCmd ;
typedef int HttpContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(HttpContext *VAR_13, HttpSqlCmd *VAR_14, TAOS_RES *VAR_15) {
  JsonBuf *VAR_16 = FUNC_6(VAR_13);
  if (VAR_16 == ((void*)0)) return;

  TAOS_FIELD *VAR_17 = FUNC_9(VAR_15);
  int VAR_18 = FUNC_10(VAR_15);

  FUNC_0(VAR_16, VAR_13);
  FUNC_7(VAR_16);


  FUNC_5(VAR_16, VAR_2);


  FUNC_1(VAR_16);
  FUNC_2(VAR_16, VAR_9, VAR_10, VAR_11, VAR_12);


  FUNC_1(VAR_16);
  FUNC_3(VAR_16, VAR_7, VAR_8);

  FUNC_1(VAR_16);
  FUNC_5(VAR_16, VAR_1);

  if (VAR_18 == 0) {
    FUNC_1(VAR_16);
    FUNC_4(VAR_16, VAR_3, VAR_4);
  } else {
    for (int VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
      FUNC_1(VAR_16);
      FUNC_4(VAR_16, VAR_17[VAR_19].name, (int)FUNC_8(VAR_17[VAR_19].name));
    }
  }


  FUNC_5(VAR_16, VAR_0);


  FUNC_1(VAR_16);
  FUNC_3(VAR_16, VAR_5, VAR_6);

  FUNC_1(VAR_16);
  FUNC_5(VAR_16, VAR_1);
}
