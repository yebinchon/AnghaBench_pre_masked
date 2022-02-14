
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int save_task_state_t ;
typedef int retro_task_t ;
struct TYPE_2__ {char* path; int * data; scalar_t__ size; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(retro_task_t *VAR_1,
      void *VAR_2,
      void *VAR_3, const char *VAR_4)
{
   save_task_state_t *VAR_5 = (save_task_state_t*)VAR_2;


   VAR_0.path[0] = '\0';
   VAR_0.size = 0;
   if (VAR_0.data)
   {
      FUNC_0(VAR_0.data);
      VAR_0.data = ((void*)0);
   }

   FUNC_0(VAR_5);
}
