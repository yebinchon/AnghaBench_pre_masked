
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ force; } ;
struct TYPE_10__ {int id; int hits; int forced_hits; TYPE_1__ config; int lang; int track; } ;
typedef TYPE_2__ hb_subtitle_t ;
struct TYPE_11__ {int list_subtitle; TYPE_1__ select_subtitle_config; int h; } ;
typedef TYPE_3__ hb_job_t ;
struct TYPE_12__ {TYPE_2__* select_subtitle; } ;
typedef TYPE_4__ hb_interjob_t ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5( hb_job_t * VAR_0 )
{
    hb_subtitle_t *VAR_1;
    int VAR_2 = 0;
    int VAR_3 = 0;
    int VAR_4 = 0;
    int VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8;



    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_0->list_subtitle); VAR_8++)
    {
        VAR_1 = FUNC_2(VAR_0->list_subtitle, VAR_8);

        FUNC_4("Subtitle track %d (id 0x%x) '%s': %d hits (%d forced)",
               VAR_1->track, VAR_1->id, VAR_1->lang,
               VAR_1->hits, VAR_1->forced_hits);

        if (VAR_1->hits == 0)
            continue;

        if (VAR_2 < VAR_1->hits)
        {
            VAR_2 = VAR_1->hits;
        }

        if (VAR_3 == 0 ||
            VAR_3 > VAR_1->hits)
        {
            VAR_3 = VAR_1->hits;
            VAR_4 = VAR_1->id;
        }


        if (VAR_1->forced_hits > 0 &&
            (VAR_6 == 0 ||
             VAR_6 > VAR_1->forced_hits))
        {
            VAR_5 = VAR_1->id;
            VAR_6 = VAR_1->forced_hits;
        }
    }

    if (VAR_5 && VAR_0->select_subtitle_config.force)
    {


        VAR_7 = VAR_5;
        FUNC_4("Found a subtitle candidate with id 0x%x (contains forced subs)",
               VAR_7 );
    }
    else if (VAR_3 > 0 && VAR_3 < VAR_2 * 0.1)
    {





        VAR_7 = VAR_4;
        FUNC_4( "Found a subtitle candidate with id 0x%x", VAR_7 );
    }
    else
    {
        FUNC_4( "No candidate detected during subtitle scan" );
    }

    for (VAR_8 = 0; VAR_8 < FUNC_1( VAR_0->list_subtitle ); VAR_8++)
    {
        VAR_1 = FUNC_2( VAR_0->list_subtitle, VAR_8 );
        if (VAR_1->id == VAR_7)
        {
            hb_interjob_t *VAR_9 = FUNC_0(VAR_0->h);

            VAR_1->config = VAR_0->select_subtitle_config;


            FUNC_3(VAR_0->list_subtitle, VAR_1);
            VAR_9->select_subtitle = VAR_1;
            break;
        }
    }
}
