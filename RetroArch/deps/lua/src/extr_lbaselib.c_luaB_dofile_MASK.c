
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 char* FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int (*) (int *,int ,int )) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_2) {
  const char *VAR_3 = FUNC_2(VAR_2, 1, ((void*)0));
  FUNC_5(VAR_2, 1);
  if (FUNC_1(VAR_2, VAR_3) != VAR_1)
    return FUNC_4(VAR_2);
  FUNC_3(VAR_2, 0, VAR_0, 0, FUNC_0);
  return FUNC_0(VAR_2, 0, 0);
}
