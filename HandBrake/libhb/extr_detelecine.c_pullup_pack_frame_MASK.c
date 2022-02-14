
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pullup_frame {int length; TYPE_1__** ofields; TYPE_1__* buffer; } ;
struct pullup_context {int dummy; } ;
struct TYPE_5__ {scalar_t__* lock; } ;


 int FUNC_0 (struct pullup_context*,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (struct pullup_context*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3( struct pullup_context * VAR_0, struct pullup_frame * VAR_1)
{
    int VAR_2;
    if (VAR_1->buffer) return;
    if (VAR_1->length < 2) return;
    for( VAR_2 = 0; VAR_2 < 2; VAR_2++ )
    {
        if( VAR_1->ofields[VAR_2]->lock[VAR_2^1] ) continue;
        VAR_1->buffer = VAR_1->ofields[VAR_2];
        FUNC_2(VAR_1->buffer, 2);
        FUNC_0( VAR_0, VAR_1->buffer, VAR_1->ofields[VAR_2^1], VAR_2^1 );
        return;
    }
    VAR_1->buffer = FUNC_1( VAR_0, 2 );
    FUNC_0( VAR_0, VAR_1->buffer, VAR_1->ofields[0], 0 );
    FUNC_0( VAR_0, VAR_1->buffer, VAR_1->ofields[1], 1 );
}
