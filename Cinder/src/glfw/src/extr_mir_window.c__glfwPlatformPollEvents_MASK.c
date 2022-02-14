
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int event_queue; } ;
struct TYPE_8__ {TYPE_1__ mir; } ;
struct TYPE_7__ {int window; int event; } ;
typedef TYPE_2__ EventNode ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
    EventNode* VAR_1 = ((void*)0);

    while ((VAR_1 = FUNC_1(VAR_0.mir.event_queue)))
    {
        FUNC_2(VAR_1->event, VAR_1->window);
        FUNC_0(VAR_0.mir.event_queue, VAR_1);
    }
}
