
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int count; TYPE_4__* list; } ;
struct TYPE_18__ {TYPE_2__ pes; scalar_t__ need_keyframe; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_19__ {int stream_type; scalar_t__ stream_kind; scalar_t__ probe_next_size; TYPE_5__* probe_buf; int stream_id_ext; int stream_id; int codec_name; int codec_param; int codec; } ;
typedef TYPE_4__ hb_pes_stream_t ;
struct TYPE_16__ {int id; } ;
struct TYPE_20__ {TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_21__ {int codec_param; int codec; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (char*,int,char*,...) ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,double) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_6__* VAR_5 ;

__attribute__((used)) static void FUNC_6(hb_stream_t *VAR_6)
{
    int VAR_7, VAR_8 = 0;

    for ( VAR_7 = 0; VAR_7 < VAR_6->pes.count; VAR_7++ )
    {
        int VAR_9 = VAR_6->pes.list[VAR_7].stream_type;


        if ( VAR_9 != 0 &&
             ( VAR_6->pes.list[VAR_7].stream_kind == VAR_0 ||
               VAR_6->pes.list[VAR_7].stream_kind == VAR_2 ||
               VAR_6->pes.list[VAR_7].stream_kind == VAR_4 ) )
        {
            VAR_6->pes.list[VAR_7].codec = VAR_5[VAR_9].codec;
            VAR_6->pes.list[VAR_7].codec_param = VAR_5[VAR_9].codec_param;
            continue;
        }

        if ( VAR_6->pes.list[VAR_7].stream_kind == VAR_3 )
        {
            VAR_8++;
        }
    }


    FUNC_4( VAR_6, 0.0 );
    VAR_6->need_keyframe = 0;

    hb_buffer_t *VAR_10;

    if ( VAR_8 )
        FUNC_2("Probing %d unknown stream%s", VAR_8, VAR_8 > 1 ? "s" : "" );

    while ( VAR_8 && ( VAR_10 = FUNC_3( VAR_6 ) ) != ((void*)0) )
    {
        int VAR_11, VAR_12;
        VAR_11 = FUNC_5( VAR_6, VAR_10->s.id );

        if (VAR_11 < 0 || VAR_6->pes.list[VAR_11].stream_kind != VAR_3 )
        {
            FUNC_1(&VAR_10);
            continue;
        }

        hb_pes_stream_t *VAR_13 = &VAR_6->pes.list[VAR_11];

        VAR_12 = FUNC_0(VAR_6, VAR_13, VAR_10);
        if (VAR_12 < 0)
        {
            FUNC_2("    Probe: Unsupported stream %s. stream id 0x%x-0x%x",
                    VAR_13->codec_name, VAR_13->stream_id, VAR_13->stream_id_ext);
            VAR_13->stream_kind = VAR_1;
            VAR_8--;
        }
        else if (VAR_12 && VAR_13->stream_kind != VAR_3)
        {
            FUNC_2("    Probe: Found stream %s. stream id 0x%x-0x%x",
                    VAR_13->codec_name, VAR_13->stream_id, VAR_13->stream_id_ext);
            VAR_8--;
        }
        FUNC_1(&VAR_10);
    }


    for ( VAR_7 = 0; VAR_7 < VAR_6->pes.count; VAR_7++ )
    {
        if ( VAR_6->pes.list[VAR_7].stream_kind == VAR_3 )
            VAR_6->pes.list[VAR_7].stream_kind = VAR_1;
        FUNC_1( &VAR_6->pes.list[VAR_7].probe_buf );
        VAR_6->pes.list[VAR_7].probe_next_size = 0;
    }
}
