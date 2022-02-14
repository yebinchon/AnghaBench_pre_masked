
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {struct pullup_field* frame; struct pullup_field* comb; struct pullup_field* diffs; struct pullup_field* prev; struct pullup_field* next; struct pullup_field* head; struct pullup_field* buffers; } ;
struct pullup_context {struct pullup_context* frame; struct pullup_context* comb; struct pullup_context* diffs; struct pullup_context* prev; struct pullup_context* next; struct pullup_context* head; struct pullup_context* buffers; } ;


 int FUNC_0 (struct pullup_field*) ;

void FUNC_1( struct pullup_context * VAR_0 )
{
    struct pullup_field * VAR_1;

    FUNC_0( VAR_0->buffers );

    VAR_1 = VAR_0->head->next;
    while( VAR_1 != VAR_0->head )
    {
        FUNC_0( VAR_1->diffs );
        FUNC_0( VAR_1->comb );
        VAR_1 = VAR_1->next;
        FUNC_0( VAR_1->prev );
    }
    FUNC_0( VAR_1->diffs );
    FUNC_0( VAR_1->comb );
    FUNC_0(VAR_1);

    FUNC_0( VAR_0->frame );
    FUNC_0( VAR_0 );
}
