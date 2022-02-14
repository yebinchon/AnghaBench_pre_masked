
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct representation {scalar_t__ cur_timestamp; scalar_t__ is_restart_needed; int input; int parent; scalar_t__ init_sec_buf_read_offset; scalar_t__ cur_seg_offset; int stream_index; TYPE_10__* ctx; } ;
typedef scalar_t__ int64_t ;
struct TYPE_17__ {TYPE_3__* priv_data; } ;
struct TYPE_16__ {int stream_index; int pts; } ;
struct TYPE_15__ {int n_videos; int n_audios; int n_subtitles; int interrupt_callback; struct representation** subtitles; struct representation** audios; struct representation** videos; } ;
struct TYPE_13__ {int den; scalar_t__ num; } ;
struct TYPE_14__ {TYPE_1__ time_base; } ;
struct TYPE_12__ {TYPE_2__** streams; } ;
typedef TYPE_3__ DASHContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_10__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*,struct representation**,int) ;
 int FUNC_5 (TYPE_5__*,struct representation*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    DASHContext *VAR_4 = VAR_2->priv_data;
    int VAR_5 = 0, VAR_6;
    int64_t VAR_7 = 0;
    struct representation *VAR_8 = ((void*)0);
    struct representation *VAR_9 = ((void*)0);

    FUNC_4(VAR_2, VAR_4->videos, VAR_4->n_videos);
    FUNC_4(VAR_2, VAR_4->audios, VAR_4->n_audios);
    FUNC_4(VAR_2, VAR_4->subtitles, VAR_4->n_subtitles);

    for (VAR_6 = 0; VAR_6 < VAR_4->n_videos; VAR_6++) {
        VAR_9 = VAR_4->videos[VAR_6];
        if (!VAR_9->ctx)
            continue;
        if (!VAR_8 || VAR_9->cur_timestamp < VAR_7) {
            VAR_8 = VAR_9;
            VAR_7 = VAR_9->cur_timestamp;
        }
    }
    for (VAR_6 = 0; VAR_6 < VAR_4->n_audios; VAR_6++) {
        VAR_9 = VAR_4->audios[VAR_6];
        if (!VAR_9->ctx)
            continue;
        if (!VAR_8 || VAR_9->cur_timestamp < VAR_7) {
            VAR_8 = VAR_9;
            VAR_7 = VAR_9->cur_timestamp;
        }
    }

    for (VAR_6 = 0; VAR_6 < VAR_4->n_subtitles; VAR_6++) {
        VAR_9 = VAR_4->subtitles[VAR_6];
        if (!VAR_9->ctx)
            continue;
        if (!VAR_8 || VAR_9->cur_timestamp < VAR_7) {
            VAR_8 = VAR_9;
            VAR_7 = VAR_9->cur_timestamp;
        }
    }

    if (!VAR_8) {
        return VAR_1;
    }
    while (!FUNC_2(VAR_4->interrupt_callback) && !VAR_5) {
        VAR_5 = FUNC_0(VAR_8->ctx, VAR_3);
        if (VAR_5 >= 0) {

            VAR_8->cur_timestamp = FUNC_1(VAR_3->pts, (int64_t)VAR_8->ctx->streams[0]->time_base.num * 90000, VAR_8->ctx->streams[0]->time_base.den);
            VAR_3->stream_index = VAR_8->stream_index;
            return 0;
        }
        if (VAR_8->is_restart_needed) {
            VAR_8->cur_seg_offset = 0;
            VAR_8->init_sec_buf_read_offset = 0;
            FUNC_3(VAR_8->parent, &VAR_8->input);
            VAR_5 = FUNC_5(VAR_2, VAR_8);
            VAR_8->is_restart_needed = 0;
        }
    }
    return VAR_0;
}
