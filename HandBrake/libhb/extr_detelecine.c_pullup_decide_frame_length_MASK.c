
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pullup_field {int affinity; int breaks; TYPE_1__* prev; struct pullup_field* next; } ;
struct pullup_context {scalar_t__ strict_breaks; int strict_pairs; int last; struct pullup_field* first; } ;
struct TYPE_2__ {int breaks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pullup_field*,int) ;
 int FUNC_1 (struct pullup_context*) ;
 int FUNC_2 (struct pullup_field*,int ) ;

__attribute__((used)) static int FUNC_3( struct pullup_context * VAR_2 )
{
    struct pullup_field *VAR_3 = VAR_2->first;
    struct pullup_field *VAR_4 = VAR_3->next;
    struct pullup_field *VAR_5 = VAR_4->next;
    int VAR_6;

    if( FUNC_2( VAR_2->first, VAR_2->last ) < 4 )
    {
        return 0;
    }
    FUNC_1( VAR_2 );

    if( VAR_3->affinity == -1 ) return 1;

    VAR_6 = FUNC_0( VAR_3, 3 );
    if( VAR_6 == 1 && VAR_2->strict_breaks < 0 ) VAR_6 = 0;

    switch (VAR_6)
    {
        case 1:
            if ( VAR_2->strict_breaks < 1 &&
                 VAR_3->affinity == 1 &&
                 VAR_4->affinity == -1 )
            {
                return 2;
            }
            else
            {
                return 1;
            }

        case 2:

            if( VAR_2->strict_pairs &&
                (VAR_3->prev->breaks & VAR_1) &&
                (VAR_5->breaks & VAR_0) &&
                (VAR_3->affinity != 1 || VAR_4->affinity != -1) )
            {
                return 1;
            }
            if( VAR_4->affinity == 1 )
            {
                return 1;
            }
            else
            {
                return 2;
            }

        case 3:
            if( VAR_5->affinity == 1 )
            {
                return 2;
            }
            else
            {
                return 3;
            }

        default:

            if( VAR_4->affinity == 1 )
            {
                return 1;
            }
            else if( VAR_4->affinity == -1 )
            {
                return 2;
            }
            else if( VAR_5->affinity == -1 )
            {

                if( VAR_3->affinity == 1 )
                {
                    return 3;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                return 2;
            }
    }
}
