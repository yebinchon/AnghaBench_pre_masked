
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* action_get_title ) (char const*,char const*,unsigned int,char*,size_t) ;char* action_title_cache; } ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_7__ {int size; TYPE_1__* list; } ;
typedef TYPE_3__ file_list_t ;
struct TYPE_5__ {scalar_t__ actiondata; } ;


 int FUNC_0 (char const**,char const**,unsigned int*,int *,int *) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char const*,char const*,unsigned int,char*,size_t) ;

int FUNC_5(char *VAR_1, size_t VAR_2)
{
   unsigned VAR_3 = 0;
   const char *VAR_4 = ((void*)0);
   const char *VAR_5 = ((void*)0);
   const file_list_t *VAR_6 = VAR_0 ?
      FUNC_1(VAR_0, 0) : ((void*)0);
   menu_file_list_cbs_t *VAR_7 = VAR_6
      ? (menu_file_list_cbs_t*)VAR_6->list[VAR_6->size - 1].actiondata
      : ((void*)0);

   if (!VAR_7)
      return -1;

   if (VAR_7 && VAR_7->action_get_title)
   {
      int VAR_8;
      if (!FUNC_2(VAR_7->action_title_cache))
      {
         FUNC_3(VAR_1, VAR_7->action_title_cache, VAR_2);
         return 0;
      }
      FUNC_0(&VAR_4, &VAR_5, &VAR_3, ((void*)0), ((void*)0));
      VAR_8 = VAR_7->action_get_title(VAR_4, VAR_5, VAR_3, VAR_1, VAR_2);
      if (VAR_8 == 1)
         FUNC_3(VAR_7->action_title_cache, VAR_1, sizeof(VAR_7->action_title_cache));
      return VAR_8;
   }
   return 0;
}
