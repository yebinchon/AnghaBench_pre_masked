
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char**,size_t*,int *) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

void FUNC_5(FILE *VAR_1, char *VAR_2) {
  char * VAR_3 = ((void*)0);
  size_t VAR_4 = 0;

  FUNC_0(VAR_1, 0, VAR_0);
  ssize_t VAR_5 = FUNC_1(&VAR_3, &VAR_4, VAR_1);
  if (VAR_5 <= 2) {
    goto _exit_no_charset;
  }

  if (FUNC_3(VAR_3, "#!", 2) != 0) {
    goto _exit_no_charset;
  }
  if (VAR_3[VAR_5 - 1] == '\n') {
    VAR_3[VAR_5 - 1] = '\0';
    VAR_5--;
  }
  FUNC_2(VAR_2, VAR_3 + 2);

  FUNC_4(VAR_3);
  return;

_exit_no_charset:
  FUNC_0(VAR_1, 0, VAR_0);
  *VAR_2 = '\0';
  FUNC_4(VAR_3);
  return;
}
