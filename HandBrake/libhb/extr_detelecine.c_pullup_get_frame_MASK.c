
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pullup_frame {int length; size_t parity; scalar_t__ buffer; scalar_t__* ifields; scalar_t__* ofields; scalar_t__ lock; } ;
struct pullup_context {TYPE_1__* first; scalar_t__ verbose; struct pullup_frame* frame; } ;
struct TYPE_2__ {int affinity; size_t parity; scalar_t__ buffer; struct TYPE_2__* next; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct pullup_context*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct pullup_context*,TYPE_1__*) ;

struct pullup_frame * FUNC_4( struct pullup_context * VAR_0 )
{
    int VAR_1;
    struct pullup_frame * VAR_2 = VAR_0->frame;
    int VAR_3 = FUNC_1( VAR_0 );
    int VAR_4 = VAR_0->first->next->affinity;

    if ( !VAR_3 ) return 0;
    if ( VAR_2->lock ) return 0;

    if ( VAR_0->verbose )
    {
        FUNC_3(VAR_0, VAR_0->first);
        FUNC_0("duration: %d    \n", VAR_3);
    }

    VAR_2->lock++;
    VAR_2->length = VAR_3;
    VAR_2->parity = VAR_0->first->parity;
    VAR_2->buffer = 0;
    for( VAR_1 = 0; VAR_1 < VAR_3; VAR_1++ )
    {

        VAR_2->ifields[VAR_1] = VAR_0->first->buffer;
        VAR_0->first->buffer = 0;
        VAR_0->first = VAR_0->first->next;
    }

    if( VAR_3 == 1 )
    {
        VAR_2->ofields[VAR_2->parity] = VAR_2->ifields[0];
        VAR_2->ofields[VAR_2->parity^1] = 0;
    }
    else if( VAR_3 == 2 )
    {
        VAR_2->ofields[VAR_2->parity] = VAR_2->ifields[0];
        VAR_2->ofields[VAR_2->parity^1] = VAR_2->ifields[1];
    }
    else if( VAR_3 == 3 )
    {
        if( VAR_4 == 0 )
        {
            VAR_4 = (VAR_2->ifields[0] == VAR_2->ifields[1]) ? -1 : 1;
        }
        VAR_2->ofields[VAR_2->parity] = VAR_2->ifields[1+VAR_4];
        VAR_2->ofields[VAR_2->parity^1] = VAR_2->ifields[1];
    }
    FUNC_2( VAR_2->ofields[0], 0 );
    FUNC_2( VAR_2->ofields[1], 1 );

    if( VAR_2->ofields[0] == VAR_2->ofields[1] )
    {
        VAR_2->buffer = VAR_2->ofields[0];
        FUNC_2(VAR_2->buffer, 2);
        return VAR_2;
    }
    return VAR_2;
}
