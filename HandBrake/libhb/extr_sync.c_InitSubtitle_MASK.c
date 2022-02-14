
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int list_work; TYPE_1__* job; TYPE_4__* streams; } ;
typedef TYPE_5__ sync_common_t ;
typedef void* int64_t ;
struct TYPE_21__ {TYPE_4__* stream; int fifo_out; int * fifo_in; TYPE_8__* subtitle; struct TYPE_21__* private_data; TYPE_5__* common; } ;
typedef TYPE_6__ hb_work_private_t ;
typedef TYPE_6__ hb_work_object_t ;
struct TYPE_17__ {scalar_t__ dest; } ;
struct TYPE_22__ {scalar_t__ format; scalar_t__ source; TYPE_2__ config; int fifo_out; int * fifo_raw; int fifo_in; } ;
typedef TYPE_8__ hb_subtitle_t ;
struct TYPE_23__ {int merge; int link; int list_current; } ;
struct TYPE_18__ {TYPE_9__ sanitizer; TYPE_8__* subtitle; } ;
struct TYPE_19__ {int last_scr_sequence; int * in_queue; int * delta_list; TYPE_3__ subtitle; int fifo_in; int fifo_out; void* last_duration; void* last_scr_pts; void* last_pts; void* next_pts; scalar_t__ first_pts; int type; int min_len; int max_len; void* scr_delay_queue; TYPE_5__* common; } ;
struct TYPE_16__ {int mux; int h; int list_audio; int list_subtitle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 () ;
 TYPE_8__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_9__*,int ,int) ;

__attribute__((used)) static int FUNC_10( sync_common_t * VAR_9, int VAR_10 )
{
    hb_work_object_t * VAR_11 = ((void*)0);
    hb_work_private_t * VAR_12;
    hb_subtitle_t * VAR_13;

    VAR_13 = FUNC_8(VAR_9->job->list_subtitle, VAR_10);
    if (VAR_13->fifo_raw == ((void*)0))
    {

        return 0;
    }
    VAR_12 = FUNC_0(1, sizeof(hb_work_private_t));
    if (VAR_12 == ((void*)0)) goto fail;

    VAR_12->common = VAR_9;
    VAR_12->stream =
        &VAR_9->streams[1 + FUNC_6(VAR_9->job->list_audio) + VAR_10];
    VAR_12->stream->common = VAR_9;
    VAR_12->stream->in_queue = FUNC_7();
    VAR_12->stream->scr_delay_queue = FUNC_7();
    VAR_12->stream->max_len = VAR_4;
    VAR_12->stream->min_len = VAR_5;
    if (VAR_12->stream->in_queue == ((void*)0)) goto fail;
    VAR_12->stream->delta_list = FUNC_7();
    if (VAR_12->stream->delta_list == ((void*)0)) goto fail;
    VAR_12->stream->type = VAR_6;
    VAR_12->stream->first_pts = VAR_0;
    VAR_12->stream->next_pts = (int64_t)VAR_0;
    VAR_12->stream->last_pts = (int64_t)VAR_0;
    VAR_12->stream->last_scr_pts = (int64_t)VAR_0;
    VAR_12->stream->last_scr_sequence = -1;
    VAR_12->stream->last_duration = (int64_t)VAR_0;
    VAR_12->stream->subtitle.subtitle = VAR_13;
    VAR_12->stream->fifo_out = VAR_13->fifo_out;
    VAR_12->stream->fifo_in = VAR_13->fifo_in;

    VAR_11 = FUNC_3(VAR_9->job->h, VAR_8);
    VAR_11->private_data = VAR_12;
    VAR_11->subtitle = VAR_13;
    VAR_11->fifo_in = VAR_13->fifo_raw;
    VAR_11->fifo_out = VAR_13->fifo_out;

    FUNC_9(&VAR_12->stream->subtitle.sanitizer, 0,
           sizeof(VAR_12->stream->subtitle.sanitizer));
    if (VAR_13->format == VAR_7 && VAR_13->config.dest == VAR_2 &&
        (VAR_9->job->mux & VAR_1))
    {

        VAR_12->stream->subtitle.sanitizer.merge = 1;
    }



    if (VAR_13->config.dest == VAR_2 &&
        VAR_13->source != VAR_3)
    {

        VAR_12->stream->subtitle.sanitizer.link = 1;
    }
    FUNC_2(&VAR_12->stream->subtitle.sanitizer.list_current);

    FUNC_4(VAR_9->list_work, VAR_11);

    return 0;

fail:
    if (VAR_12 != ((void*)0))
    {
        if (VAR_12->stream != ((void*)0))
        {
            FUNC_5(&VAR_12->stream->delta_list);
            FUNC_5(&VAR_12->stream->in_queue);
        }
    }
    FUNC_1(VAR_12);
    FUNC_1(VAR_11);

    return 1;
}
