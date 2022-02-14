
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_6__ {int initialized; int * graph; int list; void* output; void* input; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_7__ {int settings; TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef void* hb_filter_init_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (int ,void**) ;
 int FUNC_4 (int *,void**) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( hb_filter_object_t * VAR_0, hb_filter_init_t * VAR_1 )
{
    hb_filter_private_t * VAR_2 = ((void*)0);

    VAR_2 = FUNC_0(1, sizeof(struct hb_filter_private_s));
    VAR_0->private_data = VAR_2;
    if (VAR_2 == ((void*)0))
    {
        return 1;
    }
    VAR_2->input = *VAR_1;
    VAR_2->initialized = 1;

    VAR_2->graph = FUNC_3(VAR_0->settings, VAR_1);
    if (VAR_2->graph == ((void*)0))
    {
        goto fail;
    }


    FUNC_4(VAR_2->graph, VAR_1);
    VAR_2->output = *VAR_1;

    FUNC_5(&VAR_2->list);

    return 0;

fail:
    FUNC_2(&VAR_2->graph);
    FUNC_1(VAR_2);

    return 1;
}
