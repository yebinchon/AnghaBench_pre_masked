
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int member_0; } ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct tm*) ;
 int FUNC_1 (char*,char**,int) ;
 char* FUNC_2 (char*,char*,struct tm*) ;

int32_t FUNC_3(char* VAR_1, int64_t* VAR_2, int32_t VAR_3) {
  *VAR_2 = 0;
  struct tm VAR_4 = {0};

  char* VAR_5 = FUNC_2(VAR_1, "%Y-%m-%d %H:%M:%S", &VAR_4);
  if (VAR_5 == ((void*)0)) {
    return -1;
  }


  int64_t VAR_6 = FUNC_0(&VAR_4);
  int64_t VAR_7 = 0;

  if (*VAR_5 == '.') {

    if ((VAR_7 = FUNC_1(VAR_5 + 1, &VAR_5, VAR_3)) < 0) {
      return -1;
    }
  }

  int64_t VAR_8 = (VAR_3 == VAR_0) ? 1000 : 1000000;
  *VAR_2 = VAR_8 * VAR_6 + VAR_7;

  return 0;
}
