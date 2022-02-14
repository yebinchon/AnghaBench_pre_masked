
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2 (int VAR_1, const char *VAR_2, const char *VAR_3) {
  int VAR_4 = 1;
  if (*(VAR_2+1) == '^') {
    VAR_4 = 0;
    VAR_2++;
  }
  while (++VAR_2 < VAR_3) {
    if (*VAR_2 == VAR_0) {
      VAR_2++;
      if (FUNC_0(VAR_1, FUNC_1(*VAR_2)))
        return VAR_4;
    }
    else if ((*(VAR_2+1) == '-') && (VAR_2+2 < VAR_3)) {
      VAR_2+=2;
      if (FUNC_1(*(VAR_2-2)) <= VAR_1 && VAR_1 <= FUNC_1(*VAR_2))
        return VAR_4;
    }
    else if (FUNC_1(*VAR_2) == VAR_1) return VAR_4;
  }
  return !VAR_4;
}
