
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ kind_t ;
typedef int hb_ts_stream_t ;
struct TYPE_15__ {int count; TYPE_10__* list; } ;
struct TYPE_14__ {TYPE_1__* list; } ;
struct TYPE_16__ {TYPE_3__ ts; TYPE_2__ pes; } ;
typedef TYPE_4__ hb_stream_t ;
struct TYPE_13__ {scalar_t__ stream_kind; } ;
struct TYPE_12__ {int pid; int pes_list; int is_pcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_10__*,TYPE_10__*,int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_5( hb_stream_t * VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7 )
{
    int VAR_8;
    int VAR_9 = FUNC_4( VAR_2, VAR_3, VAR_4,
                                     VAR_5, VAR_6 );

    if ( VAR_7 )
        *VAR_7 = VAR_9;

    if ( VAR_9 < 0 )
        return -1;

    kind_t VAR_10 = VAR_2->pes.list[VAR_9].stream_kind;
    for ( VAR_8 = 0; VAR_8 < VAR_2->ts.count; VAR_8++ )
    {
        if ( VAR_3 == VAR_2->ts.list[VAR_8].pid )
        {
            break;
        }

        if ( VAR_10 == VAR_1 && FUNC_3( VAR_2, VAR_8 ) == VAR_1 &&
             VAR_9 < VAR_2->ts.list[VAR_8].pes_list )
        {



            int VAR_11 = FUNC_1( VAR_2 );
            FUNC_0( &VAR_2->ts.list[VAR_11], &VAR_2->ts.list[VAR_8],
                    sizeof( hb_ts_stream_t ) );
            break;
        }
    }
    if ( VAR_8 == VAR_2->ts.count )
        VAR_8 = FUNC_1( VAR_2 );

    VAR_2->ts.list[VAR_8].pid = VAR_3;
    FUNC_2( VAR_2, VAR_8, VAR_9 );
    if ( VAR_6 == VAR_0 )
        VAR_2->ts.list[VAR_8].is_pcr = 1;

    return VAR_8;
}
