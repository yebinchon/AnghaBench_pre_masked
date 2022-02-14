
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*,size_t,char const*,size_t,char const*,size_t) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0) {
 size_t VAR_1;
 const char *VAR_2 = FUNC_0(VAR_0, 1, &VAR_1);
 size_t VAR_3;
 const char *VAR_4 = FUNC_0(VAR_0, 2, &VAR_3);
 size_t VAR_5;
 const char *VAR_6 = FUNC_0(VAR_0, 3, &VAR_5);

 FUNC_1(VAR_0, FUNC_2(
   VAR_2, VAR_1,
   VAR_4, VAR_3,
   VAR_6, VAR_5));

 return 1;
}
