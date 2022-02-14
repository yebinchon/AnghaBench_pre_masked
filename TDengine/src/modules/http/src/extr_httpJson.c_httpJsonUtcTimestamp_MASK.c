
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int int64_t ;
typedef int JsonBuf ;


 int FUNC_0 (int *,char*,int) ;
 struct tm* FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (char*,int,char*,struct tm*) ;

void FUNC_4(JsonBuf* VAR_0, int64_t VAR_1, bool VAR_2) {
  char VAR_3[40] = {0};
  struct tm *VAR_4;
  int VAR_5 = 1000;
  if (VAR_2) {
    VAR_5 = 1000000;
  }

  time_t VAR_6 = VAR_1 / VAR_5;
  VAR_4 = FUNC_1(&VAR_6);
  int VAR_7 = (int) FUNC_3(VAR_3, 40, "%Y-%m-%dT%H:%M:%S", VAR_4);
  if (VAR_2) {
    VAR_7 += FUNC_2(VAR_3 + VAR_7, 8, ".%06ld", VAR_1 % VAR_5);
  } else {
    VAR_7 += FUNC_2(VAR_3 + VAR_7, 5, ".%03ld", VAR_1 % VAR_5);
  }
  VAR_7 += (int) FUNC_3(VAR_3 + VAR_7, 40 - VAR_7, "%z", VAR_4);

  FUNC_0(VAR_0, VAR_3, VAR_7);
}
