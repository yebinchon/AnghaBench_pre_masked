
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection; int event_mutex; int event_queue; } ;
struct TYPE_4__ {TYPE_1__ mir; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
    FUNC_1();
    FUNC_2();
    FUNC_3();

    FUNC_0(VAR_0.mir.event_queue);

    FUNC_5(&VAR_0.mir.event_mutex);

    FUNC_4(VAR_0.mir.connection);
}
