
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int list; } ;
typedef TYPE_1__ fixed_queue_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void *FUNC_4(fixed_queue_t *VAR_1)
{
    void *VAR_2 = ((void*)0);

    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(&VAR_1->lock, VAR_0);
    VAR_2 = FUNC_1(VAR_1->list) ? ((void*)0) : FUNC_0(VAR_1->list);
    FUNC_3(&VAR_1->lock);

    return VAR_2;
}
