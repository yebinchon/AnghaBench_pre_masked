
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmsgpack_dom_value {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,struct rmsgpack_dom_value*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(void *VAR_1, struct rmsgpack_dom_value *VAR_2)
{
   int VAR_3 = 0;
   lua_State *VAR_4 = VAR_1;

   FUNC_1(VAR_4, VAR_0, "testlib_get_value");

   if (FUNC_4(VAR_4, 0, 1, 0) != 0)
   {
      FUNC_7(
            "error running function `get_value': %s\n",
            FUNC_6(VAR_4, -1)
            );
   }

   if (FUNC_2(VAR_4, -1))
      VAR_3 = 1;
   else if (FUNC_3(VAR_4, -1))
      VAR_3 = FUNC_0(VAR_4, -1, VAR_2);
   else
      FUNC_7("function `get_value' must return a table or nil\n");

   FUNC_5(VAR_4, 1);
   return VAR_3;
}
