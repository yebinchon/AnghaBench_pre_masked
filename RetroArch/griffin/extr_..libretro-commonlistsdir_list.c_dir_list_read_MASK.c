
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
struct RDIR {int dummy; } ;
typedef int file_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,char const*,int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct RDIR*) ;
 scalar_t__ FUNC_4 (struct RDIR*) ;
 char* FUNC_5 (struct RDIR*) ;
 scalar_t__ FUNC_6 (struct RDIR*,int *) ;
 struct RDIR* FUNC_7 (char const*,int) ;
 scalar_t__ FUNC_8 (struct RDIR*) ;
 int FUNC_9 (char const*,char*) ;
 int FUNC_10 (struct string_list*,char*,union string_list_elem_attr) ;
 scalar_t__ FUNC_11 (struct string_list*,char*,char const*) ;

__attribute__((used)) static int FUNC_12(const char *VAR_5,
      struct string_list *VAR_6, struct string_list *VAR_7,
      bool VAR_8, bool VAR_9,
      bool VAR_10, bool VAR_11)
{
   struct RDIR *VAR_12 = FUNC_7(VAR_5, VAR_9);

   if (!VAR_12 || FUNC_4(VAR_12))
      goto error;

   while (FUNC_8(VAR_12))
   {
      union string_list_elem_attr VAR_13;
      char VAR_14[VAR_0];
      const char *VAR_15 = FUNC_5(VAR_12);

      if (!VAR_9 && *VAR_15 == '.')
         continue;
      if (!FUNC_9(VAR_15, ".") || !FUNC_9(VAR_15, ".."))
         continue;

      VAR_14[0] = '\0';
      FUNC_0(VAR_14, VAR_5, VAR_15, sizeof(VAR_14));

      if (FUNC_6(VAR_12, ((void*)0)))
      {
         if (VAR_11)
            FUNC_12(VAR_14, VAR_6, VAR_7, VAR_8,
                  VAR_9, VAR_10, VAR_11);

         if (!VAR_8)
            continue;
         VAR_13.i = VAR_2;
      }
      else
      {
         const char *VAR_16 = FUNC_1(VAR_15);

         VAR_13.i = VAR_3;
         if (FUNC_11(VAR_7, ".", VAR_16))
            VAR_13.i = VAR_4;
         else
         {
            bool VAR_17;
            if ((VAR_17 = FUNC_2(VAR_14)))
               VAR_13.i = VAR_1;

            if (VAR_7 &&
                  (!VAR_17 || !VAR_10))
               continue;
         }
      }

      if (!FUNC_10(VAR_6, VAR_14, VAR_13))
         goto error;
   }

   FUNC_3(VAR_12);

   return 0;

error:
   if (VAR_12)
      FUNC_3(VAR_12);
   return -1;
}
