
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {scalar_t__ buffer; int parity; struct pullup_field* next; } ;
struct pullup_context {struct pullup_field* last; struct pullup_field* first; struct pullup_field* head; } ;


 int FUNC_0 (scalar_t__,int ) ;

void FUNC_1( struct pullup_context * VAR_0 )
{
    struct pullup_field * VAR_1;

    for( VAR_1 = VAR_0->first; VAR_1 && VAR_1 != VAR_0->head; VAR_1 = VAR_1->next )
    {
        FUNC_0( VAR_1->buffer, VAR_1->parity );
        VAR_1->buffer = 0;
    }
    VAR_0->first = VAR_0->last = 0;
}
