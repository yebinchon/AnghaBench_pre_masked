
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int alloc; int * next; int * data; } ;
typedef TYPE_1__ hb_buffer_t ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4( hb_buffer_t * VAR_0, int VAR_1 )
{

    if ( VAR_1 < VAR_0->alloc / 8 || VAR_0->data == ((void*)0) )
    {
        hb_buffer_t * VAR_2 = FUNC_1( VAR_1 );

        FUNC_2( VAR_0, VAR_2 );
        FUNC_3( VAR_0->data, VAR_2->data, VAR_1 );
        VAR_2->next = ((void*)0);
        FUNC_0( &VAR_2 );
    }
}
