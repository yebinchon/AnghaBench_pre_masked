
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint16_t ;
struct TYPE_33__ {int dcomp; int bits; int const* bg_color; int max; int ncomp; int pcomp; scalar_t__ display; int size; int filter; int (* graticulef ) (TYPE_6__*,TYPE_8__*) ;scalar_t__ mode; int waveform_slice; TYPE_4__* desc; TYPE_2__* odesc; } ;
typedef TYPE_6__ WaveformContext ;
struct TYPE_34__ {int component; int offset_y; int offset_x; TYPE_8__* out; TYPE_8__* in; } ;
typedef TYPE_7__ ThreadData ;
struct TYPE_36__ {int w; int h; TYPE_10__* dst; } ;
struct TYPE_35__ {int* linesize; scalar_t__* data; int color_range; int pts; } ;
struct TYPE_32__ {int (* execute ) (TYPE_10__*,int ,TYPE_7__*,int *,int ) ;} ;
struct TYPE_31__ {TYPE_3__* comp; } ;
struct TYPE_30__ {int plane; } ;
struct TYPE_29__ {TYPE_1__* comp; } ;
struct TYPE_28__ {size_t plane; } ;
struct TYPE_27__ {TYPE_5__* internal; TYPE_9__** outputs; TYPE_6__* priv; } ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVFilterLink ;
typedef TYPE_10__ AVFilterContext ;




 int VAR_0 ;
 int FUNC_0 (int ) ;


 int VAR_1 ;


 scalar_t__ VAR_2 ;


 int FUNC_1 (TYPE_8__**) ;
 int FUNC_2 (TYPE_6__*,TYPE_8__*,int const,int const,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_8__*,int const,int const,int) ;
 int FUNC_4 (TYPE_9__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_10__*) ;
 TYPE_8__* FUNC_6 (TYPE_9__*,int,int) ;
 int FUNC_7 (scalar_t__,int const,int) ;
 int FUNC_8 (TYPE_10__*,int ,TYPE_7__*,int *,int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    WaveformContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    AVFrame *VAR_8;
    int VAR_9, VAR_10, VAR_11;

    VAR_8 = FUNC_6(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_8) {
        FUNC_1(&VAR_4);
        return FUNC_0(VAR_1);
    }
    VAR_8->pts = VAR_4->pts;
    VAR_8->color_range = VAR_0;

    for (VAR_11 = 0; VAR_11 < VAR_6->dcomp; VAR_11++) {
        if (VAR_6->bits <= 8) {
            for (VAR_9 = 0; VAR_9 < VAR_7->h ; VAR_9++)
                FUNC_7(VAR_8->data[VAR_6->odesc->comp[VAR_11].plane] +
                       VAR_9 * VAR_8->linesize[VAR_6->odesc->comp[VAR_11].plane],
                       VAR_6->bg_color[VAR_11], VAR_7->w);
        } else {
            const int VAR_12 = VAR_6->max / 256;
            uint16_t *VAR_13 = (uint16_t *)VAR_8->data[VAR_6->odesc->comp[VAR_11].plane];

            for (VAR_9 = 0; VAR_9 < VAR_7->h ; VAR_9++) {
                for (VAR_10 = 0; VAR_10 < VAR_7->w; VAR_10++)
                    VAR_13[VAR_10] = VAR_6->bg_color[VAR_11] * VAR_12;
                VAR_13 += VAR_8->linesize[VAR_6->odesc->comp[VAR_11].plane] / 2;
            }
        }
    }

    for (VAR_11 = 0, VAR_9 = 0; VAR_11 < VAR_6->ncomp; VAR_11++) {
        if ((1 << VAR_11) & VAR_6->pcomp) {
            const int VAR_14 = VAR_6->desc->comp[VAR_11].plane;
            ThreadData VAR_15;
            int VAR_16;
            int VAR_17;

            if (VAR_6->display == VAR_2) {
                VAR_17 = VAR_6->mode ? VAR_9++ * VAR_3->w : 0;
                VAR_16 = VAR_6->mode ? 0 : VAR_9++ * VAR_3->h;
            } else {
                VAR_16 = VAR_6->mode ? VAR_9++ * VAR_6->size * !!VAR_6->display : 0;
                VAR_17 = VAR_6->mode ? 0 : VAR_9++ * VAR_6->size * !!VAR_6->display;
            }

            VAR_15.in = VAR_4;
            VAR_15.out = VAR_8;
            VAR_15.component = VAR_11;
            VAR_15.offset_y = VAR_16;
            VAR_15.offset_x = VAR_17;
            VAR_5->internal->execute(VAR_5, VAR_6->waveform_slice, &VAR_15, ((void*)0), FUNC_5(VAR_5));
            switch (VAR_6->filter) {
            case 135:
            case 133:
            case 132:
            case 130:
                if (VAR_6->bits <= 8)
                    FUNC_2(VAR_6, VAR_8, VAR_14, VAR_14, VAR_6->mode ? VAR_17 : VAR_16);
                else
                    FUNC_3(VAR_6, VAR_8, VAR_14, VAR_14, VAR_6->mode ? VAR_17 : VAR_16);
                break;
            case 131:
                if (VAR_6->bits <= 8) {
                    FUNC_2(VAR_6, VAR_8, VAR_14, VAR_14, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_2(VAR_6, VAR_8, VAR_14, (VAR_14 + 1) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                } else {
                    FUNC_3(VAR_6, VAR_8, VAR_14, VAR_14, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_3(VAR_6, VAR_8, VAR_14, (VAR_14 + 1) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                }
                break;
            case 134:
            case 129:
            case 128:
                if (VAR_6->bits <= 8) {
                    FUNC_2(VAR_6, VAR_8, VAR_14, (VAR_14 + 0) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_2(VAR_6, VAR_8, VAR_14, (VAR_14 + 1) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_2(VAR_6, VAR_8, VAR_14, (VAR_14 + 2) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                } else {
                    FUNC_3(VAR_6, VAR_8, VAR_14, (VAR_14 + 0) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_3(VAR_6, VAR_8, VAR_14, (VAR_14 + 1) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                    FUNC_3(VAR_6, VAR_8, VAR_14, (VAR_14 + 2) % VAR_6->ncomp, VAR_6->mode ? VAR_17 : VAR_16);
                }
                break;
            }
        }
    }
    VAR_6->graticulef(VAR_6, VAR_8);

    FUNC_1(&VAR_4);
    return FUNC_4(VAR_7, VAR_8);
}
