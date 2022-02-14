
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 void* FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_2) {
  void *VAR_3;
  FUNC_0(VAR_2, 1);
  VAR_3 = FUNC_6(VAR_2, 1);
  FUNC_1(VAR_2, VAR_1, VAR_0);
  if (VAR_3 == ((void*)0) || !FUNC_2(VAR_2, 1) || !FUNC_5(VAR_2, -2, -1))
    FUNC_4(VAR_2);
  else if (*((FILE **)VAR_3) == ((void*)0))
    FUNC_3(VAR_2, "closed file");
  else
    FUNC_3(VAR_2, "file");
  return 1;
}
