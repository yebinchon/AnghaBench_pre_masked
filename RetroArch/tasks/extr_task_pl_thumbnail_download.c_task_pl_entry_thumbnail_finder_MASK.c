
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handler; scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_6__ {scalar_t__ list_index; int playlist_path; } ;
typedef TYPE_2__ pl_thumb_handle_t ;
struct TYPE_7__ {scalar_t__ idx; int playlist_path; } ;
typedef TYPE_3__ pl_entry_id_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(retro_task_t *VAR_1, void *VAR_2)
{
   pl_entry_id_t *VAR_3 = ((void*)0);
   pl_thumb_handle_t *VAR_4 = ((void*)0);

   if (!VAR_1 || !VAR_2)
      return 0;

   if (VAR_1->handler != VAR_0)
      return 0;

   VAR_3 = (pl_entry_id_t*)VAR_2;
   if (!VAR_3)
      return 0;

   VAR_4 = (pl_thumb_handle_t*)VAR_1->state;
   if (!VAR_4)
      return 0;

   return (VAR_3->idx == VAR_4->list_index) &&
          FUNC_0(VAR_3->playlist_path, VAR_4->playlist_path);
}
