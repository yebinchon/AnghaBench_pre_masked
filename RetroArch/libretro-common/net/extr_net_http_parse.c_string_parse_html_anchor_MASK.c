
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,size_t) ;
 char* FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_0, char *VAR_1, char *VAR_2,
      size_t VAR_3, size_t VAR_4)
{
   if (!VAR_0 || !VAR_1 || !VAR_2)
      return 1;

   FUNC_1(VAR_1, 0, VAR_3);
   FUNC_1(VAR_2, 0, VAR_4);

   VAR_0 = FUNC_2(VAR_0, "<a href=\"");

   if (!VAR_0)
      return 1;

   VAR_0 += 9;

   if (VAR_0 && *VAR_0)
   {
      if (!*VAR_1)
      {
         const char *VAR_5 = FUNC_3(VAR_0, "\"");

         if (!VAR_5)
            return 1;

         FUNC_0(VAR_1, VAR_0, VAR_5 - VAR_0);

         *(VAR_1 + (VAR_5 - VAR_0)) = '\0';
         VAR_0 += VAR_5 - VAR_0;
      }

      if (!*VAR_2)
      {
         const char *VAR_6 = FUNC_3(VAR_0, "\">");
         const char *VAR_7 = VAR_6 ? FUNC_3(VAR_6, "</a>") : ((void*)0);

         if (!VAR_6 || !VAR_7)
            return 1;

         FUNC_0(VAR_2, VAR_6 + 2, VAR_7 - VAR_6 - 2);

         *(VAR_2 + (VAR_7 - VAR_6 - 2)) = '\0';
      }
   }

   return 0;
}
