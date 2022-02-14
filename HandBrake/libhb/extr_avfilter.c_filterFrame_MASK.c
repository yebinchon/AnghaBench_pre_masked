
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int list; int graph; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_12__ {int start; int stop; } ;
struct TYPE_14__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int FUNC_0 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *) ;

__attribute__((used)) static hb_buffer_t* FUNC_7( hb_filter_private_t * VAR_0, hb_buffer_t * VAR_1 )
{
    hb_buffer_list_t VAR_2;
    hb_buffer_t * VAR_3, * VAR_4;

    FUNC_0(VAR_0->graph, VAR_1);
    VAR_3 = FUNC_1(VAR_0->graph);
    while (VAR_3 != ((void*)0))
    {
        FUNC_2(&VAR_0->list, VAR_3);
        VAR_3 = FUNC_1(VAR_0->graph);
    }


    FUNC_3(&VAR_2);
    while (FUNC_4(&VAR_0->list) > 1)
    {
        VAR_3 = FUNC_6(&VAR_0->list);
        VAR_4 = FUNC_5(&VAR_0->list);

        VAR_3->s.stop = VAR_4->s.start;
        FUNC_2(&VAR_2, VAR_3);
    }

    return FUNC_5(&VAR_2);
}
