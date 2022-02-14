
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char const**) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*,...) ;
 char* FUNC_10 (int) ;
 int VAR_4 ;

int FUNC_11(int VAR_5, char ** VAR_6)
{
   lua_State *VAR_7;
   const char *VAR_8;
   const char *VAR_9;
   RFILE *VAR_10;
   int VAR_11 = 0;

   if (VAR_5 < 3)
   {
      FUNC_9("usage:\n%s <db file> <lua file> [args ...]\n", VAR_6[0]);
      return 1;
   }

   VAR_8 = VAR_6[1];
   VAR_9 = VAR_6[2];
   VAR_7 = FUNC_6();

   FUNC_7(VAR_7);
   FUNC_5(VAR_7, VAR_0);

   if (FUNC_4(VAR_7, VAR_9) != 0)
      return 1;

   FUNC_0(VAR_7, VAR_5 - 2, (const char **) VAR_6 + 2);

   VAR_10 = FUNC_2(VAR_8,
         VAR_2,
         VAR_1);

   if (!VAR_10)
   {
      FUNC_9(
            "Could not open destination file '%s': %s\n",
            VAR_8,
            FUNC_10(VAR_3)
            );
      VAR_11 = VAR_3;
      goto clean;
   }

   VAR_11 = FUNC_3(VAR_10, &VAR_4, VAR_7);

clean:
   FUNC_8(VAR_7);
   FUNC_1(VAR_10);
   return VAR_11;
}
