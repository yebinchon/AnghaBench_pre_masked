
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int path; } ;
typedef int playlist_t ;
struct TYPE_3__ {scalar_t__ rpl_entry_selection_ptr; int deferred_path; } ;
typedef TYPE_1__ menu_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,struct playlist_entry const**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(menu_handle_t *VAR_2, playlist_t *VAR_3)
{
   if (!VAR_2)
      return 0;



   if (!FUNC_3(VAR_0, ((void*)0)))
      return FUNC_4(VAR_2->deferred_path, FUNC_0(VAR_1));



   if (!VAR_3)
      return 0;

   if (VAR_2->rpl_entry_selection_ptr < FUNC_2(VAR_3))
   {
      const struct playlist_entry *VAR_4 = ((void*)0);

      FUNC_1(VAR_3, VAR_2->rpl_entry_selection_ptr, &VAR_4);
      return !FUNC_4(VAR_2->deferred_path, VAR_4->path);
   }

   return 0;
}
