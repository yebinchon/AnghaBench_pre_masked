
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int int64_t ;
struct TYPE_14__ {void* last_scr; } ;
struct TYPE_17__ {int chapter_end; int start_found; scalar_t__ duration; int splice_list_size; void* fifos; TYPE_3__* splice_list; TYPE_12__* title; int pts_to_start; void* last_pts; TYPE_1__ demux; int die; TYPE_7__* job; int h; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_18__ {TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
struct TYPE_19__ {int id; } ;
typedef TYPE_6__ hb_subtitle_t ;
struct TYPE_20__ {int chapter_end; scalar_t__ pts_to_start; scalar_t__ pts_to_stop; int frame_to_stop; int frame_to_start; int list_audio; int list_subtitle; TYPE_12__* title; int die; int h; } ;
typedef TYPE_7__ hb_job_t ;
typedef int hb_fifo_t ;
struct TYPE_21__ {int id; } ;
typedef TYPE_8__ hb_audio_t ;
typedef int buffer_splice_list_t ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int den; int num; } ;
struct TYPE_13__ {int duration; int video_id; int list_chapter; TYPE_2__ vrate; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_12__*,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6( hb_work_object_t * VAR_1, hb_job_t * VAR_2 )
{
    hb_work_private_t * VAR_3;

    VAR_3 = FUNC_1( sizeof( hb_work_private_t ), 1 );
    VAR_1->private_data = VAR_3;

    VAR_3->h = VAR_2->h;
    VAR_3->job = VAR_2;
    VAR_3->title = VAR_2->title;
    VAR_3->die = VAR_2->die;

    VAR_3->demux.last_scr = VAR_0;
    VAR_3->last_pts = VAR_0;

    VAR_3->chapter_end = VAR_2->chapter_end;
    if (!VAR_2->pts_to_start)
    {
        VAR_3->start_found = 1;
    }
    else
    {




        VAR_3->pts_to_start = FUNC_0(0, VAR_2->pts_to_start - 1000000);
    }

    if (VAR_2->pts_to_stop > 0)
    {
        VAR_3->duration = VAR_2->pts_to_start + VAR_2->pts_to_stop;
    }
    else if (VAR_2->frame_to_stop)
    {
        int VAR_4 = VAR_2->frame_to_start + VAR_2->frame_to_stop;
        VAR_3->duration = (int64_t)VAR_4 * VAR_2->title->vrate.den * 90000 /
                                        VAR_2->title->vrate.num;
    }
    else
    {
        int VAR_5 = FUNC_3(VAR_2->title->list_chapter);
        if (VAR_5 == 0 || VAR_5 <= VAR_2->chapter_end)
        {
            VAR_3->duration = VAR_2->title->duration;
        }
        else
        {
            VAR_3->duration = FUNC_2(VAR_2->title, VAR_2->chapter_end);
        }
    }



    int VAR_6 = 1;
    VAR_6 += FUNC_3( VAR_2->list_subtitle );
    VAR_6 += FUNC_3( VAR_2->list_audio );
    VAR_3->splice_list_size = VAR_6;
    VAR_3->splice_list = FUNC_1(VAR_6, sizeof(buffer_splice_list_t));


    int VAR_7, VAR_8 = 0;
    VAR_3->splice_list[VAR_8++].id = VAR_3->title->video_id;
    for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_2->list_subtitle); VAR_7++)
    {
        hb_subtitle_t * VAR_9 = FUNC_4(VAR_2->list_subtitle, VAR_7);
        VAR_3->splice_list[VAR_8++].id = VAR_9->id;
    }
    for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_2->list_audio); VAR_7++)
    {
        hb_audio_t * VAR_10 = FUNC_4(VAR_2->list_audio, VAR_7);
        VAR_3->splice_list[VAR_8++].id = VAR_10->id;
    }



    VAR_3->fifos = FUNC_1(VAR_6 + 1, sizeof(hb_fifo_t*));




    if ( FUNC_5( VAR_3 ) )
    {
        return 1;
    }
    return 0;
}
