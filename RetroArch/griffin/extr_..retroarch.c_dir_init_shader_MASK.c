
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rarch_dir_list {TYPE_4__* list; scalar_t__ ptr; } ;
struct TYPE_7__ {int * directory_video_shader; } ;
struct TYPE_9__ {TYPE_1__ paths; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {unsigned int size; TYPE_2__* elems; } ;
struct TYPE_8__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(void)
{
   unsigned VAR_4;
   struct rarch_dir_list *VAR_5 = (struct rarch_dir_list*)&VAR_3;
   settings_t *VAR_6 = VAR_2;

   if (!VAR_6 || !*VAR_6->paths.directory_video_shader)
      return 0;

   VAR_5->list = FUNC_2(
         VAR_6->paths.directory_video_shader, VAR_0, ((void*)0));

   if (!VAR_5->list || VAR_5->list->size == 0)
   {
      FUNC_1();
      return 0;
   }

   VAR_5->ptr = 0;
   FUNC_3(VAR_5->list, 0);

   for (VAR_4 = 0; VAR_4 < VAR_5->list->size; VAR_4++)
      FUNC_0("%s \"%s\"\n",
            FUNC_4(VAR_1),
            VAR_5->list->elems[VAR_4].data);
   return 1;
}
