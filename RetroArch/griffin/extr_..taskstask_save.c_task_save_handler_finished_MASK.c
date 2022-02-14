
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* data; scalar_t__ undo_save; struct TYPE_9__* file; } ;
typedef TYPE_1__ save_task_state_t ;
typedef int retro_task_t ;
struct TYPE_10__ {TYPE_1__* data; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_10(retro_task_t *VAR_1,
      save_task_state_t *VAR_2)
{
   save_task_state_t *VAR_3 = ((void*)0);

   FUNC_9(VAR_1, 1);

   FUNC_2(VAR_2->file);
   FUNC_1(VAR_2->file);

   if (!FUNC_6(VAR_1) && FUNC_5(VAR_1))
      FUNC_8(VAR_1, FUNC_4("Task canceled"));

   VAR_3 = (save_task_state_t*)FUNC_0(1, sizeof(*VAR_3));
   FUNC_3(VAR_3, VAR_2, sizeof(*VAR_2));

   FUNC_7(VAR_1, VAR_3);

   if (VAR_2->data)
   {
      if (VAR_2->undo_save && VAR_2->data == VAR_0.data)
         VAR_0.data = ((void*)0);
      FUNC_1(VAR_2->data);
      VAR_2->data = ((void*)0);
   }

   FUNC_1(VAR_2);
}
