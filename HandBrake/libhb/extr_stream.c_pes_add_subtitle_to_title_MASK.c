
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {char* native_name; char* eng_name; char* iso639_2; } ;
typedef TYPE_4__ iso639_lang_t ;
struct TYPE_22__ {int list_subtitle; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_20__ {void* dest; } ;
struct TYPE_19__ {int num; int den; } ;
struct TYPE_23__ {int id; int track; scalar_t__ source; int substream_type; int codec; int* palette; int stream_type; int reg_desc; int iso639_2; int lang; TYPE_3__ config; void* format; TYPE_2__ timebase; } ;
typedef TYPE_6__ hb_subtitle_t ;
struct TYPE_18__ {TYPE_8__* list; } ;
struct TYPE_24__ {int reg_desc; TYPE_1__ pes; } ;
typedef TYPE_7__ hb_stream_t ;
struct TYPE_25__ {int codec; int stream_id_ext; int stream_id; int stream_type; int lang_code; } ;
typedef TYPE_8__ hb_pes_stream_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;


 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,TYPE_6__*) ;
 TYPE_6__* FUNC_6 (int ,int) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (scalar_t__) ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int,char*,char*,...) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(
    hb_stream_t *VAR_4,
    int VAR_5,
    hb_title_t *VAR_6,
    int VAR_7)
{
    hb_pes_stream_t *VAR_8 = &VAR_4->pes.list[VAR_5];



    int VAR_9 = FUNC_2( VAR_8 );
    int VAR_10;
    hb_subtitle_t *VAR_11 = ((void*)0);

    int VAR_12 = FUNC_4( VAR_6->list_subtitle );


    for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ )
    {
        VAR_11 = FUNC_6( VAR_6->list_subtitle, VAR_10 );
        if ( VAR_9 == VAR_11->id )
            return;
    }

    hb_subtitle_t *VAR_13 = FUNC_0( sizeof( hb_subtitle_t ), 1 );
    iso639_lang_t * VAR_14;

    VAR_13->track = VAR_5;
    VAR_13->id = VAR_9;
    VAR_13->timebase.num = 1;
    VAR_13->timebase.den = 90000;

    switch ( VAR_8->codec )
    {
        case 129:
            VAR_13->source = VAR_0;
            VAR_13->format = VAR_1;
            VAR_13->config.dest = VAR_2;
            break;
        case 128:
            VAR_13->source = VAR_3;
            VAR_13->format = VAR_1;
            VAR_13->config.dest = VAR_2;
            break;
        default:

            FUNC_7("unrecognized subtitle!");
            FUNC_1( VAR_13 );
            return;
    }
    VAR_14 = FUNC_9( VAR_8->lang_code );
    FUNC_10(VAR_13->lang, sizeof( VAR_13->lang ), "%s [%s]",
             FUNC_11(VAR_14->native_name) ? VAR_14->native_name : VAR_14->eng_name,
             FUNC_8(VAR_13->source));
    FUNC_10(VAR_13->iso639_2, sizeof( VAR_13->iso639_2 ), "%s",
             VAR_14->iso639_2);
    VAR_13->reg_desc = VAR_4->reg_desc;
    VAR_13->stream_type = VAR_8->stream_type;
    VAR_13->substream_type = VAR_8->stream_id_ext;
    VAR_13->codec = VAR_8->codec;



    if ( VAR_13->source == VAR_3 )
    {
        VAR_13->palette[0] = 0x108080;
        VAR_13->palette[1] = 0x108080;
        VAR_13->palette[2] = 0x108080;
        VAR_13->palette[3] = 0xbff000;

        VAR_13->palette[4] = 0xbff000;
        VAR_13->palette[5] = 0x108080;
        VAR_13->palette[6] = 0x108080;
        VAR_13->palette[7] = 0x108080;

        VAR_13->palette[8] = 0xbff000;
        VAR_13->palette[9] = 0x108080;
        VAR_13->palette[10] = 0x108080;
        VAR_13->palette[11] = 0x108080;

        VAR_13->palette[12] = 0x108080;
        VAR_13->palette[13] = 0xbff000;
        VAR_13->palette[14] = 0x108080;
        VAR_13->palette[15] = 0x108080;
    }

    FUNC_7("stream id 0x%x (type 0x%x substream 0x%x) subtitle 0x%x",
           VAR_8->stream_id, VAR_8->stream_type, VAR_8->stream_id_ext, VAR_13->id);


    if ( VAR_7 >= 0 )
    {
        VAR_7 = VAR_7 < VAR_12 ? VAR_7 : VAR_12;
        for ( VAR_10 = VAR_7; VAR_10 < VAR_12; VAR_10++ )
        {
            VAR_11 = FUNC_6( VAR_6->list_subtitle, VAR_10 );
            int VAR_15 = VAR_11->id & 0xffff;
            int VAR_16 = VAR_11->id >> 16;
            if ( VAR_8->stream_id < VAR_15 )
                break;
            else if ( VAR_8->stream_id <= VAR_15 &&
                      VAR_8->stream_id_ext <= VAR_16 )
            {
                break;
            }
        }
        FUNC_5( VAR_6->list_subtitle, VAR_10, VAR_13 );
    }
    else
    {
        FUNC_3( VAR_6->list_subtitle, VAR_13 );
    }
}
