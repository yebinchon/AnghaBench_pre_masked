
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char* native_name; char* eng_name; int iso639_2; } ;
typedef TYPE_2__ iso639_lang_t ;
struct TYPE_14__ {scalar_t__* name; scalar_t__* src_filename; } ;
struct TYPE_11__ {int num; int den; } ;
struct TYPE_13__ {int id; int source; TYPE_4__ config; int iso639_2; int lang; TYPE_1__ timebase; int codec; int format; } ;
typedef TYPE_3__ hb_subtitle_t ;
typedef TYPE_4__ hb_subtitle_config_t ;
struct TYPE_15__ {int list_subtitle; } ;
typedef TYPE_5__ hb_job_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (char const*) ;
 int FUNC_7 (int ,int,char*,char*,char*) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (char*) ;

int FUNC_11( const hb_job_t * VAR_5,
                const hb_subtitle_config_t * VAR_6,
                const char *VAR_7, int VAR_8 )
{
    hb_subtitle_t *VAR_9;
    iso639_lang_t *VAR_10 = ((void*)0);

    VAR_9 = FUNC_0( 1, sizeof( *VAR_9 ) );
    if (VAR_9 == ((void*)0))
    {
        FUNC_1("hb_srt_add: malloc failed");
        return 0;
    }

    VAR_9->id = (FUNC_3(VAR_5->list_subtitle) << 8) |
                   VAR_0;
    VAR_9->format = VAR_2;
    VAR_9->source = VAR_8;
    VAR_9->codec = VAR_8 == VAR_1 ? VAR_3 : VAR_4;
    VAR_9->timebase.num = 1;
    VAR_9->timebase.den = 90000;

    VAR_10 = FUNC_6(VAR_7);
    if (VAR_10 == ((void*)0))
    {
        FUNC_4("hb_srt_add: unknown language code (%s)", VAR_7);
        VAR_10 = FUNC_6("und");
    }
    FUNC_7(VAR_9->lang, sizeof(VAR_9->lang), "%s [%s]",
             FUNC_10(VAR_10->native_name) ? VAR_10->native_name : VAR_10->eng_name,
             FUNC_5(VAR_9->source));
    FUNC_8(VAR_9->iso639_2, VAR_10->iso639_2);

    VAR_9->config = *VAR_6;
    if (VAR_6->name != ((void*)0) && VAR_6->name[0] != 0)
    {
        VAR_9->config.name = FUNC_9(VAR_6->name);
    }
    else
    {
        VAR_9->config.name = ((void*)0);
    }
    VAR_9->config.src_filename = FUNC_9(VAR_6->src_filename);
    FUNC_2(VAR_5->list_subtitle, VAR_9);

    return 1;
}
