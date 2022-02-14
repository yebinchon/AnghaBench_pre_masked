
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int libretrodb_t ;
typedef int libretrodb_query_t ;
typedef int libretrodb_cursor_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,char const*,int ,char const**) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,int) ;
 char const* FUNC_11 (int) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static int FUNC_13(lua_State *VAR_0)
{
   libretrodb_t *VAR_1 = FUNC_0(VAR_0);
   const char *VAR_2 = FUNC_4(VAR_0, -1);
   const char *VAR_3 = ((void*)0);
   libretrodb_query_t *VAR_4 = FUNC_2(
         VAR_1, VAR_2, FUNC_12(VAR_2), &VAR_3);

   if (VAR_3)
   {
      FUNC_8(VAR_0);
      FUNC_9(VAR_0, VAR_3);
   }
   else
   {
      int VAR_5;
      libretrodb_cursor_t *VAR_6 = FUNC_6(VAR_0, sizeof(libretrodb_t));

      if ((VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_4)) == 0)
      {
         FUNC_5(VAR_0, "RarchDB.Cursor");
         FUNC_10(VAR_0, -2);
         FUNC_8(VAR_0);
      }
      else
      {
         FUNC_7(VAR_0, 1);
         FUNC_8(VAR_0);
         FUNC_9(VAR_0, FUNC_11(-VAR_5));
      }
      FUNC_3(VAR_4);
   }
   return 2;
}
