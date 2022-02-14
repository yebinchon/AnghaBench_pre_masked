
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* soonest_job; } ;
struct TYPE_6__ {scalar_t__ deadline_at; } ;
struct TYPE_7__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;
typedef TYPE_3__ Conn ;



__attribute__((used)) static void
FUNC_0(Conn *VAR_0, Job *VAR_1) {
    if (!VAR_0->soonest_job || VAR_1->r.deadline_at < VAR_0->soonest_job->r.deadline_at) {
        VAR_0->soonest_job = VAR_1;
    }
}
