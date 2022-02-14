
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int count; TYPE_3__* list; } ;
struct TYPE_14__ {int count; TYPE_1__* list; } ;
struct TYPE_17__ {scalar_t__ hb_stream_type; TYPE_4__ pes; TYPE_2__ ts; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_15__ {int next; scalar_t__ stream_kind; int stream_id_ext; int stream_id; } ;
struct TYPE_13__ {int pes_list; int is_pcr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_6(hb_stream_t *VAR_4)
{
    if ( VAR_4->hb_stream_type == VAR_3 )
    {
        int VAR_5, VAR_6;
        for ( VAR_5 = 0; VAR_5 < VAR_4->ts.count; VAR_5++)
        {


            if ( FUNC_5 ( VAR_4, VAR_5 ) == VAR_1 &&
                 !VAR_4->ts.list[VAR_5].is_pcr )
            {
                FUNC_2(VAR_4, VAR_5);
                continue;
            }

            if ( FUNC_5 ( VAR_4, VAR_5 ) == VAR_0 )
            {
                for ( VAR_6 = VAR_4->ts.list[VAR_5].pes_list; VAR_6 != -1;
                      VAR_6 = VAR_4->pes.list[VAR_6].next )
                {
                    if ( FUNC_0( VAR_4, VAR_4->pes.list[VAR_6].stream_id,
                                         VAR_4->pes.list[VAR_6].stream_id_ext ) )
                    {
                        FUNC_1(VAR_4, VAR_6);
                    }
                }
                if ( !VAR_4->ts.list[VAR_5].is_pcr &&
                     FUNC_4(VAR_4, VAR_5) )
                {
                    continue;
                }
            }
        }


        FUNC_3( VAR_4, 0. );
    }
    else if ( VAR_4->hb_stream_type == VAR_2 )
    {
        int VAR_7;
        for ( VAR_7 = 0; VAR_7 < VAR_4->pes.count; VAR_7++)
        {

            if ( VAR_4->pes.list[VAR_7].stream_kind == VAR_1 )
            {
                FUNC_1(VAR_4, VAR_7);
            }

            if ( VAR_4->pes.list[VAR_7].stream_kind == VAR_0 &&
                 FUNC_0( VAR_4, VAR_4->pes.list[VAR_7].stream_id,
                                 VAR_4->pes.list[VAR_7].stream_id_ext ) )
            {


                FUNC_1(VAR_4, VAR_7);
                continue;
            }
        }


        FUNC_3( VAR_4, 0. );
    }
}
