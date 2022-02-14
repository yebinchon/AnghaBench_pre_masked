
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int log ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int ) ;
 char const* FUNC_4 (int ) ;
 int FUNC_5 (char*,size_t,char*,char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_9(
      const char *VAR_4,
      char *VAR_5, size_t VAR_6)
{
   char VAR_7[VAR_2];
   bool VAR_8 = !FUNC_6(VAR_4);
   const char *VAR_9 = VAR_8 ? VAR_4 :
      FUNC_4(VAR_3);

   if (VAR_8 && FUNC_2(VAR_4))
   {
      FUNC_5(VAR_5, VAR_6, "%s \"%s\".",
            FUNC_3(VAR_1),
            VAR_4);

      FUNC_8(VAR_7, "[config] ", sizeof(VAR_7));
      FUNC_7(VAR_7, VAR_5, sizeof(VAR_7));
      FUNC_1("%s\n", VAR_7);
      return 1;
   }

   if (!FUNC_6(VAR_9))
   {
      FUNC_5(VAR_5, VAR_6, "%s \"%s\".",
            FUNC_3(VAR_0),
            VAR_9);

      FUNC_8(VAR_7, "[config] ", sizeof(VAR_7));
      FUNC_7(VAR_7, VAR_5, sizeof(VAR_7));
      FUNC_0("%s\n", VAR_7);
   }

   return 0;
}
