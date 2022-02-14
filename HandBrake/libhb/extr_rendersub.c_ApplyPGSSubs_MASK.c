
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int sub_list; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_18__ {scalar_t__ start; } ;
struct TYPE_17__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_20__ {TYPE_2__ s; TYPE_1__ f; } ;
typedef TYPE_4__ hb_buffer_t ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6( hb_filter_private_t * VAR_0, hb_buffer_t * VAR_1 )
{
    int VAR_2;
    hb_buffer_t * VAR_3;
    hb_buffer_t * VAR_4;




    for( VAR_2 = FUNC_3( VAR_0->sub_list ) - 1; VAR_2 > 0; VAR_2-- )
    {
        VAR_4 = FUNC_4( VAR_0->sub_list, VAR_2);
        if ( VAR_4->s.start <= VAR_1->s.start )
        {
            while ( VAR_2 > 0 )
            {
                VAR_3 = FUNC_4( VAR_0->sub_list, VAR_2 - 1);
                FUNC_5( VAR_0->sub_list, VAR_3 );
                FUNC_2( &VAR_3 );
                VAR_2--;
            }
        }
    }




    while ( FUNC_3( VAR_0->sub_list ) > 0 )
    {
        VAR_4 = FUNC_4( VAR_0->sub_list, 0 );
        if (VAR_4->f.width != 0 && VAR_4->f.height != 0)
            break;

        FUNC_5( VAR_0->sub_list, VAR_4 );
        FUNC_2( &VAR_4 );
    }


    if ( FUNC_3( VAR_0->sub_list ) > 0)
    {
        VAR_4 = FUNC_4( VAR_0->sub_list, 0 );
        if ( VAR_4->s.start <= VAR_1->s.start )
        {
            hb_buffer_t *VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_1);
            FUNC_0( VAR_0, VAR_1, VAR_5 );
            FUNC_2(&VAR_5);
        }
    }
}
