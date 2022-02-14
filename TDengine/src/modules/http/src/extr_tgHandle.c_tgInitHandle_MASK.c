
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HttpServer ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;

void FUNC_5(HttpServer *VAR_3) {
  char VAR_4[256] = {0};
  FUNC_1(VAR_4, "%s/taos.telegraf.cfg", VAR_1);
  if (FUNC_4(VAR_4) <= 0) {
    FUNC_2();
    if (FUNC_3(VAR_0, "default") <= 0) {
      FUNC_2();
    }
  }

  FUNC_0(VAR_3, &VAR_2);
}
