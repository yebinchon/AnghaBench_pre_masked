
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ scr_changes; scalar_t__ last_scr; } ;
typedef TYPE_2__ hb_psdemux_t ;
struct TYPE_11__ {scalar_t__ start; scalar_t__ renderOffset; scalar_t__ type; } ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3( hb_buffer_t * VAR_2, hb_buffer_list_t * VAR_3,
                        hb_psdemux_t* VAR_4 )
{
    while ( VAR_2 )
    {
        FUNC_2( VAR_4, VAR_2 );
        if ( VAR_4 )
        {


            if (VAR_4->scr_changes == 0 &&
                (VAR_2->s.start != VAR_0 ||
                 VAR_2->s.renderOffset != VAR_0))
            {
                ++VAR_4->scr_changes;
                VAR_4->last_scr = VAR_2->s.start >= 0 ? VAR_2->s.start : VAR_2->s.renderOffset;
            }

            if ( VAR_2->s.type == VAR_1 )
            {
                FUNC_1( VAR_4, VAR_2 );
            }
        }

        hb_buffer_t *VAR_5 = VAR_2->next;
        VAR_2->next = ((void*)0);
        FUNC_0(VAR_3, VAR_2);
        VAR_2 = VAR_5;
    }
}
