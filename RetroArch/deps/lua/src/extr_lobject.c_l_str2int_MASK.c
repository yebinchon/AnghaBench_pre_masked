
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Unsigned ;
typedef int lua_Integer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char const) ;

__attribute__((used)) static const char *FUNC_7 (const char *VAR_2, lua_Integer *VAR_3) {
  lua_Unsigned VAR_4 = 0;
  int VAR_5 = 1;
  int VAR_6;
  while (FUNC_4(FUNC_0(*VAR_2))) VAR_2++;
  VAR_6 = FUNC_1(&VAR_2);
  if (VAR_2[0] == '0' &&
      (VAR_2[1] == 'x' || VAR_2[1] == 'X')) {
    VAR_2 += 2;
    for (; FUNC_5(FUNC_0(*VAR_2)); VAR_2++) {
      VAR_4 = VAR_4 * 16 + FUNC_6(*VAR_2);
      VAR_5 = 0;
    }
  }
  else {
    for (; FUNC_3(FUNC_0(*VAR_2)); VAR_2++) {
      int VAR_7 = *VAR_2 - '0';
      if (VAR_4 >= VAR_0 && (VAR_4 > VAR_0 || VAR_7 > VAR_1 + VAR_6))
        return ((void*)0);
      VAR_4 = VAR_4 * 10 + VAR_7;
      VAR_5 = 0;
    }
  }
  while (FUNC_4(FUNC_0(*VAR_2))) VAR_2++;
  if (VAR_5 || *VAR_2 != '\0') return ((void*)0);
  else {
    *VAR_3 = FUNC_2((VAR_6) ? 0u - VAR_4 : VAR_4);
    return VAR_2;
  }
}
