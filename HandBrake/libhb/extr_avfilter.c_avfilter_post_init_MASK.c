
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hb_job_t ;
struct TYPE_5__ {int * graph; int list; int output; int input; scalar_t__ initialized; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {int settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5( hb_filter_object_t * VAR_0, hb_job_t * VAR_1 )
{
    hb_filter_private_t * VAR_2 = VAR_0->private_data;

    if (VAR_2 == ((void*)0))
    {
        return 1;
    }
    if (VAR_2->initialized)
    {
        return 0;
    }

    VAR_2->graph = FUNC_2(VAR_0->settings, &VAR_2->input);
    if (VAR_2->graph == ((void*)0))
    {
        goto fail;
    }


    VAR_2->output = VAR_2->input;
    FUNC_3(VAR_2->graph, &VAR_2->output);

    FUNC_4(&VAR_2->list);

    return 0;

fail:
    FUNC_1(&VAR_2->graph);
    FUNC_0(VAR_2);

    return 1;
}
