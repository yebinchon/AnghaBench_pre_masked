
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (scalar_t__*,char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int ) ;

int FUNC_3(char *VAR_2, int VAR_3, char *VAR_4, int VAR_5) {
  char *VAR_6 = VAR_2;
  char *VAR_7 = VAR_4;

  wchar_t VAR_8;
  while (VAR_3 > 0) {
    if (*VAR_6 == '\0') break;
    int VAR_9 = FUNC_0(&VAR_8, VAR_6, VAR_0);

    if ((int)VAR_8 < 256) {
      VAR_7 = FUNC_2(VAR_7, VAR_1[(int)VAR_8]);
    } else {
      FUNC_1(VAR_7, VAR_6, VAR_9);
      VAR_7 += VAR_9;
    }
    VAR_6 += VAR_9;
  }

  *VAR_7 = '\0';

  return 0;
}
