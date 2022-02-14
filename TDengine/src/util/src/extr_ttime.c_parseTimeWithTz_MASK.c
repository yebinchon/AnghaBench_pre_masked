
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int member_0; } ;
typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct tm*) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,int*) ;
 char* FUNC_4 (char*,char*,struct tm*) ;
 int FUNC_5 (struct tm*) ;

int32_t FUNC_6(char* VAR_1, int64_t* VAR_2, int32_t VAR_3) {
  int64_t VAR_4 = (VAR_3 == VAR_0) ? 1000 : 1000000;
  int64_t VAR_5 = 0;

  struct tm VAR_6 = {0};
  char* VAR_7 = FUNC_4(VAR_1, "%Y-%m-%dT%H:%M:%S", &VAR_6);
  if (VAR_7 == ((void*)0)) {
    return -1;
  }





  int64_t VAR_8 = FUNC_5(&VAR_6);


  int64_t VAR_9 = 0;
  VAR_7 = FUNC_0(VAR_1);

  if (VAR_7[0] == 'Z' || VAR_7[0] == 'z') {

    *VAR_2 = VAR_8 * VAR_4;
  } else if (VAR_7[0] == '.') {
    VAR_7 += 1;
    if ((VAR_9 = FUNC_2(VAR_7, &VAR_7, VAR_3)) < 0) {
      return -1;
    }

    *VAR_2 = VAR_8 * VAR_4 + VAR_9;

    char VAR_10 = VAR_7[0];
    if (VAR_10 != 'Z' && VAR_10 != 'z' && VAR_10 != '+' && VAR_10 != '-') {
      return -1;
    } else if (VAR_10 == '+' || VAR_10 == '-') {

      if (FUNC_3(VAR_7, &VAR_5) == -1) {
        return -1;
      }

      *VAR_2 += VAR_5 * VAR_4;
    }

  } else if (VAR_7[0] == '+' || VAR_7[0] == '-') {
    *VAR_2 = VAR_8 * VAR_4 + VAR_9;


    if (FUNC_3(VAR_7, &VAR_5) == -1) {
      return -1;
    }

    *VAR_2 += VAR_5 * VAR_4;
  } else {
    return -1;
  }

  return 0;
}
