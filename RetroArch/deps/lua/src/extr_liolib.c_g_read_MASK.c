
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__,char*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,size_t) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static int FUNC_16 (lua_State *VAR_2, FILE *VAR_3, int VAR_4) {
  int VAR_5 = FUNC_7(VAR_2) - 1;
  int VAR_6;
  int VAR_7;
  FUNC_0(VAR_3);
  if (VAR_5 == 0) {
    VAR_6 = FUNC_13(VAR_2, VAR_3, 1);
    VAR_7 = VAR_4+1;
  }
  else {
    FUNC_4(VAR_2, VAR_5+VAR_0, "too many arguments");
    VAR_6 = 1;
    for (VAR_7 = VAR_4; VAR_5-- && VAR_6; VAR_7++) {
      if (FUNC_10(VAR_2, VAR_7) == VAR_1) {
        size_t VAR_8 = (size_t)FUNC_3(VAR_2, VAR_7);
        VAR_6 = (VAR_8 == 0) ? FUNC_15(VAR_2, VAR_3) : FUNC_12(VAR_2, VAR_3, VAR_8);
      }
      else {
        const char *VAR_9 = FUNC_5(VAR_2, VAR_7);
        if (*VAR_9 == '*') VAR_9++;
        switch (*VAR_9) {
          case 'n':
            VAR_6 = FUNC_14(VAR_2, VAR_3);
            break;
          case 'l':
            VAR_6 = FUNC_13(VAR_2, VAR_3, 1);
            break;
          case 'L':
            VAR_6 = FUNC_13(VAR_2, VAR_3, 0);
            break;
          case 'a':
            FUNC_11(VAR_2, VAR_3);
            VAR_6 = 1;
            break;
          default:
            return FUNC_2(VAR_2, VAR_7, "invalid format");
        }
      }
    }
  }
  if (FUNC_1(VAR_3))
    return FUNC_6(VAR_2, 0, ((void*)0));
  if (!VAR_6) {
    FUNC_8(VAR_2, 1);
    FUNC_9(VAR_2);
  }
  return VAR_7 - VAR_4;
}
