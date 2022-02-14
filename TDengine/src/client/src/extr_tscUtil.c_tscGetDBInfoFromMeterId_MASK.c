
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,int ) ;

void FUNC_2(char* VAR_1, char* VAR_2) {
  char* VAR_3 = FUNC_1(VAR_1, VAR_0);
  if (VAR_3 != ((void*)0)) {
    char* VAR_4 = FUNC_1(VAR_3 + 1, VAR_0);
    if (VAR_4 != ((void*)0)) {
      FUNC_0(VAR_2, VAR_1, (VAR_4 - VAR_1));
      VAR_2[VAR_4 - VAR_1] = 0;
      return;
    }
  }

  VAR_2[0] = 0;
}
