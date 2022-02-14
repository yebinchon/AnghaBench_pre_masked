
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_backends_t ;
typedef int network_backend_t ;
typedef int lua_State ;
typedef int backend ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int ** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0) {
 network_backend_t *VAR_1;
 network_backend_t **VAR_2;

 network_backends_t *VAR_3 = *(network_backends_t **)FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_0, 2) - 1;


 if (((void*)0) == (VAR_1 = FUNC_6(VAR_3, VAR_4))) {
  FUNC_3(VAR_0);

  return 1;
 }

 VAR_2 = FUNC_2(VAR_0, sizeof(VAR_1));
 *VAR_2 = VAR_1;

 FUNC_5(VAR_0);
 FUNC_4(VAR_0, -2);

 return 1;
}
