
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_16__ {char* native_name; char* eng_name; char* iso639_2; } ;
typedef TYPE_5__ iso639_lang_t ;
typedef int hb_list_t ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_14__ {int substream_type; int codec; int track; TYPE_2__ timebase; void* codec_param; int stream_type; int reg_desc; } ;
struct TYPE_12__ {int iso639_2; int simple; int attributes; } ;
struct TYPE_15__ {TYPE_3__ in; TYPE_1__ lang; } ;
struct TYPE_17__ {int id; TYPE_4__ config; } ;
typedef TYPE_6__ hb_audio_t ;
struct TYPE_18__ {int pid; scalar_t__ lang; int coding_type; } ;
typedef TYPE_7__ BLURAY_STREAM_INFO ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_6__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (char*,int,int ,char const*,int ) ;
 TYPE_5__* FUNC_4 (char*) ;
 int FUNC_5 (int ,int,char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(int VAR_2, hb_list_t *VAR_3, BLURAY_STREAM_INFO *VAR_4, int VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
    const char * VAR_8;
    hb_audio_t * VAR_9;
    iso639_lang_t * VAR_10;

    VAR_9 = FUNC_1( sizeof( hb_audio_t ), 1 );

    VAR_9->id = (VAR_5 << 16) | VAR_4->pid;
    VAR_9->config.in.reg_desc = FUNC_0("HDMV");
    VAR_9->config.in.stream_type = VAR_4->coding_type;
    VAR_9->config.in.substream_type = VAR_5;
    VAR_9->config.in.codec = VAR_6;
    VAR_9->config.in.codec_param = VAR_7;

    switch( VAR_9->config.in.codec )
    {
        case 129:
            VAR_8 = "AC3";
            break;
        case 128:
            VAR_8 = "DTS";
            break;
        default:
        {
            if( VAR_9->config.in.codec & VAR_0 )
            {
                switch( VAR_4->coding_type )
                {
                    case 136:
                        VAR_8 = "E-AC3";
                        break;
                    case 135:
                        VAR_8 = "DTS-HD HRA";
                        break;
                    case 134:
                        VAR_8 = "DTS-HD MA";
                        break;
                    case 133:
                        VAR_8 = "BD LPCM";
                        break;
                    case 132:
                        VAR_8 = "MPEG1";
                        break;
                    case 131:
                        VAR_8 = "MPEG2";
                        break;
                    case 130:
                        VAR_8 = "TrueHD";
                        break;
                    default:
                        VAR_8 = "Unknown FFmpeg";
                        break;
                }
            }
            else
            {
                VAR_8 = "Unknown";
            }
        }
        break;
    }

    VAR_10 = FUNC_4( (char*)VAR_4->lang );

    VAR_9->config.lang.attributes = VAR_1;

    FUNC_5( VAR_9->config.lang.simple,
              sizeof( VAR_9->config.lang.simple ), "%s",
              FUNC_6( VAR_10->native_name ) ? VAR_10->native_name : VAR_10->eng_name );
    FUNC_5( VAR_9->config.lang.iso639_2,
              sizeof( VAR_9->config.lang.iso639_2 ), "%s", VAR_10->iso639_2 );

    FUNC_3("bd: audio id=0x%x, lang=%s (%s), 3cc=%s", VAR_9->id,
           VAR_9->config.lang.simple, VAR_8, VAR_9->config.lang.iso639_2);

    VAR_9->config.in.track = VAR_2;
    VAR_9->config.in.timebase.num = 1;
    VAR_9->config.in.timebase.den = 90000;

    FUNC_2( VAR_3, VAR_9 );
    return;
}
