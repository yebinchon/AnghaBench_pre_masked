
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_5__ {char* alt; char* path; } ;


 int FUNC_0 (TYPE_2__ const*,size_t,char const**) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

bool FUNC_2(const file_list_t *VAR_0, const char *VAR_1, size_t *VAR_2)
{
   size_t VAR_3;
   bool VAR_4 = 0;

   if (!VAR_0)
      return 0;

   for (VAR_3 = 0; VAR_3 < VAR_0->size; VAR_3++)
   {
      const char *VAR_5 = ((void*)0);
      const char *VAR_6 = VAR_0->list[VAR_3].alt
            ? VAR_0->list[VAR_3].alt
            : VAR_0->list[VAR_3].path;

      if (!VAR_6)
      {
         FUNC_0(VAR_0, VAR_3, &VAR_6);
         if (!VAR_6)
            continue;
      }

      VAR_5 = (const char *)FUNC_1(VAR_6, VAR_1);
      if (VAR_5 == VAR_6)
      {

         *VAR_2 = VAR_3;
         VAR_4 = 1;
         break;
      }
      else if (VAR_5 && !VAR_4)
      {


         *VAR_2 = VAR_3;
         VAR_4 = 1;
      }
   }

   return VAR_4;
}
