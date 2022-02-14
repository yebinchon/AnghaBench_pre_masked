
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_27__ {int w; int h; int time_base; int frame_count_out; int format; TYPE_1__* dst; } ;
struct TYPE_24__ {int num; int den; } ;
struct TYPE_26__ {int * linesize; int * data; TYPE_3__ sample_aspect_ratio; int pts; } ;
struct TYPE_25__ {int log2_chroma_w; int log2_chroma_h; int nb_components; } ;
struct TYPE_23__ {int x; int y; int w; int h; int band; int show; int * var_values; int h_pexpr; int w_pexpr; int y_pexpr; int x_pexpr; } ;
struct TYPE_22__ {TYPE_6__** outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ DelogoContext ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,TYPE_3__,int,int,int ,int ,int,int ,int) ;
 void* FUNC_5 (int ,int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__**) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_2__*,int ,char*) ;
 TYPE_4__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,TYPE_5__*) ;
 TYPE_5__* FUNC_13 (TYPE_6__*,int,int) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_4, AVFrame *VAR_5)
{
    DelogoContext *VAR_6 = VAR_4->dst->priv;
    AVFilterLink *VAR_7 = VAR_4->dst->outputs[0];
    const AVPixFmtDescriptor *VAR_8 = FUNC_10(VAR_4->format);
    AVFrame *VAR_9;
    int VAR_10 = VAR_8->log2_chroma_w;
    int VAR_11 = VAR_8->log2_chroma_h;
    int VAR_12 = 0;
    int VAR_13;
    AVRational VAR_14;
    int VAR_15;

    VAR_6->var_values[VAR_2] = VAR_4->frame_count_out;
    VAR_6->var_values[VAR_3] = FUNC_3(VAR_5->pts, VAR_4->time_base);
    VAR_6->x = FUNC_5(VAR_6->x_pexpr, VAR_6->var_values, VAR_6);
    VAR_6->y = FUNC_5(VAR_6->y_pexpr, VAR_6->var_values, VAR_6);
    VAR_6->w = FUNC_5(VAR_6->w_pexpr, VAR_6->var_values, VAR_6);
    VAR_6->h = FUNC_5(VAR_6->h_pexpr, VAR_6->var_values, VAR_6);

    if (VAR_6->x + (VAR_6->band - 1) <= 0 || VAR_6->x + VAR_6->w - (VAR_6->band*2 - 2) > VAR_4->w ||
        VAR_6->y + (VAR_6->band - 1) <= 0 || VAR_6->y + VAR_6->h - (VAR_6->band*2 - 2) > VAR_4->h) {
        FUNC_9(VAR_6, VAR_0, "Logo area is outside of the frame,"
               " auto set the area inside of the frame\n");
    }

    if (VAR_6->x + (VAR_6->band - 1) <= 0)
        VAR_6->x = 1 + VAR_6->band;
    if (VAR_6->y + (VAR_6->band - 1) <= 0)
        VAR_6->y = 1 + VAR_6->band;
    if (VAR_6->x + VAR_6->w - (VAR_6->band*2 - 2) > VAR_4->w)
        VAR_6->w = VAR_4->w - VAR_6->x - (VAR_6->band*2 - 2);
    if (VAR_6->y + VAR_6->h - (VAR_6->band*2 - 2) > VAR_4->h)
        VAR_6->h = VAR_4->h - VAR_6->y - (VAR_6->band*2 - 2);

    VAR_15 = FUNC_11(VAR_4);
    if (VAR_15 < 0) {
        FUNC_7(&VAR_5);
        return VAR_15;
    }

    VAR_6->w += VAR_6->band*2;
    VAR_6->h += VAR_6->band*2;
    VAR_6->x -= VAR_6->band;
    VAR_6->y -= VAR_6->band;

    if (FUNC_8(VAR_5)) {
        VAR_12 = 1;
        VAR_9 = VAR_5;
    } else {
        VAR_9 = FUNC_13(VAR_7, VAR_7->w, VAR_7->h);
        if (!VAR_9) {
            FUNC_7(&VAR_5);
            return FUNC_0(VAR_1);
        }

        FUNC_6(VAR_9, VAR_5);
    }

    VAR_14 = VAR_5->sample_aspect_ratio;

    if (!VAR_14.num)
        VAR_14.num = VAR_14.den = 1;

    for (VAR_13 = 0; VAR_13 < VAR_8->nb_components; VAR_13++) {
        int VAR_16 = VAR_13 == 1 || VAR_13 == 2 ? VAR_10 : 0;
        int VAR_17 = VAR_13 == 1 || VAR_13 == 2 ? VAR_11 : 0;

        FUNC_4(VAR_9->data[VAR_13], VAR_9->linesize[VAR_13],
                     VAR_5 ->data[VAR_13], VAR_5 ->linesize[VAR_13],
                     FUNC_1(VAR_4->w, VAR_16),
                     FUNC_1(VAR_4->h, VAR_17),
                     VAR_14, VAR_6->x>>VAR_16, VAR_6->y>>VAR_17,


                     FUNC_1(VAR_6->w + (VAR_6->x & ((1<<VAR_16)-1)), VAR_16),
                     FUNC_1(VAR_6->h + (VAR_6->y & ((1<<VAR_17)-1)), VAR_17),
                     VAR_6->band>>FUNC_2(VAR_16, VAR_17),
                     VAR_6->show, VAR_12);
    }

    if (!VAR_12)
        FUNC_7(&VAR_5);

    return FUNC_12(VAR_7, VAR_9);
}
