
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* list; } ;
struct TYPE_18__ {TYPE_2__ pes; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_19__ {int stream_id; scalar_t__ pts; int stream_id_ext; int bd_substream_id; } ;
typedef TYPE_4__ hb_pes_info_t ;
struct TYPE_20__ {scalar_t__ size; int data; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_16__ {scalar_t__ stream_kind; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__**) ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_5(
    hb_stream_t *VAR_3,
    hb_pes_info_t *VAR_4)
{
    hb_buffer_t *VAR_5 = FUNC_1(VAR_1);
    hb_pes_info_t VAR_6;

    int VAR_7 = 2048;

    while (--VAR_7 >= 0)
    {
        VAR_5->size = 0;
        int VAR_8 = FUNC_3( VAR_3, VAR_5 );
        if ( VAR_8 == 0 )
        {

            break;
        }
        if ( !FUNC_2( VAR_3, VAR_5->data, VAR_5->size, &VAR_6 ) )
            continue;

        int VAR_9;
        if ( VAR_6.stream_id == 0xbd )
        {
            VAR_9 = FUNC_4( VAR_3, VAR_6.stream_id,
                                      VAR_6.bd_substream_id );
        }
        else
        {
            VAR_9 = FUNC_4( VAR_3, VAR_6.stream_id,
                                      VAR_6.stream_id_ext );
        }
        if ( VAR_9 >= 0 && VAR_3->pes.list[VAR_9].stream_kind == VAR_2 )
        {
            if ( VAR_6.pts != VAR_0 )
            {
                *VAR_4 = VAR_6;
                return VAR_5;
            }
        }
    }
    FUNC_0( &VAR_5 );
    return ((void*)0);
}
