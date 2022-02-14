
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int * h; struct TYPE_5__* next; } ;
typedef TYPE_1__ hb_work_object_t ;
typedef int hb_handle_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

hb_work_object_t * FUNC_1( hb_handle_t *VAR_1, int VAR_2 )
{
    hb_work_object_t * VAR_3;
    for( VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next )
    {
        if( VAR_3->id == VAR_2 )
        {
            hb_work_object_t *VAR_4 = FUNC_0( sizeof(*VAR_3) );
            *VAR_4 = *VAR_3;
            VAR_4->h = VAR_1;
            return VAR_4;
        }
    }
    return ((void*)0);
}
