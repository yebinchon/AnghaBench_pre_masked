
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct item_file {int * label; int * path; int * alt; void* actiondata; void* userdata; } ;
typedef int stripes_node_t ;
typedef int menu_file_list_cbs_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_9__ {size_t size; struct item_file* list; } ;
typedef TYPE_1__ file_list_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t,void*) ;
 int FUNC_3 (TYPE_1__*,size_t,void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*,void*,int) ;
 int FUNC_6 (uintptr_t*) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_11(const file_list_t *VAR_0, file_list_t *VAR_1,
      size_t VAR_2, size_t VAR_3)
{
   size_t VAR_4, VAR_5 = 0;
   menu_animation_ctx_tag VAR_6 = (uintptr_t)VAR_1;

   FUNC_6(&VAR_6);

   FUNC_10(VAR_1, 1);

   FUNC_0(VAR_1);
   FUNC_1(VAR_1, (VAR_3 + 1) - VAR_2);

   for (VAR_4 = VAR_2; VAR_4 <= VAR_3; ++VAR_4)
   {
      struct item_file *VAR_7 = &VAR_1->list[VAR_5];
      struct item_file *VAR_8 = &VAR_0->list[VAR_4];

      void *VAR_9 = VAR_8->userdata;
      void *VAR_10 = VAR_8->actiondata;

      *VAR_7 = *VAR_8;
      VAR_7->alt = FUNC_8(VAR_7->alt) ? ((void*)0) : FUNC_7(VAR_7->alt);
      VAR_7->path = FUNC_8(VAR_7->path) ? ((void*)0) : FUNC_7(VAR_7->path);
      VAR_7->label = FUNC_8(VAR_7->label) ? ((void*)0) : FUNC_7(VAR_7->label);

      if (VAR_9)
         FUNC_3(VAR_1, VAR_5, (void*)FUNC_9((const stripes_node_t*)VAR_9));

      if (VAR_10)
      {
         void *VAR_11 = FUNC_4(sizeof(menu_file_list_cbs_t));
         FUNC_5(VAR_11, VAR_10, sizeof(menu_file_list_cbs_t));
         FUNC_2(VAR_1, VAR_5, VAR_11);
      }

      ++VAR_5;
   }

   VAR_1->size = VAR_5;
}
