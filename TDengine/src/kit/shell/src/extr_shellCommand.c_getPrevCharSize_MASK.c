
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(const char *VAR_1, int VAR_2, int *VAR_3, int *VAR_4) {
  FUNC_0(VAR_2 > 0);

  wchar_t VAR_5;
  *VAR_3 = 0;
  *VAR_4 = 0;

  while (--VAR_2 >= 0) {
    *VAR_3 += 1;

    if (VAR_1[VAR_2] > 0 || FUNC_1(VAR_1[VAR_2]) > 1) break;
  }

  int VAR_6 = FUNC_2(&VAR_5, VAR_1 + VAR_2, VAR_0);
  FUNC_0(VAR_6 == *VAR_3);

  *VAR_4 = FUNC_3(VAR_5);
}
