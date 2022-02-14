
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int libretrodb_cursor_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(lua_State *VAR_0)
{
   libretrodb_cursor_t *VAR_1 = FUNC_0(VAR_0);

   (void)VAR_1;

   FUNC_1(VAR_0, -1, "read");
   FUNC_2(VAR_0, -2);
   return 2;
}
