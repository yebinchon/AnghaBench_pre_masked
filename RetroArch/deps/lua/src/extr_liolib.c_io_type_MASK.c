
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int LStream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  LStream *VAR_2;
  FUNC_1(VAR_1, 1);
  VAR_2 = (LStream *)FUNC_2(VAR_1, 1, VAR_0);
  if (VAR_2 == ((void*)0))
    FUNC_4(VAR_1);
  else if (FUNC_0(VAR_2))
    FUNC_3(VAR_1, "closed file");
  else
    FUNC_3(VAR_1, "file");
  return 1;
}
