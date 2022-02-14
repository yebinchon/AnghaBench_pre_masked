
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * tqh_first; } ;
struct TYPE_6__ {int event_mutex; } ;
struct TYPE_8__ {TYPE_1__ mir; } ;
struct TYPE_7__ {TYPE_5__ head; } ;
typedef TYPE_2__ EventQueue ;
typedef int EventNode ;


 int FUNC_0 (TYPE_5__*,int *,int ) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static EventNode* FUNC_3(EventQueue* VAR_2)
{
    EventNode* VAR_3 = ((void*)0);

    FUNC_1(&VAR_0.mir.event_mutex);

    VAR_3 = VAR_2->head.tqh_first;

    if (VAR_3)
        FUNC_0(&VAR_2->head, VAR_3, VAR_1);

    FUNC_2(&VAR_0.mir.event_mutex);

    return VAR_3;
}
