
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,char const) ;

void FUNC_3(char *VAR_0, int VAR_1) {
  FUNC_0(VAR_0, 0, VAR_1);
  const char VAR_2[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK1234567890";
  char *VAR_3 = VAR_0;
  if (VAR_1) {
    --VAR_1;
    for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
      int VAR_5 = FUNC_1() % (int)(sizeof VAR_2 - 1);
      VAR_3 += FUNC_2(VAR_3, "%c", VAR_2[VAR_5]);
    }
  }
}
