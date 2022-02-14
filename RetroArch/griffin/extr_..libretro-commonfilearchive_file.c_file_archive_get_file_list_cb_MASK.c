
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union string_list_elem_attr {scalar_t__ i; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct string_list {int dummy; } ;
struct archive_extract_userdata {int list; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ,char const*,union string_list_elem_attr) ;
 int FUNC_2 (struct string_list*,char*,char const*) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char const*,char*) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
      const char *VAR_1,
      const char *VAR_2,
      const uint8_t *VAR_3,
      unsigned VAR_4,
      uint32_t VAR_5,
      uint32_t VAR_6,
      uint32_t VAR_7,
      struct archive_extract_userdata *VAR_8)
{
   union string_list_elem_attr VAR_9;
   VAR_9.i = 0;

   if (VAR_2)
   {
      size_t VAR_10 = FUNC_5(VAR_1);

      char VAR_11 = VAR_1[VAR_10 - 1];
      struct string_list *VAR_12 = ((void*)0);


      if (VAR_11 == '/' || VAR_11 == '\\' )
      {
         FUNC_3(VAR_12);
         return 0;
      }

      VAR_12 = FUNC_4(VAR_2, "|");

      if (VAR_12)
      {
         const char *VAR_13 = FUNC_0(VAR_1);

         if (!VAR_13)
         {
            FUNC_3(VAR_12);
            return 0;
         }

         if (!FUNC_2(VAR_12, ".", VAR_13))
         {

            FUNC_3(VAR_12);
            return -1;
         }

         VAR_9.i = VAR_0;
         FUNC_3(VAR_12);
      }
   }

   return FUNC_1(VAR_8->list, VAR_1, VAR_9);
}
