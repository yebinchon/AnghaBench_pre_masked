
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer_expired; int wait_event; } ;
typedef TYPE_1__ ILCS_SERVICE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   ILCS_SERVICE_T *VAR_1 = (ILCS_SERVICE_T *) VAR_0;

   FUNC_0(VAR_1->timer_expired == 0);
   VAR_1->timer_expired = 1;
   FUNC_1(&VAR_1->wait_event);
}
