
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_26__ {int list_work; TYPE_7__* streams; TYPE_1__* job; } ;
typedef TYPE_8__ sync_common_t ;
typedef void* int64_t ;
struct TYPE_27__ {TYPE_7__* stream; int fifo_out; TYPE_8__* common; int * fifo_in; TYPE_11__* audio; struct TYPE_27__* private_data; } ;
typedef TYPE_9__ hb_work_private_t ;
typedef TYPE_9__ hb_work_object_t ;
struct TYPE_22__ {int codec; scalar_t__ samplerate; int gain; int normalize_mix_level; int mixdown; } ;
struct TYPE_21__ {scalar_t__ samplerate; } ;
struct TYPE_23__ {TYPE_4__ out; TYPE_3__ in; } ;
struct TYPE_20__ {int fifo_sync; int fifo_out; int * fifo_raw; } ;
struct TYPE_18__ {TYPE_5__ config; int id; TYPE_2__ priv; } ;
typedef TYPE_11__ hb_audio_t ;
struct TYPE_24__ {int * resample; int gain_factor; TYPE_11__* audio; } ;
struct TYPE_25__ {int last_scr_sequence; int * in_queue; int * delta_list; TYPE_6__ audio; int fifo_out; void* last_duration; void* last_scr_pts; void* last_pts; void* next_pts; scalar_t__ first_pts; int type; int min_len; int max_len; void* scr_delay_queue; TYPE_8__* common; } ;
struct TYPE_19__ {int h; int list_audio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_9__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 TYPE_9__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_9__*) ;
 int FUNC_9 (int **) ;
 void* FUNC_10 () ;
 TYPE_11__* FUNC_11 (int ,int) ;
 int FUNC_12 (int,int) ;

__attribute__((used)) static int FUNC_13( sync_common_t * VAR_7, int VAR_8 )
{
    hb_work_object_t * VAR_9 = ((void*)0);
    hb_work_private_t * VAR_10;
    hb_audio_t * VAR_11;

    VAR_11 = FUNC_11(VAR_7->job->list_audio, VAR_8);
    if (VAR_11->priv.fifo_raw == ((void*)0))
    {

        return 0;
    }
    VAR_10 = FUNC_0(1, sizeof(hb_work_private_t));
    if (VAR_10 == ((void*)0)) goto fail;

    VAR_9 = FUNC_7(VAR_7->job->h, VAR_6);
    VAR_9->private_data = VAR_10;
    VAR_9->audio = VAR_11;
    VAR_9->fifo_in = VAR_11->priv.fifo_raw;
    if (VAR_11->config.out.codec & VAR_2)
    {
        VAR_9->fifo_out = VAR_11->priv.fifo_out;
    }
    else
    {
        VAR_9->fifo_out = VAR_11->priv.fifo_sync;
    }

    VAR_10->common = VAR_7;
    VAR_10->stream = &VAR_7->streams[1 + VAR_8];
    VAR_10->stream->common = VAR_7;
    VAR_10->stream->in_queue = FUNC_10();
    VAR_10->stream->scr_delay_queue = FUNC_10();
    VAR_10->stream->max_len = VAR_3;
    VAR_10->stream->min_len = VAR_4;
    if (VAR_10->stream->in_queue == ((void*)0)) goto fail;
    VAR_10->stream->delta_list = FUNC_10();
    if (VAR_10->stream->delta_list == ((void*)0)) goto fail;
    VAR_10->stream->type = VAR_5;
    VAR_10->stream->first_pts = VAR_0;
    VAR_10->stream->next_pts = (int64_t)VAR_0;
    VAR_10->stream->last_pts = (int64_t)VAR_0;
    VAR_10->stream->last_scr_pts = (int64_t)VAR_0;
    VAR_10->stream->last_scr_sequence = -1;
    VAR_10->stream->last_duration = (int64_t)VAR_0;
    VAR_10->stream->audio.audio = VAR_11;
    VAR_10->stream->fifo_out = VAR_9->fifo_out;

    if (!(VAR_11->config.out.codec & VAR_2) &&
        VAR_11->config.in.samplerate != VAR_11->config.out.samplerate)
    {

        VAR_10->stream->audio.resample =
            FUNC_3(VAR_1,
                                   VAR_11->config.out.samplerate,
                                   VAR_11->config.out.mixdown,
                                   VAR_11->config.out.normalize_mix_level);
        if (VAR_10->stream->audio.resample == ((void*)0))
        {
            FUNC_6("sync: audio 0x%x resample init failed", VAR_11->id);
            goto fail;
        }
        FUNC_4(VAR_10->stream->audio.resample,
                                          VAR_11->config.in.samplerate);
        if (FUNC_5(VAR_10->stream->audio.resample))
        {
            FUNC_6("sync: audio 0x%x resample update failed", VAR_11->id);
            goto fail;
        }
    }

    VAR_10->stream->audio.gain_factor = FUNC_12(10, VAR_11->config.out.gain / 20);

    FUNC_8(VAR_7->list_work, VAR_9);

    return 0;

fail:
    if (VAR_10 != ((void*)0))
    {
        if (VAR_10->stream != ((void*)0))
        {
            if (VAR_10->stream->audio.resample)
            {
                FUNC_2(VAR_10->stream->audio.resample);
            }
            FUNC_9(&VAR_10->stream->delta_list);
            FUNC_9(&VAR_10->stream->in_queue);
        }
    }
    FUNC_1(VAR_10);
    FUNC_1(VAR_9);

    return 1;
}
