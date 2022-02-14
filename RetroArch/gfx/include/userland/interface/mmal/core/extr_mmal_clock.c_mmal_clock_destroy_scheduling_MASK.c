
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_pending; int list_free; } ;
struct TYPE_6__ {int timer; int event; TYPE_1__ request; int clock; } ;
typedef TYPE_2__ MMAL_CLOCK_PRIVATE_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(MMAL_CLOCK_PRIVATE_T *VAR_0)
{
   FUNC_1(VAR_0);

   FUNC_0(&VAR_0->clock);

   FUNC_3(VAR_0->request.list_free);
   FUNC_3(VAR_0->request.list_pending);

   FUNC_4(&VAR_0->event);

   FUNC_2(&VAR_0->timer);
}
