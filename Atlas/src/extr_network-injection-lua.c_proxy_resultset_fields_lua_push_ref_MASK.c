
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int GRef ;


 int FUNC_0 (int *) ;
 int ** FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_1, GRef *VAR_2) {
 GRef **VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_1, sizeof(GRef *));
 *VAR_3 = VAR_2;

 FUNC_3(VAR_1, VAR_0);
 FUNC_2(VAR_1, -2);

 return 1;
}
