
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_25__ {char* native_name; char* eng_name; int iso639_2; } ;
typedef TYPE_4__ iso639_lang_t ;
struct TYPE_26__ {int list_subtitle; } ;
typedef TYPE_5__ hb_title_t ;
struct TYPE_24__ {int default_track; void* dest; } ;
struct TYPE_23__ {int num; int den; } ;
struct TYPE_27__ {int id; int extradata_size; int track; int attributes; TYPE_3__ config; scalar_t__* extradata; int name; scalar_t__* iso639_2; int source; int lang; int codec; void* format; TYPE_2__ timebase; } ;
typedef TYPE_6__ hb_subtitle_t ;
struct TYPE_28__ {TYPE_1__* ffmpeg_ic; } ;
typedef TYPE_7__ hb_stream_t ;
struct TYPE_30__ {char* value; } ;
struct TYPE_29__ {int disposition; int metadata; TYPE_10__* codecpar; } ;
struct TYPE_22__ {TYPE_8__** streams; } ;
struct TYPE_21__ {int codec_id; int extradata_size; int * extradata; } ;
typedef TYPE_8__ AVStream ;
typedef TYPE_9__ AVDictionaryEntry ;
typedef TYPE_10__ AVCodecParameters ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_9__* FUNC_0 (int ,char*,int *,int ) ;
 TYPE_6__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_10__*,TYPE_6__*) ;
 char* FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ,TYPE_6__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (char*) ;
 scalar_t__* FUNC_10 (int) ;
 int FUNC_11 (scalar_t__*,int *,int) ;
 int FUNC_12 (int ,int,char*,char*,char*) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_16( hb_title_t *VAR_21, hb_stream_t *VAR_22, int VAR_23 )
{
    AVStream * VAR_24 = VAR_22->ffmpeg_ic->streams[VAR_23];
    AVCodecParameters * VAR_25 = VAR_24->codecpar;
    AVDictionaryEntry * VAR_26 = FUNC_0(VAR_24->metadata, "language", ((void*)0), 0 );
    iso639_lang_t * VAR_27 = FUNC_9(VAR_26 != ((void*)0) ?
                                              VAR_26->value : "und");
    const char * VAR_28 = FUNC_3(VAR_24, VAR_27->iso639_2);

    hb_subtitle_t *VAR_29 = FUNC_1( 1, sizeof(*VAR_29) );

    VAR_29->id = VAR_23;



    VAR_29->timebase.num = 1;
    VAR_29->timebase.den = 90000;

    switch ( VAR_25->codec_id )
    {
        case 133:
            VAR_29->format = VAR_8;
            VAR_29->source = VAR_14;
            VAR_29->config.dest = VAR_9;
            VAR_29->codec = VAR_20;
            if (FUNC_2(VAR_25, VAR_29))
                FUNC_7( "add_ffmpeg_subtitle: malformed extradata for VOB subtitle track; "
                        "subtitle colors likely to be wrong" );
            break;
        case 128:
        case 129:
            VAR_29->format = VAR_11;
            VAR_29->source = VAR_13;
            VAR_29->config.dest = VAR_6;
            VAR_29->codec = VAR_19;
            break;
        case 130:
            VAR_29->format = VAR_11;
            VAR_29->source = VAR_12;
            VAR_29->config.dest = VAR_6;
            VAR_29->codec = VAR_18;
            break;
        case 134:
            VAR_29->format = VAR_11;
            VAR_29->source = VAR_10;
            VAR_29->config.dest = VAR_6;
            VAR_29->codec = VAR_17;
            break;
        case 131:
            VAR_29->format = VAR_8;
            VAR_29->source = VAR_7;
            VAR_29->config.dest = VAR_9;
            VAR_29->codec = VAR_16;
            break;
        case 132:
            VAR_29->format = VAR_11;
            VAR_29->source = VAR_2;
            VAR_29->config.dest = VAR_6;
            VAR_29->codec = VAR_15;
            VAR_29->attributes = VAR_3;
            break;
        default:
            FUNC_7( "add_ffmpeg_subtitle: unknown subtitle stream type: 0x%x",
                    (int) VAR_25->codec_id );
            FUNC_4(VAR_29);
            return;
    }

    FUNC_12(VAR_29->lang, sizeof( VAR_29->lang ), "%s [%s]",
             FUNC_14(VAR_27->native_name) ? VAR_27->native_name : VAR_27->eng_name,
             FUNC_8(VAR_29->source));
    FUNC_15(VAR_29->iso639_2, VAR_27->iso639_2, 3);
    VAR_29->iso639_2[3] = 0;
    if (VAR_28 != ((void*)0))
    {
        VAR_29->name = FUNC_13(VAR_28);
    }


    if (VAR_25->extradata != ((void*)0))
    {
        VAR_29->extradata = FUNC_10(VAR_25->extradata_size + 1);
        FUNC_11(VAR_29->extradata,
               VAR_25->extradata, VAR_25->extradata_size);
        VAR_29->extradata[VAR_25->extradata_size] = 0;
        VAR_29->extradata_size = VAR_25->extradata_size + 1;
    }

    if (VAR_24->disposition & VAR_0)
    {
        VAR_29->config.default_track = 1;
        VAR_29->attributes |= VAR_4;
    }
    if (VAR_24->disposition & VAR_1)
    {
        VAR_29->attributes |= VAR_5;
    }

    VAR_29->track = FUNC_6(VAR_21->list_subtitle);
    FUNC_5(VAR_21->list_subtitle, VAR_29);
}
