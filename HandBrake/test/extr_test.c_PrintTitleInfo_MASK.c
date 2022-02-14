
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {float den; scalar_t__ num; } ;
struct TYPE_16__ {float den; scalar_t__ num; } ;
struct TYPE_14__ {int num; int den; } ;
struct TYPE_15__ {int width; int height; TYPE_1__ par; } ;
struct TYPE_20__ {int index; scalar_t__ type; char* path; int playlist; int angle_count; int hours; int minutes; int seconds; int* crop; scalar_t__ detected_interlacing; int list_subtitle; int list_audio; int list_chapter; TYPE_4__ vrate; TYPE_3__ dar; TYPE_2__ geometry; } ;
typedef TYPE_7__ hb_title_t ;
struct TYPE_21__ {char* lang; } ;
typedef TYPE_8__ hb_subtitle_t ;
struct TYPE_22__ {int index; int hours; int minutes; int seconds; } ;
typedef TYPE_9__ hb_chapter_t ;
struct TYPE_19__ {char* description; char* iso639_2; } ;
struct TYPE_18__ {scalar_t__ codec; int samplerate; int bitrate; } ;
struct TYPE_13__ {TYPE_6__ lang; TYPE_5__ in; } ;
typedef TYPE_10__ hb_audio_config_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_10__* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4( hb_title_t * VAR_7, int VAR_8 )
{
    int VAR_9;

    FUNC_0( VAR_6, "+ title %d:\n", VAR_7->index );
    if ( VAR_7->index == VAR_8 )
    {
        FUNC_0( VAR_6, "  + Main Feature\n" );
    }
    if ( VAR_7->type == VAR_5 || VAR_7->type == VAR_4 )
    {
        FUNC_0( VAR_6, "  + stream: %s\n", VAR_7->path );
    }
    else if ( VAR_7->type == VAR_3 )
    {
        FUNC_0( VAR_6, "  + index %d\n", VAR_7->index);
    }
    else if( VAR_7->type == VAR_2 )
    {
        FUNC_0( VAR_6, "  + playlist: %05d.MPLS\n", VAR_7->playlist );
    }
    if (VAR_7->angle_count > 1)
        FUNC_0( VAR_6, "  + angle(s) %d\n", VAR_7->angle_count );
    FUNC_0( VAR_6, "  + duration: %02d:%02d:%02d\n",
             VAR_7->hours, VAR_7->minutes, VAR_7->seconds );
    FUNC_0( VAR_6, "  + size: %dx%d, pixel aspect: %d/%d, display aspect: %.2f, %.3f fps\n",
             VAR_7->geometry.width, VAR_7->geometry.height,
             VAR_7->geometry.par.num, VAR_7->geometry.par.den,
             (float)VAR_7->dar.num / VAR_7->dar.den,
             (float)VAR_7->vrate.num / VAR_7->vrate.den );
    FUNC_0( VAR_6, "  + autocrop: %d/%d/%d/%d\n", VAR_7->crop[0],
             VAR_7->crop[1], VAR_7->crop[2], VAR_7->crop[3] );

    FUNC_0( VAR_6, "  + chapters:\n" );
    for( VAR_9 = 0; VAR_9 < FUNC_2( VAR_7->list_chapter ); VAR_9++ )
    {
        hb_chapter_t * VAR_10;
        VAR_10 = FUNC_3( VAR_7->list_chapter, VAR_9 );
        FUNC_0( VAR_6, "    + %d: duration %02d:%02d:%02d\n",
                 VAR_10->index, VAR_10->hours, VAR_10->minutes,
                 VAR_10->seconds );
    }
    FUNC_0( VAR_6, "  + audio tracks:\n" );
    for( VAR_9 = 0; VAR_9 < FUNC_2( VAR_7->list_audio ); VAR_9++ )
    {
        hb_audio_config_t *VAR_11;
        VAR_11 = FUNC_1( VAR_7->list_audio, VAR_9 );
        if( ( VAR_11->in.codec == VAR_0 ) || ( VAR_11->in.codec == VAR_1) )
        {
            FUNC_0( VAR_6, "    + %d, %s (iso639-2: %s), %dHz, %dbps\n",
                     VAR_9 + 1,
                     VAR_11->lang.description,
                     VAR_11->lang.iso639_2,
                     VAR_11->in.samplerate,
                     VAR_11->in.bitrate );
        }
        else
        {
            FUNC_0( VAR_6, "    + %d, %s (iso639-2: %s)\n",
                     VAR_9 + 1,
                     VAR_11->lang.description,
                     VAR_11->lang.iso639_2 );
        }
    }
    FUNC_0( VAR_6, "  + subtitle tracks:\n" );
    for( VAR_9 = 0; VAR_9 < FUNC_2( VAR_7->list_subtitle ); VAR_9++ )
    {
        hb_subtitle_t *VAR_12;
        VAR_12 = FUNC_3( VAR_7->list_subtitle, VAR_9 );
        FUNC_0(VAR_6, "    + %d, %s\n", VAR_9 + 1, VAR_12->lang);
    }

    if(VAR_7->detected_interlacing)
    {

        FUNC_0( VAR_6, "  + combing detected, may be interlaced or telecined\n");
    }

}
