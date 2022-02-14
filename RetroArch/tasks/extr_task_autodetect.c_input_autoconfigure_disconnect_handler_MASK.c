
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_11__ {struct TYPE_11__* msg; } ;
typedef TYPE_2__ autoconfig_disconnect_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_7(retro_task_t *VAR_1)
{
   autoconfig_disconnect_t *VAR_2 = (autoconfig_disconnect_t*)VAR_1->state;

   FUNC_6(VAR_1, FUNC_3(VAR_2->msg));

   FUNC_5(VAR_1, 1);

   FUNC_0("%s: %s\n", FUNC_2(VAR_0), VAR_2->msg);

   if (!FUNC_4(VAR_2->msg))
      FUNC_1(VAR_2->msg);
   FUNC_1(VAR_2);
}
