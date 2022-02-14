
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int Capture ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static Capture *FUNC_5 (lua_State *VAR_1, Capture *VAR_2, int VAR_3, int VAR_4) {
  Capture *VAR_5;
  if (VAR_3 >= VAR_0/((int)sizeof(Capture) * 2))
    FUNC_1(VAR_1, "too many captures");
  VAR_5 = (Capture *)FUNC_2(VAR_1, VAR_3 * 2 * sizeof(Capture));
  FUNC_4(VAR_5, VAR_2, VAR_3 * sizeof(Capture));
  FUNC_3(VAR_1, FUNC_0(VAR_4));
  return VAR_5;
}
