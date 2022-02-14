
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int int32_t ;
struct TYPE_23__ {TYPE_4__** outputs; TYPE_1__* priv; } ;
struct TYPE_22__ {int h; int w; } ;
struct TYPE_21__ {int top_field_first; int * linesize; int * data; scalar_t__ interlaced_frame; } ;
struct TYPE_20__ {int* padded_width; int* padded_height; int* field; void* temp; void* input; int * lcount; int * dst_stride; int * dstp; scalar_t__* paddedp; int * padded_stride; } ;
struct TYPE_19__ {int field; int nb_planes; int* planeheight; int* linesize; int process_plane; int (* evalfunc_1 ) (TYPE_1__*,TYPE_2__*) ;int (* evalfunc_0 ) (TYPE_1__*,TYPE_2__*) ;int (* copy_pad ) (TYPE_3__*,TYPE_2__*,TYPE_1__*,int) ;TYPE_14__* dst; TYPE_2__ frame_data; TYPE_3__* src; } ;
struct TYPE_18__ {int * linesize; int * data; scalar_t__ interlaced_frame; } ;
typedef TYPE_1__ NNEDIContext ;
typedef TYPE_2__ FrameData ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int const,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_14__*,TYPE_3__*) ;
 int FUNC_4 (int ,int ,int ,int ,int,int) ;
 void* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (int ,int) ;
 TYPE_14__* FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int const,int const) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_13(AVFilterContext *VAR_1, int VAR_2)
{
    NNEDIContext *VAR_3 = VAR_1->priv;
    AVFilterLink *VAR_4 = VAR_1->outputs[0];
    AVFrame *VAR_5 = VAR_3->src;
    FrameData *VAR_6;
    int VAR_7 = VAR_3->field;
    size_t VAR_8;
    int VAR_9;
    int VAR_10;

    if (VAR_7 > 1)
        VAR_7 -= 2;
    else if (VAR_7 < 0)
        VAR_7 += 2;

    if (VAR_3->field < 0 && VAR_5->interlaced_frame && VAR_5->top_field_first == 0)
        VAR_7 = 0;
    else if (VAR_3->field < 0 && VAR_5->interlaced_frame && VAR_5->top_field_first == 1)
        VAR_7 = 1;
    else
        VAR_7 = !VAR_7;

    if (VAR_3->field > 1 || VAR_3->field == -2) {
        if (VAR_2) {
            VAR_9 = (VAR_7 == 0);
        } else {
            VAR_9 = (VAR_7 == 1);
        }
    } else {
        VAR_9 = VAR_7;
    }

    VAR_3->dst = FUNC_7(VAR_4, VAR_4->w, VAR_4->h);
    if (!VAR_3->dst)
        return FUNC_0(VAR_0);
    FUNC_3(VAR_3->dst, VAR_5);
    VAR_3->dst->interlaced_frame = 0;

    VAR_6 = &VAR_3->frame_data;

    for (VAR_10 = 0; VAR_10 < VAR_3->nb_planes; VAR_10++) {
        int VAR_11 = VAR_3->planeheight[VAR_10];
        int VAR_12 = VAR_3->linesize[VAR_10];

        const int VAR_13 = 16;
        const int VAR_14 = 10;

        if (!(VAR_3->process_plane & (1 << VAR_10))) {
            FUNC_4(VAR_3->dst->data[VAR_10], VAR_3->dst->linesize[VAR_10],
                                VAR_5->data[VAR_10], VAR_5->linesize[VAR_10],
                                VAR_3->linesize[VAR_10],
                                VAR_3->planeheight[VAR_10]);
            continue;
        }

        VAR_6->padded_width[VAR_10] = VAR_12 + 64;
        VAR_6->padded_height[VAR_10] = VAR_11 + 12;
        VAR_6->padded_stride[VAR_10] = FUNC_9(VAR_6->padded_width[VAR_10] + VAR_14, VAR_13);
        if (!VAR_6->paddedp[VAR_10]) {
            VAR_6->paddedp[VAR_10] = FUNC_6(VAR_6->padded_stride[VAR_10], VAR_6->padded_height[VAR_10]);
            if (!VAR_6->paddedp[VAR_10])
                return FUNC_0(VAR_0);
        }

        VAR_6->dstp[VAR_10] = VAR_3->dst->data[VAR_10];
        VAR_6->dst_stride[VAR_10] = VAR_3->dst->linesize[VAR_10];

        if (!VAR_6->lcount[VAR_10]) {
            VAR_6->lcount[VAR_10] = FUNC_2(VAR_11, sizeof(int32_t) * 16);
            if (!VAR_6->lcount[VAR_10])
                return FUNC_0(VAR_0);
        } else {
            FUNC_8(VAR_6->lcount[VAR_10], 0, VAR_11 * sizeof(int32_t) * 16);
        }

        VAR_6->field[VAR_10] = VAR_9;
    }

    if (!VAR_6->input) {
        VAR_6->input = FUNC_5(512 * sizeof(float));
        if (!VAR_6->input)
            return FUNC_0(VAR_0);
    }


    if (!VAR_6->temp) {
        VAR_8 = FUNC_1(VAR_6->padded_width[0], 512 * sizeof(float));
        VAR_6->temp = FUNC_5(VAR_8);
        if (!VAR_6->temp)
            return FUNC_0(VAR_0);
    }


    VAR_3->copy_pad(VAR_5, VAR_6, VAR_3, VAR_9);


    VAR_3->evalfunc_0(VAR_3, VAR_6);


    VAR_3->evalfunc_1(VAR_3, VAR_6);

    return 0;
}
