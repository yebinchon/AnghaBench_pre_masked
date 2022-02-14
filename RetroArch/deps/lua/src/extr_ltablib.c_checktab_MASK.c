
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_4, int VAR_5, int VAR_6) {
  if (FUNC_4(VAR_4, VAR_5) != VAR_0) {
    int VAR_7 = 1;
    if (FUNC_2(VAR_4, VAR_5) &&
        (!(VAR_6 & VAR_2) || FUNC_0(VAR_4, "__index", ++VAR_7)) &&
        (!(VAR_6 & VAR_3) || FUNC_0(VAR_4, "__newindex", ++VAR_7)) &&
        (!(VAR_6 & VAR_1) || FUNC_0(VAR_4, "__len", ++VAR_7))) {
      FUNC_3(VAR_4, VAR_7);
    }
    else
      FUNC_1(VAR_4, VAR_5, VAR_0);
  }
}
