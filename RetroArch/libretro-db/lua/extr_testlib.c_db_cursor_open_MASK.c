
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int libretrodb_t ;
typedef int libretrodb_cursor_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0)
{
   int VAR_1;
   libretrodb_cursor_t *VAR_2 = ((void*)0);
   libretrodb_t *VAR_3 = FUNC_0(VAR_0);
   VAR_2 = FUNC_3(VAR_0, sizeof(libretrodb_t));
   if ((VAR_1 = FUNC_1(VAR_3, VAR_2, ((void*)0))) == 0)
   {
      FUNC_2(VAR_0, "RarchDB.Cursor");
      FUNC_7(VAR_0, -2);
      FUNC_5(VAR_0);
   }
   else
   {
      FUNC_4(VAR_0, 1);
      FUNC_5(VAR_0);
      FUNC_6(VAR_0, FUNC_8(-VAR_1));
   }
   return 2;
}
