
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ kind_t ;
struct TYPE_8__ {int count; TYPE_6__* list; } ;
struct TYPE_9__ {TYPE_1__ pes; } ;
typedef TYPE_2__ hb_stream_t ;
typedef int hb_pes_stream_t ;
struct TYPE_11__ {int stream_id; int stream_id_ext; scalar_t__ stream_kind; int map_idx; int stream_type; } ;
struct TYPE_10__ {int kind; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static int FUNC_2( hb_stream_t * VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8 )
{
    int VAR_9;
    int VAR_10 = -1;
    kind_t VAR_11 = VAR_8 == -1 ? VAR_3[VAR_7].kind : VAR_8;

    for ( VAR_9 = 0; VAR_9 < VAR_4->pes.count; VAR_9++ )
    {
        if ( VAR_4->pes.list[VAR_9].stream_id == VAR_5 )
            VAR_10 = VAR_9;

        if ( VAR_4->pes.list[VAR_9].stream_id == VAR_5 &&
             VAR_4->pes.list[VAR_9].stream_id_ext == 0 &&
             VAR_4->pes.list[VAR_9].stream_kind == VAR_1 )
        {




            if ( VAR_6 != 0 )
                break;




            if ( VAR_11 == VAR_0 || VAR_11 == VAR_1 || VAR_11 == VAR_4->pes.list[VAR_9].stream_kind )
                return VAR_9;

            break;
        }
        if ( VAR_5 == VAR_4->pes.list[VAR_9].stream_id &&
             VAR_6 == VAR_4->pes.list[VAR_9].stream_id_ext )
        {


            if ( VAR_11 == VAR_0 && VAR_4->pes.list[VAR_9].stream_kind == VAR_1 )
                break;




            if ( VAR_11 == VAR_0 || VAR_11 == VAR_1 || VAR_11 == VAR_4->pes.list[VAR_9].stream_kind )
                return VAR_9;

            break;
        }

        if ( VAR_11 == VAR_2 && VAR_4->pes.list[VAR_9].stream_kind == VAR_2 )
        {
            if ( VAR_5 <= VAR_4->pes.list[VAR_9].stream_id &&
                 VAR_6 <= VAR_4->pes.list[VAR_9].stream_id_ext )
            {




                int VAR_12 = FUNC_1( VAR_4 );
                FUNC_0( &VAR_4->pes.list[VAR_12], &VAR_4->pes.list[VAR_9],
                        sizeof( hb_pes_stream_t ) );
                break;
            }
        }
    }

    if ( VAR_9 == VAR_4->pes.count )
    {
        VAR_9 = FUNC_1( VAR_4 );
        if ( VAR_10 >= 0 )
        {
            FUNC_0( &VAR_4->pes.list[VAR_9], &VAR_4->pes.list[VAR_10],
                    sizeof( hb_pes_stream_t ) );
        }
        else
        {
            VAR_4->pes.list[VAR_9].map_idx = -1;
        }
    }

    VAR_4->pes.list[VAR_9].stream_id = VAR_5;
    VAR_4->pes.list[VAR_9].stream_id_ext = VAR_6;
    VAR_4->pes.list[VAR_9].stream_type = VAR_7;
    VAR_4->pes.list[VAR_9].stream_kind = VAR_11;
    return VAR_9;
}
