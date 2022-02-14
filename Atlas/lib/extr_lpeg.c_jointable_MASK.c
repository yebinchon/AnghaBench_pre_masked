
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_0, int VAR_1) {
  int VAR_2, VAR_3, VAR_4;
  FUNC_2(VAR_0, VAR_1);
  VAR_3 = FUNC_3(VAR_0, -1);
  FUNC_2(VAR_0, -2);
  if (VAR_3 == 0 || FUNC_1(VAR_0, -2, -1)) {
    FUNC_4(VAR_0, 2);
    return 0;
  }
  VAR_2 = FUNC_3(VAR_0, -1);
  if (VAR_2 == 0) {
    FUNC_4(VAR_0, 1);
    FUNC_7(VAR_0, -2);
    return 0;
  }
  FUNC_0(VAR_0, VAR_2 + VAR_3, 0);

  for (VAR_4 = 1; VAR_4 <= VAR_2; VAR_4++) {
    FUNC_5(VAR_0, -2, VAR_4);
    FUNC_6(VAR_0, -2, VAR_4);
  }
  for (VAR_4 = 1; VAR_4 <= VAR_3; VAR_4++) {
    FUNC_5(VAR_0, -3, VAR_4);
    FUNC_6(VAR_0, -2, VAR_2 + VAR_4);
  }
  FUNC_7(VAR_0, -4);
  FUNC_4(VAR_0, 2);
  return VAR_2;
}
