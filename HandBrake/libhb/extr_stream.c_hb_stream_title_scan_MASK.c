
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {int num; int den; } ;
struct TYPE_30__ {int flags; int list_chapter; int seconds; int minutes; int hours; int duration; int demuxer; TYPE_2__ video_timebase; int video_codec_param; int video_codec; int video_id; int name; int type; } ;
typedef TYPE_4__ hb_title_t ;
struct TYPE_29__ {int PCR_PID; } ;
struct TYPE_26__ {TYPE_21__* list; } ;
struct TYPE_31__ {scalar_t__ hb_stream_type; char* path; int has_IDRs; int ts_flags; TYPE_3__ pmt_info; TYPE_1__ pes; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_32__ {int index; int seconds; int minutes; int hours; int duration; } ;
typedef TYPE_6__ hb_chapter_t ;
struct TYPE_27__ {int codec_param; int codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__* FUNC_0 (int,int) ;
 scalar_t__ VAR_6 ;
 TYPE_4__* FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_21__*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__**) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int ,char) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (TYPE_5__*,int ,int ,int,int ,int *) ;

hb_title_t * FUNC_15(hb_stream_t *VAR_8, hb_title_t * VAR_9)
{
    if ( VAR_8->hb_stream_type == VAR_6 )
        return FUNC_1( VAR_8, VAR_9 );


    VAR_9->type = VAR_2;


    char * VAR_10 = VAR_8->path;
    char * VAR_11 = FUNC_9(VAR_8->path);
    if (VAR_11)
        VAR_10 = VAR_11 + 1;
    VAR_9->name = FUNC_12(VAR_10);
    char *VAR_12 = FUNC_13(VAR_9->name, '.');
    if (VAR_12)
        *VAR_12 = '\0';
    FUNC_4(VAR_8, VAR_9);
    FUNC_5(VAR_8, VAR_9);


    int VAR_13 = FUNC_11( VAR_8 );
    if ( VAR_13 < 0 )
    {
        FUNC_10( &VAR_9 );
        return ((void*)0);
    }

    VAR_9->video_id = FUNC_2( &VAR_8->pes.list[VAR_13] );
    VAR_9->video_codec = VAR_8->pes.list[VAR_13].codec;
    VAR_9->video_codec_param = VAR_8->pes.list[VAR_13].codec_param;
    VAR_9->video_timebase.num = 1;
    VAR_9->video_timebase.den = 90000;

    if (VAR_8->hb_stream_type == VAR_7)
    {
        VAR_9->demuxer = VAR_3;


        FUNC_14( VAR_8, VAR_8->pmt_info.PCR_PID, 0, -1, VAR_4, ((void*)0) );
    }
    else
    {
        VAR_9->demuxer = VAR_1;
    }


    VAR_8->has_IDRs = 0;
    FUNC_8(VAR_8, VAR_9);


    hb_chapter_t * VAR_14;
    VAR_14 = FUNC_0( sizeof( hb_chapter_t ), 1 );
    FUNC_3( VAR_14, "Chapter 1" );
    VAR_14->index = 1;
    VAR_14->duration = VAR_9->duration;
    VAR_14->hours = VAR_9->hours;
    VAR_14->minutes = VAR_9->minutes;
    VAR_14->seconds = VAR_9->seconds;
    FUNC_6( VAR_9->list_chapter, VAR_14 );

    if ( VAR_8->has_IDRs < 1 )
    {
        FUNC_7( "stream doesn't seem to have video IDR frames" );
        VAR_9->flags |= VAR_0;
    }

    if ( VAR_8->hb_stream_type == VAR_7 &&
         ( VAR_8->ts_flags & VAR_5 ) == 0 )
    {
        FUNC_7( "transport stream missing PCRs - using video DTS instead" );
    }



    return VAR_9;
}
