
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tokens ;
typedef int lua_State ;
typedef int GPtrArray ;


 char* FUNC_0 (int *,int,size_t*) ;
 int ** FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;

int FUNC_6(lua_State *VAR_0) {
 size_t VAR_1;
 const char *VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
 GPtrArray *VAR_3 = FUNC_5();
 GPtrArray **VAR_4;

 FUNC_3(VAR_3, VAR_2, VAR_1);

 VAR_4 = FUNC_1(VAR_0, sizeof(VAR_3));
 *VAR_4 = VAR_3;

 FUNC_4(VAR_0);
 FUNC_2(VAR_0, -2);

 return 1;
}
