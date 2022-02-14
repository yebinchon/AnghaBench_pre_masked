
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {char* native_name; char* eng_name; char* iso639_2; } ;
typedef TYPE_3__ iso639_lang_t ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_11__ {int dest; } ;
struct TYPE_14__ {int track; int stream_type; int iso639_2; int lang; int id; TYPE_2__ timebase; int codec; int reg_desc; int source; TYPE_1__ config; int format; } ;
typedef TYPE_4__ hb_subtitle_t ;
typedef int hb_list_t ;
struct TYPE_15__ {int coding_type; scalar_t__ lang; int pid; } ;
typedef TYPE_5__ BLURAY_STREAM_INFO ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 char* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (char*) ;
 int FUNC_7 (int ,int,char*,char*,...) ;
 scalar_t__ FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(int VAR_3, hb_list_t *VAR_4, BLURAY_STREAM_INFO *VAR_5, uint32_t VAR_6)
{
    hb_subtitle_t * VAR_7;
    iso639_lang_t * VAR_8;

    VAR_7 = FUNC_1( sizeof( hb_subtitle_t ), 1 );

    VAR_7->track = VAR_3;
    VAR_7->id = VAR_5->pid;

    switch ( VAR_5->coding_type )
    {
        case 128:
            VAR_7->source = VAR_0;
            VAR_7->format = VAR_1;
            VAR_7->config.dest = VAR_2;
            break;
        default:

            FUNC_2( VAR_7 );
            return;
    }
    VAR_8 = FUNC_6( (char*)VAR_5->lang );
    FUNC_7(VAR_7->lang, sizeof( VAR_7->lang ), "%s [%s]",
             FUNC_8(VAR_8->native_name) ? VAR_8->native_name : VAR_8->eng_name,
             FUNC_5(VAR_7->source));
    FUNC_7(VAR_7->iso639_2, sizeof( VAR_7->iso639_2 ), "%s",
             VAR_8->iso639_2);

    VAR_7->reg_desc = FUNC_0("HDMV");
    VAR_7->stream_type = VAR_5->coding_type;
    VAR_7->codec = VAR_6;
    VAR_7->timebase.num = 1;
    VAR_7->timebase.den = 90000;

    FUNC_4( "bd: subtitle id=0x%x, lang=%s, 3cc=%s", VAR_7->id,
            VAR_7->lang, VAR_7->iso639_2 );

    FUNC_3( VAR_4, VAR_7 );
    return;
}
