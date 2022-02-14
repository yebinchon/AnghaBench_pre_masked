
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pullup_field {int flags; scalar_t__ buffer; int* diffs; int breaks; struct pullup_field* next; } ;
struct pullup_context {int metric_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( struct pullup_context * VAR_3,
                                   struct pullup_field * VAR_4 )
{
    int VAR_5;
    struct pullup_field *VAR_6 = VAR_4->next;
    struct pullup_field *VAR_7 = VAR_6->next;
    struct pullup_field *VAR_8 = VAR_7->next;
    int VAR_9, VAR_10=0, VAR_11=0;

    if( VAR_4->flags & VAR_2 ) return;
    VAR_4->flags |= VAR_2;


    if( VAR_4->buffer == VAR_7->buffer && VAR_6->buffer != VAR_8->buffer )
    {
        VAR_7->breaks |= VAR_1;
        return;
    }
    if( VAR_4->buffer != VAR_7->buffer && VAR_6->buffer == VAR_8->buffer )
    {
        VAR_6->breaks |= VAR_0;
        return;
    }

    for( VAR_5 = 0; VAR_5 < VAR_3->metric_len; VAR_5++ )
    {
        VAR_9 = VAR_7->diffs[VAR_5] - VAR_8->diffs[VAR_5];
        if( VAR_9 > VAR_10) VAR_10 = VAR_9;
        if( -VAR_9 > VAR_11) VAR_11 = -VAR_9;
    }


    if( VAR_10 + VAR_11 < 128 ) return;
    if( VAR_10 > 4*VAR_11 ) VAR_6->breaks |= VAR_0;
    if( VAR_11 > 4*VAR_10 ) VAR_7->breaks |= VAR_1;
}
