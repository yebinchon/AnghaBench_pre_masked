
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int chapter; int chapter_end; size_t ffmpeg_video_id; int need_keyframe; TYPE_6__* ffmpeg_ic; TYPE_1__* title; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_14__ {int duration; } ;
typedef TYPE_4__ hb_chapter_t ;
struct TYPE_16__ {TYPE_5__** streams; } ;
struct TYPE_12__ {scalar_t__ num; int den; } ;
struct TYPE_15__ {TYPE_2__ time_base; } ;
struct TYPE_11__ {int list_chapter; } ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (TYPE_6__*,size_t,int ,int,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5( hb_stream_t *VAR_2, int64_t VAR_3 )
{
    AVFormatContext *VAR_4 = VAR_2->ffmpeg_ic;
    int64_t VAR_5;
    int VAR_6;


    int VAR_7 = FUNC_3(VAR_2->title->list_chapter);
    if (VAR_7 > 0)
    {
        int64_t VAR_8 = 0;
        hb_chapter_t * VAR_9;
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
        {
            VAR_9 = FUNC_4( VAR_2->title->list_chapter, VAR_10 );
            if (VAR_8 + VAR_9->duration > VAR_3)
            {
                break;
            }
            VAR_8 += VAR_9->duration;
        }
        VAR_2->chapter = VAR_10;
        VAR_2->chapter_end = VAR_8;
    }
    else
    {
        VAR_2->chapter = 0;
        VAR_2->chapter_end = VAR_1;
    }

    VAR_5 = VAR_3 * VAR_0 / 90000 + FUNC_2( VAR_2 );
    AVStream *VAR_11 = VAR_2->ffmpeg_ic->streams[VAR_2->ffmpeg_video_id];


    VAR_5 = FUNC_0(VAR_5, VAR_11->time_base.den, VAR_0 * (int64_t)VAR_11->time_base.num);
    VAR_2->need_keyframe = 1;


    VAR_6 = FUNC_1( VAR_4, VAR_2->ffmpeg_video_id, 0, VAR_5, VAR_5, 0);
    return VAR_6;
}
