
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;


struct TYPE_25__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_32__ {scalar_t__ format; TYPE_20__* dst; int h; int w; TYPE_1__ sample_aspect_ratio; } ;
struct TYPE_29__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_31__ {int width; scalar_t__ height; scalar_t__ format; int* linesize; scalar_t__* data; TYPE_4__ sample_aspect_ratio; } ;
struct TYPE_24__ {int* hsub; int* vsub; int* pixelstep; } ;
struct TYPE_30__ {scalar_t__ eval_mode; int inlink_w; scalar_t__ inlink_h; scalar_t__ w; scalar_t__ h; int x; int y; scalar_t__ in_h; scalar_t__ in_w; int color; TYPE_16__ draw; } ;
struct TYPE_27__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_28__ {scalar_t__ format; int w; scalar_t__ h; TYPE_2__ sample_aspect_ratio; } ;
struct TYPE_26__ {TYPE_7__** outputs; TYPE_3__** inputs; TYPE_5__* priv; } ;
typedef TYPE_5__ PadContext ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__**) ;
 int FUNC_4 (TYPE_20__*,int ,char*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_16__*,scalar_t__*,int*,scalar_t__*,int*,scalar_t__,scalar_t__,int ,int ,int,scalar_t__) ;
 int FUNC_8 (TYPE_16__*,int *,scalar_t__*,int*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_7__*,TYPE_6__*) ;
 TYPE_6__* FUNC_10 (TYPE_7__*,int ,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    PadContext *VAR_5 = VAR_3->dst->priv;
    AVFilterLink *VAR_6 = VAR_3->dst->outputs[0];
    AVFrame *VAR_7;
    int VAR_8;
    if(VAR_5->eval_mode == VAR_2 && (
           VAR_4->width != VAR_5->inlink_w
        || VAR_4->height != VAR_5->inlink_h
        || VAR_4->format != VAR_6->format
        || VAR_4->sample_aspect_ratio.den != VAR_6->sample_aspect_ratio.den || VAR_4->sample_aspect_ratio.num != VAR_6->sample_aspect_ratio.num)) {
        int VAR_9;

        VAR_3->dst->inputs[0]->format = VAR_4->format;
        VAR_3->dst->inputs[0]->w = VAR_4->width;
        VAR_3->dst->inputs[0]->h = VAR_4->height;

        VAR_3->dst->inputs[0]->sample_aspect_ratio.den = VAR_4->sample_aspect_ratio.den;
        VAR_3->dst->inputs[0]->sample_aspect_ratio.num = VAR_4->sample_aspect_ratio.num;


        if ((VAR_9 = FUNC_5(VAR_3)) < 0) {
            VAR_5->inlink_w = -1;
            return VAR_9;
        }
        if ((VAR_9 = FUNC_6(VAR_6)) < 0) {
            VAR_5->inlink_w = -1;
            return VAR_9;
        }
    }

    VAR_8 = FUNC_11(VAR_5, VAR_4);

    if (VAR_8) {
        FUNC_4(VAR_3->dst, VAR_0, "Direct padding impossible allocating new frame\n");
        VAR_7 = FUNC_10(VAR_3->dst->outputs[0],
                                  FUNC_1(VAR_3->w, VAR_5->w),
                                  FUNC_1(VAR_3->h, VAR_5->h));
        if (!VAR_7) {
            FUNC_3(&VAR_4);
            return FUNC_0(VAR_1);
        }

        FUNC_2(VAR_7, VAR_4);
    } else {
        int VAR_10;

        VAR_7 = VAR_4;
        for (VAR_10 = 0; VAR_10 < 4 && VAR_7->data[VAR_10] && VAR_7->linesize[VAR_10]; VAR_10++) {
            int VAR_11 = VAR_5->draw.hsub[VAR_10];
            int VAR_12 = VAR_5->draw.vsub[VAR_10];
            VAR_7->data[VAR_10] -= (VAR_5->x >> VAR_11) * VAR_5->draw.pixelstep[VAR_10] +
                            (VAR_5->y >> VAR_12) * VAR_7->linesize[VAR_10];
        }
    }


    if (VAR_5->y) {
        FUNC_8(&VAR_5->draw, &VAR_5->color,
                          VAR_7->data, VAR_7->linesize,
                          0, 0, VAR_5->w, VAR_5->y);
    }


    if (VAR_5->h > VAR_5->y + VAR_5->in_h) {
        FUNC_8(&VAR_5->draw, &VAR_5->color,
                          VAR_7->data, VAR_7->linesize,
                          0, VAR_5->y + VAR_5->in_h, VAR_5->w, VAR_5->h - VAR_5->y - VAR_5->in_h);
    }


    FUNC_8(&VAR_5->draw, &VAR_5->color, VAR_7->data, VAR_7->linesize,
                      0, VAR_5->y, VAR_5->x, VAR_4->height);

    if (VAR_8) {
        FUNC_7(&VAR_5->draw,
                          VAR_7->data, VAR_7->linesize, VAR_4->data, VAR_4->linesize,
                          VAR_5->x, VAR_5->y, 0, 0, VAR_4->width, VAR_4->height);
    }


    FUNC_8(&VAR_5->draw, &VAR_5->color, VAR_7->data, VAR_7->linesize,
                      VAR_5->x + VAR_5->in_w, VAR_5->y, VAR_5->w - VAR_5->x - VAR_5->in_w,
                      VAR_4->height);

    VAR_7->width = VAR_5->w;
    VAR_7->height = VAR_5->h;

    if (VAR_4 != VAR_7)
        FUNC_3(&VAR_4);
    return FUNC_9(VAR_3->dst->outputs[0], VAR_7);
}
