
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {struct pullup_field* prev; struct pullup_field* next; } ;
struct pullup_context {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct pullup_context*,struct pullup_field*) ;

__attribute__((used)) static struct pullup_field * FUNC_2( struct pullup_context * VAR_0,
                                                      int VAR_1 )
{
    struct pullup_field * VAR_2, * VAR_3;
    VAR_3 = VAR_2 = FUNC_0( 1, sizeof(struct pullup_field) );
    FUNC_1( VAR_0, VAR_3 );
    for ( ; VAR_1 > 0; VAR_1-- )
    {
        VAR_3->next = FUNC_0( 1, sizeof(struct pullup_field) );
        VAR_3->next->prev = VAR_3;
        VAR_3 = VAR_3->next;
        FUNC_1( VAR_0, VAR_3 );
    }
    VAR_3->next = VAR_2;
    VAR_2->prev = VAR_3;
    return VAR_2;
}
