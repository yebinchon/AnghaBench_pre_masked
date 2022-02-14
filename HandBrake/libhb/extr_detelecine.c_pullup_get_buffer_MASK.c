
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pullup_context {int nbuffers; TYPE_2__* buffers; TYPE_1__* last; } ;
struct pullup_buffer {int dummy; } ;
struct TYPE_5__ {scalar_t__* lock; } ;
struct TYPE_4__ {int parity; TYPE_2__* buffer; } ;


 int FUNC_0 (struct pullup_context*,TYPE_2__*) ;
 struct pullup_buffer* FUNC_1 (TYPE_2__*,int) ;

struct pullup_buffer * FUNC_2( struct pullup_context * VAR_0,
                                          int VAR_1 )
{
    int VAR_2;


    if( VAR_1 < 2 &&
        VAR_0->last &&
        VAR_1 != VAR_0->last->parity &&
        !VAR_0->last->buffer->lock[VAR_1])
    {
        FUNC_0( VAR_0, VAR_0->last->buffer );
        return FUNC_1( VAR_0->last->buffer, VAR_1 );
    }


    for( VAR_2 = 0; VAR_2 < VAR_0->nbuffers; VAR_2++ )
    {
        if( VAR_0->buffers[VAR_2].lock[0] ) continue;
        if( VAR_0->buffers[VAR_2].lock[1] ) continue;
        FUNC_0( VAR_0, &VAR_0->buffers[VAR_2] );
        return FUNC_1( &VAR_0->buffers[VAR_2], VAR_1 );
    }

    if( VAR_1 == 2 ) return 0;


    for( VAR_2 = 0; VAR_2 < VAR_0->nbuffers; VAR_2++ )
    {
        if( ((VAR_1+1) & 1) && VAR_0->buffers[VAR_2].lock[0] ) continue;
        if( ((VAR_1+1) & 2) && VAR_0->buffers[VAR_2].lock[1] ) continue;
        FUNC_0( VAR_0, &VAR_0->buffers[VAR_2] );
        return FUNC_1( &VAR_0->buffers[VAR_2], VAR_1 );
    }

    return 0;
}
