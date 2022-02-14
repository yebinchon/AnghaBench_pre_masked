
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {size_t size; TYPE_1__* elems; } ;
typedef int config_file_t ;
struct TYPE_2__ {char* data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,char**) ;
 int * FUNC_2 (char*,char const*) ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char const*,char const*,int,int,int,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*,size_t) ;

void FUNC_10(const char *VAR_0, char *VAR_1, size_t VAR_2,
      const char *VAR_3, const char *VAR_4,
      const char *VAR_5, bool VAR_6,
      bool VAR_7)
{
   size_t VAR_8;
   const char *VAR_9 = !FUNC_7(VAR_3) ?
      VAR_3 : VAR_4;
   struct string_list *VAR_10 = FUNC_4(
         VAR_4, VAR_5, 0, VAR_6, 0, 0);
   const char *VAR_11 = FUNC_6(VAR_0);

   if (!VAR_10)
      return;

   for (VAR_8 = 0; VAR_8 < VAR_10->size; VAR_8++)
   {
      config_file_t *VAR_12 = ((void*)0);
      char *VAR_13 = ((void*)0);
      const char *VAR_14 = VAR_10->elems[VAR_8].data;

      if (!FUNC_8(FUNC_6(VAR_14), VAR_11))
         continue;

      VAR_12 = FUNC_2(VAR_10->elems[VAR_8].data,
               VAR_9);

      if (!VAR_12)
         continue;

      if (FUNC_1(VAR_12, VAR_7
               ? "display_name" : "corename",
            &VAR_13))
      {
         FUNC_9(VAR_1, VAR_13, VAR_2);
         FUNC_5(VAR_13);
      }

      FUNC_0(VAR_12);
      break;
   }

   FUNC_3(VAR_10);
   VAR_10 = ((void*)0);
}
