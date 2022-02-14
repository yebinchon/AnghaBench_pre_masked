
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_mutex; int event_cond; int event_queue; } ;
struct TYPE_4__ {TYPE_1__ mir; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
    FUNC_3(&VAR_0.mir.event_mutex);

    if (FUNC_1(VAR_0.mir.event_queue))
        FUNC_2(&VAR_0.mir.event_cond, &VAR_0.mir.event_mutex);

    FUNC_4(&VAR_0.mir.event_mutex);

    FUNC_0();
}
