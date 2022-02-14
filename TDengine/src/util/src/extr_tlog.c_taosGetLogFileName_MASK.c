
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 char* VAR_2 ;

void FUNC_3(char *VAR_3) {
  if (VAR_1 > 1) {
    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
      char VAR_5[VAR_0];

      FUNC_0(VAR_5, "%s%d.0", VAR_3, VAR_4);
      bool VAR_6 = FUNC_2(VAR_5);

      FUNC_0(VAR_5, "%s%d.1", VAR_3, VAR_4);
      bool VAR_7 = FUNC_2(VAR_5);

      if (!VAR_6 && !VAR_7) {
        FUNC_0(VAR_2, "%s%d", VAR_3, VAR_4);
        return;
      }
    }
  }

  FUNC_1(VAR_2, VAR_3);
}
