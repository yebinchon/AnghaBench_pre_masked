
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int dummy; } ;
typedef int lua_State ;
typedef int libretrodb_cursor_t ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,struct rmsgpack_dom_value*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct rmsgpack_dom_value*) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_0)
{
   libretrodb_cursor_t *VAR_1 = FUNC_0(VAR_0);
   struct rmsgpack_dom_value VAR_2;
   if (FUNC_1(VAR_1, &VAR_2) == 0)
      FUNC_3(VAR_0, &VAR_2);
   else
      FUNC_2(VAR_0);
   return 1;
}
