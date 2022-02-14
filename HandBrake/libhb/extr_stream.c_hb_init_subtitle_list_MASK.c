
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int list_subtitle; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_10__ {int count; TYPE_1__* list; } ;
struct TYPE_12__ {TYPE_2__ pes; } ;
typedef TYPE_4__ hb_stream_t ;
struct TYPE_9__ {scalar_t__ stream_kind; int map_idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(hb_stream_t *VAR_1, hb_title_t *VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5 = -1;


    for ( VAR_4 = 0; 1; VAR_4++ )
    {
        for ( VAR_3 = 0; VAR_3 < VAR_1->pes.count; VAR_3++ )
        {
            if ( VAR_1->pes.list[VAR_3].stream_kind == VAR_0 )
            {
                if ( VAR_1->pes.list[VAR_3].map_idx == VAR_4 )
                {
                    FUNC_1( VAR_1, VAR_3, VAR_2, -1 );
                }
                if ( VAR_1->pes.list[VAR_3].map_idx > VAR_5 )
                    VAR_5 = VAR_1->pes.list[VAR_3].map_idx;
            }
        }
        if ( VAR_4 > VAR_5 )
            break;
    }

    int VAR_6 = FUNC_0( VAR_2->list_subtitle );

    for ( VAR_3 = 0; VAR_3 < VAR_1->pes.count; VAR_3++ )
    {
        if ( VAR_1->pes.list[VAR_3].stream_kind == VAR_0 )
        {
            FUNC_1( VAR_1, VAR_3, VAR_2, VAR_6 );
        }
    }
}
