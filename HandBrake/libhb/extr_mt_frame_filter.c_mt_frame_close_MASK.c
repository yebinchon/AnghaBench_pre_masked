
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* buf; struct TYPE_6__* thread_data; int taskset; TYPE_3__* sub_filter; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_7__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
struct TYPE_8__ {int (* close ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(hb_filter_object_t *VAR_0)
{
    hb_filter_private_t *VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return;
    }

    VAR_1->sub_filter->close(VAR_1->sub_filter);
    FUNC_2(&VAR_1->taskset);
    FUNC_0(VAR_1->thread_data);
    FUNC_0(VAR_1->buf);
    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
