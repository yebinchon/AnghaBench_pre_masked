
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* title; struct TYPE_8__* error; int (* cleanup ) (TYPE_1__*) ;int user_data; int task_data; int (* callback ) (TYPE_1__*,int ,int ,TYPE_1__*) ;} ;
typedef TYPE_1__ retro_task_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(void)
{
   retro_task_t *VAR_1 = ((void*)0);
   while ((VAR_1 = FUNC_3(&VAR_0)) != ((void*)0))
   {
      FUNC_4(VAR_1);

      if (VAR_1->callback)
         VAR_1->callback(VAR_1, VAR_1->task_data, VAR_1->user_data, VAR_1->error);

      if (VAR_1->cleanup)
          VAR_1->cleanup(VAR_1);

      if (VAR_1->error)
         FUNC_0(VAR_1->error);

      if (VAR_1->title)
         FUNC_0(VAR_1->title);

      FUNC_0(VAR_1);
   }
}
