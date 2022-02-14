
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int _GLFWwindow ;
struct TYPE_5__ {int event_mutex; int event_cond; TYPE_1__* event_queue; } ;
struct TYPE_6__ {TYPE_2__ mir; } ;
struct TYPE_4__ {int head; } ;
typedef int MirEvent ;
typedef int EventNode ;


 int FUNC_0 (int *,int *,int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(const MirEvent* VAR_2, _GLFWwindow* VAR_3)
{
    FUNC_3(&VAR_0.mir.event_mutex);

    EventNode* VAR_4 = FUNC_1(VAR_2, VAR_3);
    FUNC_0(&VAR_0.mir.event_queue->head, VAR_4, VAR_1);

    FUNC_2(&VAR_0.mir.event_cond);

    FUNC_4(&VAR_0.mir.event_mutex);
}
