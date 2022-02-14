
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cJSON ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;

int FUNC_8(char *VAR_0, char*VAR_1) {
  cJSON *VAR_2 = FUNC_4(VAR_0);
  if (VAR_2 == ((void*)0)) {
    FUNC_5("failed to parse telegraf schema file:%s, invalid json format, content:%s", VAR_1, VAR_0);
    return -1;
  }
  int VAR_3 = 0;
  cJSON *VAR_4 = FUNC_3(VAR_2, "metrics");
  if (VAR_4 != ((void*)0)) {
    VAR_3 = FUNC_2(VAR_4);
    if (VAR_3 <= 0) {
      FUNC_5("failed to parse telegraf schema file:%s, metrics size is 0", VAR_1);
      FUNC_0(VAR_2);
      return -1;
    }

    FUNC_6(VAR_3);
    for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
      cJSON *VAR_6 = FUNC_1(VAR_4, VAR_5);
      if (VAR_6 != ((void*)0)) {
        FUNC_7(VAR_6);
      }
    }
  } else {
    VAR_3 = 1;
    FUNC_6(VAR_3);
    FUNC_7(VAR_2);
  }

  FUNC_0(VAR_2);
  return VAR_3;
}
