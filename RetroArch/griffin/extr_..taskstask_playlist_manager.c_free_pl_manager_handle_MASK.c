
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * playlist; struct TYPE_5__* playlist_name; struct TYPE_5__* playlist_path; } ;
typedef TYPE_1__ pl_manager_handle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(pl_manager_handle_t *VAR_0)
{
   if (!VAR_0)
      return;

   if (!FUNC_2(VAR_0->playlist_path))
   {
      FUNC_0(VAR_0->playlist_path);
      VAR_0->playlist_path = ((void*)0);
   }

   if (!FUNC_2(VAR_0->playlist_name))
   {
      FUNC_0(VAR_0->playlist_name);
      VAR_0->playlist_name = ((void*)0);
   }

   if (VAR_0->playlist)
   {
      FUNC_1(VAR_0->playlist);
      VAR_0->playlist = ((void*)0);
   }

   FUNC_0(VAR_0);
   VAR_0 = ((void*)0);
}
