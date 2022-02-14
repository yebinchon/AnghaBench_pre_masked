
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int list; } ;
typedef TYPE_1__ fixed_queue_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

bool FUNC_3(fixed_queue_t *VAR_1)
{
    bool VAR_2 = 0;

    if (VAR_1 == ((void*)0)) {
        return 1;
    }

    FUNC_1(&VAR_1->lock, VAR_0);
    VAR_2 = FUNC_0(VAR_1->list);
    FUNC_2(&VAR_1->lock);

    return VAR_2;
}
