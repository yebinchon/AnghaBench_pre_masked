
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_8__ {int heap_index; TYPE_2__* tube; TYPE_1__ r; } ;
struct TYPE_7__ {int delay; } ;
typedef TYPE_3__ Job ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static Job *
FUNC_1(Job *VAR_1)
{
    if (!VAR_1 || VAR_1->r.state != VAR_0)
        return ((void*)0);
    FUNC_0(&VAR_1->tube->delay, VAR_1->heap_index);

    return VAR_1;
}
