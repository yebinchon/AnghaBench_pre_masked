
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_1) {
  lua_Integer VAR_2 = FUNC_0(VAR_1, 1, VAR_0) + 1;
  lua_Integer VAR_3;
  switch (FUNC_5(VAR_1)) {
    case 2: {
      VAR_3 = VAR_2;
      break;
    }
    case 3: {
      lua_Integer VAR_4;
      VAR_3 = FUNC_2(VAR_1, 2);
      FUNC_1(VAR_1, 1 <= VAR_3 && VAR_3 <= VAR_2, 2, "position out of bounds");
      for (VAR_4 = VAR_2; VAR_4 > VAR_3; VAR_4--) {
        FUNC_4(VAR_1, 1, VAR_4 - 1);
        FUNC_6(VAR_1, 1, VAR_4);
      }
      break;
    }
    default: {
      return FUNC_3(VAR_1, "wrong number of arguments to 'insert'");
    }
  }
  FUNC_6(VAR_1, 1, VAR_3);
  return 0;
}
