
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int GString ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1) {
 size_t VAR_2;
 const char *VAR_3 = FUNC_3(VAR_1, 1, &VAR_2);
 GString *VAR_4;

 VAR_4 = FUNC_2(((void*)0));
 FUNC_5(VAR_4, VAR_3, VAR_2);

 FUNC_4(VAR_1, FUNC_0(VAR_4));

 FUNC_1(VAR_4, VAR_0);

 return 1;
}
