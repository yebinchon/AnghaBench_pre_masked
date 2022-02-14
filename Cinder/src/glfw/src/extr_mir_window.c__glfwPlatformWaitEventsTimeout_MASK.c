
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {long tv_sec; long tv_nsec; } ;
struct TYPE_3__ {int event_mutex; int event_cond; int event_queue; } ;
struct TYPE_4__ {TYPE_1__ mir; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,struct timespec*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(double VAR_2)
{
    FUNC_4(&VAR_1.mir.event_mutex);

    if (FUNC_2(VAR_1.mir.event_queue))
    {
        struct timespec VAR_3;
        FUNC_1(VAR_0, &VAR_3);
        VAR_3.tv_sec += (long) VAR_2;
        VAR_3.tv_nsec += (long) ((VAR_2 - (long) VAR_2) * 1e9);
        FUNC_3(&VAR_1.mir.event_cond, &VAR_1.mir.event_mutex, &VAR_3);
    }

    FUNC_5(&VAR_1.mir.event_mutex);

    FUNC_0();
}
