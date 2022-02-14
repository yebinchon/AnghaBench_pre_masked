
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int sub_list; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_16__ {scalar_t__ stop; scalar_t__ start; } ;
struct TYPE_18__ {struct TYPE_18__* next; TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6( hb_filter_private_t * VAR_1, hb_buffer_t * VAR_2 )
{
    int VAR_3;
    hb_buffer_t *VAR_4, *VAR_5;

    for( VAR_3 = 0; VAR_3 < FUNC_3(VAR_1->sub_list); )
    {
        VAR_4 = FUNC_4( VAR_1->sub_list, VAR_3 );
        if (VAR_3 + 1 < FUNC_3(VAR_1->sub_list))
            VAR_5 = FUNC_4( VAR_1->sub_list, VAR_3 + 1 );
        else
            VAR_5 = ((void*)0);

        if ((VAR_4->s.stop != VAR_0 && VAR_4->s.stop <= VAR_2->s.start) ||
            (VAR_5 != ((void*)0) && VAR_4->s.stop == VAR_0 && VAR_5->s.start <= VAR_2->s.start))
        {

            FUNC_5( VAR_1->sub_list, VAR_4 );
            FUNC_2( &VAR_4 );
        }
        else if( VAR_4->s.start <= VAR_2->s.start )
        {


            while ( VAR_4 )
            {
                hb_buffer_t *VAR_6 = FUNC_1(VAR_1, VAR_4, VAR_2);
                FUNC_0( VAR_1, VAR_2, VAR_6 );
                FUNC_2(&VAR_6);
                VAR_4 = VAR_4->next;
            }
            VAR_3++;
        }
        else
        {

            break;
        }
    }
}
