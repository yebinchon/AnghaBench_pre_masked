
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int retro_task_t ;
struct TYPE_3__ {int state; int percent; } ;
typedef TYPE_1__ powerstate_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(retro_task_t *VAR_2,
      void *VAR_3,
      void *VAR_4, const char *VAR_5)
{
   powerstate_t *VAR_6 = (powerstate_t*)VAR_3;

   VAR_0 = VAR_6->percent;
   VAR_1 = VAR_6->state;

   FUNC_0(VAR_6);
}
