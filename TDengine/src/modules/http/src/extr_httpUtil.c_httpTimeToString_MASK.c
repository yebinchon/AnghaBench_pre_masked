
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*,char*,char*,int) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;

void FUNC_4(time_t VAR_0, char *VAR_1, int VAR_2) {
  FUNC_1(VAR_1, 0, (size_t)VAR_2);
  char VAR_3[30] = {0};

  struct tm *VAR_4;
  time_t VAR_5 = VAR_0 / 1000;
  VAR_4 = FUNC_0(&VAR_5);
  FUNC_3(VAR_3, 64, "%Y-%m-%d %H:%M:%S", VAR_4);
  FUNC_2(VAR_1, "%s.%03ld", VAR_3, VAR_0 % 1000);
}
