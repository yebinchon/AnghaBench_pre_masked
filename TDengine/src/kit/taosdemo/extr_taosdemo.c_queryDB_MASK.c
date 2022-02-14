
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TAOS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;

void FUNC_5(TAOS *VAR_2, char *VAR_3) {
  int VAR_4 = 5;
  while (VAR_4 > 0) {
    if (FUNC_4(VAR_2, VAR_3) == 0) break;
    VAR_4--;
  }
  if (VAR_4 == 0) {
    FUNC_1(VAR_1, "Failed to run %s, reason: %s\n", VAR_3, FUNC_3(VAR_2));
    FUNC_2(VAR_2);
    FUNC_0(VAR_0);
  }
}
