
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* file; } ;
typedef TYPE_1__ save_task_state_t ;
typedef int retro_task_t ;
typedef int load_task_data_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(retro_task_t *VAR_0,
      save_task_state_t *VAR_1)
{
   load_task_data_t *VAR_2 = ((void*)0);

   FUNC_9(VAR_0, 1);

   if (VAR_1->file)
   {
      FUNC_2(VAR_1->file);
      FUNC_1(VAR_1->file);
   }

   if (!FUNC_6(VAR_0) && FUNC_5(VAR_0))
      FUNC_8(VAR_0, FUNC_4("Task canceled"));

   VAR_2 = (load_task_data_t*)FUNC_0(1, sizeof(*VAR_2));

   if (!VAR_2)
      return;

   FUNC_3(VAR_2, VAR_1, sizeof(*VAR_2));

   FUNC_7(VAR_0, VAR_2);

   FUNC_1(VAR_1);
}
