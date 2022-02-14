
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* dir; char* path; size_t len; char* s; scalar_t__ data; } ;
typedef TYPE_1__ menu_content_ctx_defer_info_t ;
struct TYPE_7__ {int path; } ;
typedef TYPE_2__ core_info_t ;
typedef int core_info_list_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int *,char*,TYPE_2__ const**,size_t*) ;
 int FUNC_3 (char*,char const*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,size_t) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static bool FUNC_8(menu_content_ctx_defer_info_t *VAR_0,
      bool VAR_1,
      char *VAR_2, size_t VAR_3)
{
   const core_info_t *VAR_4 = ((void*)0);
   size_t VAR_5 = 0;
   core_info_list_t *VAR_6 = (core_info_list_t*)VAR_0->data;
   const char *VAR_7 = VAR_0->dir;

   if (!FUNC_5(VAR_7))
   {
      const char *VAR_8 = VAR_0->path;
      size_t VAR_9 = VAR_0->len;

      if (!FUNC_5(VAR_8))
         FUNC_3(VAR_0->s,
               VAR_7, VAR_8,
               VAR_9);
   }

   if (VAR_6)
      FUNC_2(VAR_6,
            VAR_0->s, &VAR_4,
            &VAR_5);



   if (VAR_1)
   {
      FUNC_1((core_info_t**)&VAR_4);
      if (VAR_4)
      {




         VAR_5 = 1;
      }
   }



   if (VAR_5 != 1)
      return 0;

    if (VAR_4)
      FUNC_6(VAR_2, VAR_4->path, VAR_3);

   return 1;
}
