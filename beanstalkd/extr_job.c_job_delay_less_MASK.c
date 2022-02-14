
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deadline_at; scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
typedef TYPE_2__ Job ;



int
FUNC_0(void *VAR_0, void *VAR_1)
{
    Job *VAR_2 = VAR_0;
    Job *VAR_3 = VAR_1;
    if (VAR_2->r.deadline_at < VAR_3->r.deadline_at) return 1;
    if (VAR_2->r.deadline_at > VAR_3->r.deadline_at) return 0;
    return VAR_2->r.id < VAR_3->r.id;
}
