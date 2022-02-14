
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;






 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_0) {
  FUNC_1(VAR_0, 1);
  if (FUNC_0(VAR_0, 1, "__tostring"))
    return 1;
  switch (FUNC_10(VAR_0, 1)) {
    case 129:
      FUNC_5(VAR_0, FUNC_9(VAR_0, 1));
      break;
    case 128:
      FUNC_6(VAR_0, 1);
      break;
    case 131:
      FUNC_5(VAR_0, (FUNC_7(VAR_0, 1) ? "true" : "false"));
      break;
    case 130:
      FUNC_4(VAR_0, "nil");
      break;
    default:
      FUNC_3(VAR_0, "%s: %p", FUNC_2(VAR_0, 1), FUNC_8(VAR_0, 1));
      break;
  }
  return 1;
}
