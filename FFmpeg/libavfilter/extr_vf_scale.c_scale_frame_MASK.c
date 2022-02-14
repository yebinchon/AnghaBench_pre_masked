
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_20__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
typedef int buf ;
struct TYPE_27__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_32__ {scalar_t__ format; int w; int h; TYPE_20__* dst; TYPE_3__ sample_aspect_ratio; } ;
struct TYPE_26__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_31__ {int width; int height; scalar_t__ format; int color_range; scalar_t__ interlaced_frame; TYPE_2__ sample_aspect_ratio; int colorspace; scalar_t__* data; } ;
struct TYPE_30__ {int log2_chroma_h; int log2_chroma_w; } ;
struct TYPE_29__ {scalar_t__ eval_mode; int in_range; int out_range; scalar_t__ interlaced; int nb_slices; scalar_t__ sws; scalar_t__* isws; scalar_t__ in_color_matrix; scalar_t__ out_color_matrix; scalar_t__ output_is_pal; int vsub; int hsub; } ;
struct TYPE_24__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_28__ {scalar_t__ format; int w; int h; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_25__ {TYPE_4__** inputs; TYPE_8__** outputs; TYPE_5__* priv; } ;
typedef TYPE_5__ ScaleContext ;
typedef TYPE_6__ AVPixFmtDescriptor ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVFilterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_7__**) ;
 int FUNC_4 (TYPE_20__*,int ,char*) ;
 int FUNC_5 (TYPE_5__*,char*,char*,int ) ;
 TYPE_6__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int,int,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (TYPE_8__*) ;
 TYPE_7__* FUNC_10 (TYPE_8__*,int,int) ;
 int* FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (TYPE_8__*,TYPE_7__*,TYPE_7__*,scalar_t__,int,int,int,int) ;
 int FUNC_13 (char*,int,char*,int) ;
 int FUNC_14 (scalar_t__,int**,int*,int**,int*,int*,int*,int*) ;
 int FUNC_15 (scalar_t__,int const*,int,int const*,int,int,int,int) ;

__attribute__((used)) static int FUNC_16(AVFilterLink *VAR_11, AVFrame *VAR_12, AVFrame **VAR_13)
{
    ScaleContext *VAR_14 = VAR_11->dst->priv;
    AVFilterLink *VAR_15 = VAR_11->dst->outputs[0];
    AVFrame *VAR_16;
    const AVPixFmtDescriptor *VAR_17 = FUNC_6(VAR_11->format);
    char VAR_18[32];
    int VAR_19;

    *VAR_13 = ((void*)0);
    if (VAR_12->colorspace == VAR_4)
        FUNC_4(VAR_11->dst, VAR_5, "Detected unsupported YCgCo colorspace.\n");

    if ( VAR_12->width != VAR_11->w
       || VAR_12->height != VAR_11->h
       || VAR_12->format != VAR_11->format
       || VAR_12->sample_aspect_ratio.den != VAR_11->sample_aspect_ratio.den || VAR_12->sample_aspect_ratio.num != VAR_11->sample_aspect_ratio.num) {
        int VAR_20;

        if (VAR_14->eval_mode == VAR_9) {
            FUNC_13(VAR_18, sizeof(VAR_18)-1, "%d", VAR_15->w);
            FUNC_5(VAR_14, "w", VAR_18, 0);
            FUNC_13(VAR_18, sizeof(VAR_18)-1, "%d", VAR_15->h);
            FUNC_5(VAR_14, "h", VAR_18, 0);
        }

        VAR_11->dst->inputs[0]->format = VAR_12->format;
        VAR_11->dst->inputs[0]->w = VAR_12->width;
        VAR_11->dst->inputs[0]->h = VAR_12->height;

        VAR_11->dst->inputs[0]->sample_aspect_ratio.den = VAR_12->sample_aspect_ratio.den;
        VAR_11->dst->inputs[0]->sample_aspect_ratio.num = VAR_12->sample_aspect_ratio.num;

        if ((VAR_20 = FUNC_9(VAR_15)) < 0)
            return VAR_20;
    }

    if (!VAR_14->sws) {
        *VAR_13 = VAR_12;
        return 0;
    }

    VAR_14->hsub = VAR_17->log2_chroma_w;
    VAR_14->vsub = VAR_17->log2_chroma_h;

    VAR_16 = FUNC_10(VAR_15, VAR_15->w, VAR_15->h);
    if (!VAR_16) {
        FUNC_3(&VAR_12);
        return FUNC_0(VAR_8);
    }
    *VAR_13 = VAR_16;

    FUNC_2(VAR_16, VAR_12);
    VAR_16->width = VAR_15->w;
    VAR_16->height = VAR_15->h;

    if (VAR_14->output_is_pal)
        FUNC_8((uint32_t*)VAR_16->data[1], VAR_15->format == VAR_7 ? VAR_6 : VAR_15->format);

    VAR_19 = VAR_12->color_range;

    if ( VAR_14->in_color_matrix
        || VAR_14->out_color_matrix
        || VAR_14-> in_range != VAR_2
        || VAR_19 != VAR_2
        || VAR_14->out_range != VAR_2) {
        int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
        const int *VAR_26, *VAR_27;

        FUNC_14(VAR_14->sws, (int **)&VAR_26, &VAR_21,
                                 (int **)&VAR_27, &VAR_22,
                                 &VAR_23, &VAR_24, &VAR_25);

        if (VAR_14->in_color_matrix)
            VAR_26 = FUNC_11(VAR_14->in_color_matrix, VAR_12->colorspace);
        if (VAR_14->out_color_matrix)
            VAR_27 = FUNC_11(VAR_14->out_color_matrix, VAR_3);
        else if (VAR_14->in_color_matrix)
            VAR_27 = VAR_26;

        if (VAR_14-> in_range != VAR_2)
            VAR_21 = (VAR_14-> in_range == VAR_0);
        else if (VAR_19 != VAR_2)
            VAR_21 = (VAR_19 == VAR_0);
        if (VAR_14->out_range != VAR_2)
            VAR_22 = (VAR_14->out_range == VAR_0);

        FUNC_15(VAR_14->sws, VAR_26, VAR_21,
                                 VAR_27, VAR_22,
                                 VAR_23, VAR_24, VAR_25);
        if (VAR_14->isws[0])
            FUNC_15(VAR_14->isws[0], VAR_26, VAR_21,
                                     VAR_27, VAR_22,
                                     VAR_23, VAR_24, VAR_25);
        if (VAR_14->isws[1])
            FUNC_15(VAR_14->isws[1], VAR_26, VAR_21,
                                     VAR_27, VAR_22,
                                     VAR_23, VAR_24, VAR_25);

        VAR_16->color_range = VAR_22 ? VAR_0 : VAR_1;
    }

    FUNC_7(&VAR_16->sample_aspect_ratio.num, &VAR_16->sample_aspect_ratio.den,
              (int64_t)VAR_12->sample_aspect_ratio.num * VAR_15->h * VAR_11->w,
              (int64_t)VAR_12->sample_aspect_ratio.den * VAR_15->w * VAR_11->h,
              VAR_10);

    if (VAR_14->interlaced>0 || (VAR_14->interlaced<0 && VAR_12->interlaced_frame)) {
        FUNC_12(VAR_11, VAR_16, VAR_12, VAR_14->isws[0], 0, (VAR_11->h+1)/2, 2, 0);
        FUNC_12(VAR_11, VAR_16, VAR_12, VAR_14->isws[1], 0, VAR_11->h /2, 2, 1);
    } else if (VAR_14->nb_slices) {
        int VAR_28, VAR_29, VAR_30, VAR_31 = 0;
        const int VAR_32 = FUNC_1(VAR_14->nb_slices, VAR_11->h);
        for (VAR_28 = 0; VAR_28 < VAR_32; VAR_28++) {
            VAR_30 = VAR_31;
            VAR_31 = (VAR_11->h * (VAR_28+1)) / VAR_32;
            VAR_29 = VAR_31 - VAR_30;
            FUNC_12(VAR_11, VAR_16, VAR_12, VAR_14->sws, VAR_30, VAR_29, 1, 0);
        }
    } else {
        FUNC_12(VAR_11, VAR_16, VAR_12, VAR_14->sws, 0, VAR_11->h, 1, 0);
    }

    FUNC_3(&VAR_12);
    return 0;
}
