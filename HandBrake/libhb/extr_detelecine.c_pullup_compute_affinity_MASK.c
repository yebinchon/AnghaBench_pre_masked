
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pullup_field {int flags; scalar_t__ buffer; int affinity; int* var; int* comb; TYPE_3__* next; TYPE_2__* prev; } ;
struct pullup_context {int metric_len; } ;
struct TYPE_6__ {int flags; int* var; int* comb; TYPE_1__* next; scalar_t__ affinity; } ;
struct TYPE_5__ {int* var; } ;
struct TYPE_4__ {scalar_t__ buffer; int affinity; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( struct pullup_context * VAR_1,
                                     struct pullup_field * VAR_2 )
{
    int VAR_3;
    int VAR_4 = 0, VAR_5 = 0, VAR_6;

    if( VAR_2->flags & VAR_0 )
    {
        return;
    }
    VAR_2->flags |= VAR_0;

    if( VAR_2->buffer == VAR_2->next->next->buffer )
    {
        VAR_2->affinity = 1;
        VAR_2->next->affinity = 0;
        VAR_2->next->next->affinity = -1;

        VAR_2->next->flags |= VAR_0;
        VAR_2->next->next->flags |= VAR_0;

        return;
    }

    for( VAR_3 = 0; VAR_3 < VAR_1->metric_len; VAR_3++ )
    {
        int VAR_7 = VAR_2->prev->var[VAR_3];
        int VAR_8 = VAR_2->next->var[VAR_3];
        int VAR_9 = VAR_2->var[VAR_3];
        int VAR_10 = VAR_2->comb[VAR_3] - (VAR_9+VAR_7) + FUNC_0( VAR_9-VAR_7 );
        int VAR_11 = VAR_2->next->comb[VAR_3] - (VAR_9+VAR_8) + FUNC_0( VAR_9-VAR_8 );

        VAR_10 = (VAR_10 > 0) ? VAR_10 : 0;
        VAR_11 = (VAR_11 > 0) ? VAR_11 : 0;
        VAR_6 = VAR_10 - VAR_11;
        if( VAR_6 > VAR_4 ) VAR_4 = VAR_6;
        if( -VAR_6 > VAR_5 ) VAR_5 = -VAR_6;
    }

    if( VAR_4 + VAR_5 < 64 )
    {
        return;
    }

    if( VAR_5 > 6*VAR_4 )
    {
        VAR_2->affinity = -1;
    }
    else if( VAR_4 > 6*VAR_5 )
    {
        VAR_2->affinity = 1;
    }
}
