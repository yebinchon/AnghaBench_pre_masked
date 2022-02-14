
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {struct pullup_field* next; } ;
struct pullup_context {int last; struct pullup_field* first; } ;


 int FUNC_0 (struct pullup_context*,struct pullup_field*) ;
 int FUNC_1 (struct pullup_context*,struct pullup_field*) ;
 int FUNC_2 (struct pullup_field*,int ) ;

__attribute__((used)) static void FUNC_3( struct pullup_context * VAR_0 )
{
    struct pullup_field * VAR_1 = VAR_0->first;
    int VAR_2, VAR_3 = FUNC_2 (VAR_1, VAR_0->last );
    for( VAR_2 = 0; VAR_2 < VAR_3-1; VAR_2++ )
    {
        if( VAR_2 < VAR_3-3 ) FUNC_1( VAR_0, VAR_1 );
        FUNC_0( VAR_0, VAR_1 );
        VAR_1 = VAR_1->next;
    }
}
