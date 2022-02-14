
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_4)
{
   RFILE *VAR_5;
   const char *VAR_6 = FUNC_3(VAR_4, -2);

   if (!FUNC_5(VAR_4, -1))
   {
      FUNC_6(VAR_4, "second argument must be a function");
      FUNC_4(VAR_4);
   }
   FUNC_7(VAR_4, VAR_0, "testlib_get_value");

   VAR_5 = FUNC_1(VAR_6,
         VAR_2,
         VAR_1);
   if (!VAR_5)
   {
      FUNC_6(VAR_4, "Could not open destination file");
      FUNC_4(VAR_4);
   }

   FUNC_2(VAR_5, &VAR_3, VAR_4);
   FUNC_0(VAR_5);

   return 0;
}
