
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_20__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_19__ {int frame_count_out; int time_base; int h; int w; int format; TYPE_4__* dst; } ;
struct TYPE_18__ {int interlaced_frame; int top_field_first; int pts; int linesize; scalar_t__ data; void* sample_aspect_ratio; int height; } ;
struct TYPE_17__ {int mode; int frame; int preout_time_base; int flags; TYPE_2__* next; int black_linesize; scalar_t__ black_data; TYPE_2__* cur; } ;
typedef TYPE_1__ TInterlaceContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__**) ;
 int FUNC_5 (int,int) ;
 void* FUNC_6 (void*,int ) ;
 void* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,int ,int const**,int ,int ,int ,int ,int,int,int,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_5->dst;
    AVFilterLink *VAR_8 = VAR_7->outputs[0];
    TInterlaceContext *VAR_9 = VAR_7->priv;
    AVFrame *VAR_10, *VAR_11, *VAR_12;
    int VAR_13, VAR_14, VAR_15;

    FUNC_4(&VAR_9->cur);
    VAR_9->cur = VAR_9->next;
    VAR_9->next = VAR_6;

    VAR_10 = VAR_9->cur;
    VAR_11 = VAR_9->next;

    if (!VAR_9->cur)
        return 0;

    switch (VAR_9->mode) {
    case 129:

    case 130:

        VAR_12 = FUNC_10(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        FUNC_3(VAR_12, VAR_10);
        VAR_12->height = VAR_8->h;
        VAR_12->interlaced_frame = 1;
        VAR_12->top_field_first = 1;
        VAR_12->sample_aspect_ratio = FUNC_6(VAR_10->sample_aspect_ratio, FUNC_5(2, 1));


        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_10->data, VAR_10->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_4, 1, VAR_9->mode == 129 ? VAR_5->frame_count_out & 1 ? VAR_2 : VAR_3 : VAR_3, VAR_9->flags);

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_11->data, VAR_11->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_4, 1, VAR_9->mode == 129 ? VAR_5->frame_count_out & 1 ? VAR_3 : VAR_2 : VAR_2, VAR_9->flags);
        if (VAR_9->mode != 129)
            FUNC_4(&VAR_9->next);
        break;

    case 134:
    case 135:
        VAR_12 = FUNC_2(VAR_9->mode == 135 ? VAR_10 : VAR_11);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        FUNC_4(&VAR_9->next);
        break;

    case 128:

        VAR_12 = FUNC_10(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        FUNC_3(VAR_12, VAR_10);
        VAR_12->height = VAR_8->h;
        VAR_12->sample_aspect_ratio = FUNC_6(VAR_10->sample_aspect_ratio, FUNC_5(2, 1));

        VAR_13 = (1 + VAR_9->frame) & 1 ? VAR_3 : VAR_2;

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_10->data, VAR_10->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_4, 1, VAR_13, VAR_9->flags);

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_9->black_data, VAR_9->black_linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_4, 1, !VAR_13, VAR_9->flags);
        break;



    case 131:
    case 132:
        VAR_14 = VAR_9->mode == 131;
        VAR_12 = FUNC_10(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        FUNC_3(VAR_12, VAR_10);
        VAR_12->interlaced_frame = 1;
        VAR_12->top_field_first = VAR_14;


        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_10->data, VAR_10->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_14 ? VAR_3 : VAR_2, 1, VAR_14 ? VAR_3 : VAR_2,
                           VAR_9->flags);

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_11->data, VAR_11->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_14 ? VAR_2 : VAR_3, 1, VAR_14 ? VAR_2 : VAR_3,
                           VAR_9->flags);
        FUNC_4(&VAR_9->next);
        break;
    case 133:

        VAR_12 = FUNC_2(VAR_10);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        VAR_12->interlaced_frame = 1;
        if (VAR_10->pts != VAR_0)
            VAR_12->pts = VAR_10->pts*2;

        VAR_12->pts = FUNC_7(VAR_12->pts, VAR_9->preout_time_base, VAR_8->time_base);
        if ((VAR_15 = FUNC_9(VAR_8, VAR_12)) < 0)
            return VAR_15;


        VAR_14 = VAR_11->top_field_first;
        VAR_12 = FUNC_10(VAR_8, VAR_8->w, VAR_8->h);
        if (!VAR_12)
            return FUNC_0(VAR_1);
        FUNC_3(VAR_12, VAR_11);
        VAR_12->interlaced_frame = 1;
        VAR_12->top_field_first = !VAR_14;

        if (VAR_11->pts != VAR_0 && VAR_10->pts != VAR_0)
            VAR_12->pts = VAR_10->pts + VAR_11->pts;
        else
            VAR_12->pts = VAR_0;

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_10->data, VAR_10->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_14 ? VAR_2 : VAR_3, 1, VAR_14 ? VAR_2 : VAR_3,
                           VAR_9->flags);

        FUNC_8(VAR_9, VAR_12->data, VAR_12->linesize,
                           (const uint8_t **)VAR_11->data, VAR_11->linesize,
                           VAR_5->format, VAR_5->w, VAR_5->h,
                           VAR_14 ? VAR_3 : VAR_2, 1, VAR_14 ? VAR_3 : VAR_2,
                           VAR_9->flags);
        break;
    default:
        FUNC_1(0);
    }

    VAR_12->pts = FUNC_7(VAR_12->pts, VAR_9->preout_time_base, VAR_8->time_base);
    VAR_15 = FUNC_9(VAR_8, VAR_12);
    VAR_9->frame++;

    return VAR_15;
}
