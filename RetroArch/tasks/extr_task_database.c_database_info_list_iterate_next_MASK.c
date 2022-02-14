
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * info; scalar_t__ entry_index; int list_index; } ;
typedef TYPE_1__ database_state_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(
      database_state_handle_t *VAR_0
      )
{
   VAR_0->list_index++;
   VAR_0->entry_index = 0;

   FUNC_0(VAR_0->info);
   FUNC_1(VAR_0->info);
   VAR_0->info = ((void*)0);

   return 1;
}
