
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {int size; int qsv_details; TYPE_1__ s; int f; int * data; } ;
typedef TYPE_2__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;

hb_buffer_t * FUNC_3( const hb_buffer_t * VAR_1 )
{

    hb_buffer_t * VAR_2;

    if ( VAR_1 == ((void*)0) )
        return ((void*)0);

    VAR_2 = FUNC_0( VAR_1->size );
    if ( VAR_2 )
    {
        FUNC_2( VAR_2->data, VAR_1->data, VAR_1->size );
        VAR_2->s = VAR_1->s;
        VAR_2->f = VAR_1->f;
        if ( VAR_2->s.type == VAR_0 )
            FUNC_1( VAR_2 );
    }





    return VAR_2;
}
