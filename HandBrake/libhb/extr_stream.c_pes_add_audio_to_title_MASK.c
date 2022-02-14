
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int list_audio; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_17__ {TYPE_7__* list; } ;
struct TYPE_22__ {int reg_desc; TYPE_1__ pes; } ;
typedef TYPE_6__ hb_stream_t ;
struct TYPE_23__ {int stream_id_ext; int stream_id; int stream_type; int lang_code; int codec_param; int codec; } ;
typedef TYPE_7__ hb_pes_stream_t ;
struct TYPE_18__ {int num; int den; } ;
struct TYPE_19__ {int substream_type; int track; TYPE_2__ timebase; int codec_param; int codec; int stream_type; int reg_desc; } ;
struct TYPE_20__ {TYPE_3__ in; } ;
struct TYPE_24__ {int id; TYPE_4__ config; } ;
typedef TYPE_8__ hb_audio_t ;


 TYPE_8__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,TYPE_8__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int ,int) ;
 int FUNC_6 (char*,int,int ,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_8__*,int ) ;

__attribute__((used)) static void FUNC_9(
    hb_stream_t *VAR_0,
    int VAR_1,
    hb_title_t *VAR_2,
    int VAR_3)
{
    hb_pes_stream_t *VAR_4 = &VAR_0->pes.list[VAR_1];



    int VAR_5 = FUNC_1( VAR_4 );
    int VAR_6;
    hb_audio_t *VAR_7 = ((void*)0);

    int VAR_8 = FUNC_3( VAR_2->list_audio );


    for ( VAR_6 = 0; VAR_6 < VAR_8; VAR_6++ )
    {
        VAR_7 = FUNC_5( VAR_2->list_audio, VAR_6 );
        if ( VAR_5 == VAR_7->id )
            return;
    }

    hb_audio_t *VAR_9 = FUNC_0( sizeof( hb_audio_t ), 1 );

    VAR_9->id = VAR_5;
    VAR_9->config.in.reg_desc = VAR_0->reg_desc;
    VAR_9->config.in.stream_type = VAR_4->stream_type;
    VAR_9->config.in.substream_type = VAR_4->stream_id_ext;

    VAR_9->config.in.codec = VAR_4->codec;
    VAR_9->config.in.codec_param = VAR_4->codec_param;
    VAR_9->config.in.timebase.num = 1;
    VAR_9->config.in.timebase.den = 90000;

    FUNC_8(VAR_9, FUNC_7(VAR_4->lang_code));

    FUNC_6("stream id 0x%x (type 0x%x substream 0x%x) audio 0x%x",
           VAR_4->stream_id, VAR_4->stream_type, VAR_4->stream_id_ext, VAR_9->id);

    VAR_9->config.in.track = VAR_1;


    if ( VAR_3 >= 0 )
    {
        VAR_3 = VAR_3 < VAR_8 ? VAR_3 : VAR_8;
        for ( VAR_6 = VAR_3; VAR_6 < VAR_8; VAR_6++ )
        {
            VAR_7 = FUNC_5( VAR_2->list_audio, VAR_6 );
            int VAR_10 = VAR_7->id & 0xffff;
            int VAR_11 = VAR_7->id >> 16;
            if ( VAR_4->stream_id < VAR_10 )
                break;
            else if ( VAR_4->stream_id <= VAR_10 &&
                      VAR_4->stream_id_ext <= VAR_11 )
            {
                break;
            }
        }
        FUNC_4( VAR_2->list_audio, VAR_6, VAR_9 );
    }
    else
    {
        FUNC_2( VAR_2->list_audio, VAR_9 );
    }
}
