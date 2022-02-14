
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(lua_State * VAR_0, int VAR_1, const char ** VAR_2)
{
   int VAR_3 = -1;
   int VAR_4;

   FUNC_0(VAR_0, "init");
   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
      FUNC_2(VAR_0, VAR_2[VAR_4]);

   if (FUNC_1(VAR_0, VAR_1, 0, 0) != 0)
   {
      FUNC_4(
            "error running function `init': %s\n",
            FUNC_3(VAR_0, -1)
            );
   }

   return VAR_3;
}
