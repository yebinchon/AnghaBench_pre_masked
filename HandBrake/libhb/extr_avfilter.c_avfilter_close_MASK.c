
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int graph; int list; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_6__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( hb_filter_object_t * VAR_0 )
{
    hb_filter_private_t * VAR_1 = VAR_0->private_data;
    if (VAR_1 == ((void*)0))
    {

        return;
    }

    FUNC_2(&VAR_1->list);
    FUNC_1(&VAR_1->graph);
    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
