
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* internal; int * av_class; } ;
struct TYPE_6__ {int frame_queues; } ;
typedef TYPE_2__ AVFilterGraph ;


 int FUNC_0 (TYPE_2__**) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

AVFilterGraph *FUNC_4(void)
{
    AVFilterGraph *VAR_1 = FUNC_1(sizeof(*VAR_1));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->internal = FUNC_1(sizeof(*VAR_1->internal));
    if (!VAR_1->internal) {
        FUNC_0(&VAR_1);
        return ((void*)0);
    }

    VAR_1->av_class = &VAR_0;
    FUNC_2(VAR_1);
    FUNC_3(&VAR_1->internal->frame_queues);

    return VAR_1;
}
