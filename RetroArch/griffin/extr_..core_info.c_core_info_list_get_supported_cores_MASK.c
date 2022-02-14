
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int dummy; } ;
typedef int core_info_t ;
struct TYPE_3__ {size_t count; int * list; } ;
typedef TYPE_1__ core_info_list_t ;


 scalar_t__ FUNC_0 (int const*,struct string_list*) ;
 scalar_t__ FUNC_1 (int const*,char const*) ;
 int VAR_0 ;
 struct string_list* VAR_1 ;
 char const* VAR_2 ;
 struct string_list* FUNC_2 (char const*,int *) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,size_t,int,int ) ;
 int FUNC_5 (struct string_list*) ;

void FUNC_6(core_info_list_t *VAR_3,
      const char *VAR_4, const core_info_t **VAR_5, size_t *VAR_6)
{
   size_t VAR_7;
   size_t VAR_8 = 0;




   if (!VAR_3)
      return;

   VAR_2 = VAR_4;
   FUNC_4(VAR_3->list, VAR_3->count,
         sizeof(core_info_t), VAR_0);

   for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++, VAR_8++)
   {
      const core_info_t *VAR_9 = &VAR_3->list[VAR_7];

      if (FUNC_1(VAR_9, VAR_4))
         continue;






      break;
   }






   *VAR_5 = VAR_3->list;
   *VAR_6 = VAR_8;
}
