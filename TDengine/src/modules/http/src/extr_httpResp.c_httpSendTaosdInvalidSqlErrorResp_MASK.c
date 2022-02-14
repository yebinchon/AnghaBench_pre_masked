
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*,int ,char*) ;
 int FUNC_1 (char*,char*,char*) ;

void FUNC_2(HttpContext *VAR_1, char* VAR_2) {
  int VAR_3 = 400;
  char VAR_4[512] = {0};
  int VAR_5 = FUNC_1(VAR_4, "invalid SQL: %s", VAR_2);

  for (int VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
    if (VAR_4[VAR_6] == '\"') {
      VAR_4[VAR_6] = '\'';
    } else if (VAR_4[VAR_6] == '\n') {
        VAR_4[VAR_6] = ' ';
    } else {}
  }

  FUNC_0(VAR_1, VAR_3, "Bad Request", VAR_0, VAR_4);
}
