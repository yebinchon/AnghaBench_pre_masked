
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;
 char** FUNC_0 (int) ;
 char** FUNC_1 (char**,int) ;
 size_t FUNC_2 (char*) ;
 char* FUNC_3 (char**,char const*) ;

char **FUNC_4(char *VAR_1, const char *VAR_2, int32_t *VAR_3) {
  *VAR_3 = 0;
  int32_t VAR_4 = 4;

  char **VAR_5 = FUNC_0(VAR_0 * VAR_4);

  for (char *VAR_6 = FUNC_3(&VAR_1, VAR_2); VAR_6 != ((void*)0); VAR_6 = FUNC_3(&VAR_1, VAR_2)) {
    size_t VAR_7 = FUNC_2(VAR_6);
    if (VAR_7 == 0) {
      continue;
    }

    VAR_5[(*VAR_3)++] = VAR_6;
    if ((*VAR_3) >= VAR_4) {
      VAR_4 = (VAR_4 << 1);
      VAR_5 = FUNC_1(VAR_5, VAR_0 * VAR_4);
    }
  }

  return VAR_5;
}
