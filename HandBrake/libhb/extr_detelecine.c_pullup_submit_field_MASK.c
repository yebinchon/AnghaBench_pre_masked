
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {int parity; struct pullup_field* next; int var; int comb; struct pullup_field* prev; int diffs; scalar_t__ affinity; scalar_t__ breaks; scalar_t__ flags; int buffer; } ;
struct pullup_context {struct pullup_field* head; struct pullup_field* last; struct pullup_field* first; int var; int comb; int diff; } ;
struct pullup_buffer {int dummy; } ;


 int FUNC_0 (struct pullup_context*) ;
 int FUNC_1 (struct pullup_context*,struct pullup_field*,int,struct pullup_field*,int,int ,int ) ;
 int FUNC_2 (struct pullup_buffer*,int) ;

void FUNC_3( struct pullup_context * VAR_0,
                          struct pullup_buffer * VAR_1,
                          int VAR_2 )
{
    struct pullup_field * VAR_3;


    FUNC_0( VAR_0 );


    if( VAR_0->last && VAR_0->last->parity == VAR_2 ) return;

    VAR_3 = VAR_0->head;
    VAR_3->parity = VAR_2;
    VAR_3->buffer = FUNC_2( VAR_1, VAR_2 );
    VAR_3->flags = 0;
    VAR_3->breaks = 0;
    VAR_3->affinity = 0;

    FUNC_1( VAR_0, VAR_3, VAR_2, VAR_3->prev->prev,
                           VAR_2, VAR_0->diff, VAR_3->diffs );
    FUNC_1( VAR_0, VAR_2?VAR_3->prev:VAR_3, 0,
                           VAR_2?VAR_3:VAR_3->prev, 1, VAR_0->comb, VAR_3->comb );
    FUNC_1( VAR_0, VAR_3, VAR_2, VAR_3,
                           -1, VAR_0->var, VAR_3->var );


    if( !VAR_0->first ) VAR_0->first = VAR_0->head;
    VAR_0->last = VAR_0->head;
    VAR_0->head = VAR_0->head->next;
}
