
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proxy_resultset_t ;
typedef int lua_State ;
typedef int GRef ;
typedef int GDestroyNotify ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int *,int ) ;
 int ** FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_2, proxy_resultset_t *VAR_3) {
 GRef **VAR_4;
 GRef *VAR_5;

 VAR_5 = FUNC_0();
 FUNC_1(VAR_5, VAR_3, (GDestroyNotify)VAR_1);

 VAR_4 = FUNC_2(VAR_2, sizeof(GRef *));
 *VAR_4 = VAR_5;

 FUNC_4(VAR_2, VAR_0);
 FUNC_3(VAR_2, -2);

 return 1;
}
