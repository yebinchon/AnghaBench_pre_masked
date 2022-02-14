
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {scalar_t__ force; scalar_t__ dest; scalar_t__ default_track; } ;
struct TYPE_17__ {scalar_t__ id; int out_track; TYPE_2__ config; int source; } ;
typedef TYPE_3__ hb_subtitle_t ;
struct TYPE_18__ {scalar_t__ pass_id; int list_subtitle; int mux; scalar_t__ indepth_scan; int h; } ;
typedef TYPE_4__ hb_job_t ;
struct TYPE_19__ {TYPE_7__* select_subtitle; } ;
typedef TYPE_5__ hb_interjob_t ;
typedef int hb_filter_object_t ;
struct TYPE_15__ {scalar_t__ force; } ;
struct TYPE_20__ {scalar_t__ forced_hits; scalar_t__ id; scalar_t__ hits; int out_track; TYPE_1__ config; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int * FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_7__*) ;
 TYPE_3__* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,TYPE_3__*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 TYPE_7__* FUNC_11 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_12( hb_job_t * VAR_5 )
{
    int VAR_6;
    uint8_t VAR_7 = 0;
    hb_interjob_t * VAR_8 = FUNC_3(VAR_5->h);
    hb_subtitle_t * VAR_9;

    if (VAR_5->indepth_scan)
    {

        return 0;
    }



    if (VAR_8->select_subtitle != ((void*)0))
    {


        if( VAR_8->select_subtitle->config.force &&
            VAR_8->select_subtitle->forced_hits == 0 )
        {
            VAR_8->select_subtitle->config.force = 0;
        }
        for (VAR_6 = 0; VAR_6 < FUNC_4( VAR_5->list_subtitle );)
        {
            VAR_9 = FUNC_6(VAR_5->list_subtitle, VAR_6);






            if( ( VAR_8->select_subtitle->id == VAR_9->id ) &&
                ( ( VAR_9->config.force &&
                    VAR_8->select_subtitle->forced_hits == 0 ) ||
                  ( VAR_9->config.force == VAR_8->select_subtitle->config.force ) ||
                  ( !VAR_9->config.force &&
                    VAR_8->select_subtitle->hits == VAR_8->select_subtitle->forced_hits ) ) )
            {
                FUNC_7( VAR_5->list_subtitle, VAR_9 );
                FUNC_0( VAR_9 );
                continue;
            }




            VAR_9->out_track = ++VAR_6 + 1;
        }






        VAR_8->select_subtitle->out_track = 1;
        if (VAR_5->pass_id == VAR_1 ||
            VAR_5->pass_id == VAR_2)
        {

            FUNC_5(VAR_5->list_subtitle, 0, VAR_8->select_subtitle);
            VAR_8->select_subtitle = ((void*)0);
        }
        else
        {

            FUNC_5(VAR_5->list_subtitle, 0, FUNC_11(VAR_8->select_subtitle));
        }
    }

    for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_5->list_subtitle);)
    {
        VAR_9 = FUNC_6(VAR_5->list_subtitle, VAR_6);
        if (VAR_9->config.dest == VAR_4)
        {
            if (VAR_7)
            {
                if (!FUNC_10(VAR_9->source, VAR_5->mux))
                {
                    FUNC_8( "More than one subtitle burn-in requested, dropping track %d.", VAR_6 );
                    FUNC_7(VAR_5->list_subtitle, VAR_9);
                    FUNC_0(VAR_9);
                    continue;
                }
                else
                {
                    FUNC_8("More than one subtitle burn-in requested.  Changing track %d to soft subtitle.", VAR_6);
                    VAR_9->config.dest = VAR_3;
                }
            }
            else if (!FUNC_9(VAR_9->source))
            {
                FUNC_8("Subtitle burn-in requested and input track can not be rendered.  Changing track %d to soft subtitle.", VAR_6);
                VAR_9->config.dest = VAR_3;
            }
            else
            {
                VAR_7 = 1;
            }
        }

        if (VAR_9->config.dest == VAR_3 &&
            !FUNC_10(VAR_9->source, VAR_5->mux))
        {
            if (!VAR_7)
            {
                FUNC_8("Subtitle pass-thru requested and input track is not compatible with container.  Changing track %d to burned-in subtitle.", VAR_6);
                VAR_9->config.dest = VAR_4;
                VAR_9->config.default_track = 0;
                VAR_7 = 1;
            }
            else
            {
                FUNC_8("Subtitle pass-thru requested and input track is not compatible with container.  One track already burned, dropping track %d.", VAR_6);
                FUNC_7(VAR_5->list_subtitle, VAR_9);
                FUNC_0(VAR_9);
                continue;
            }
        }



        VAR_9->out_track = ++VAR_6;
    }
    if (VAR_7)
    {





        hb_filter_object_t *VAR_10 = FUNC_2(VAR_0);
        FUNC_1(VAR_5, VAR_10, ((void*)0));
    }

    return 0;
}
