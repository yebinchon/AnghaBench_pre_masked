
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,char const*) ;
 int ** FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (lua_State *VAR_1, FILE *VAR_2, int VAR_3, const char *VAR_4) {
  *FUNC_4(VAR_1) = VAR_2;
  if (VAR_3 > 0) {
    FUNC_0(VAR_1, -1);
    FUNC_1(VAR_1, VAR_0, VAR_3);
  }
  FUNC_0(VAR_1, -2);
  FUNC_2(VAR_1, -2);
  FUNC_3(VAR_1, -3, VAR_4);
}
