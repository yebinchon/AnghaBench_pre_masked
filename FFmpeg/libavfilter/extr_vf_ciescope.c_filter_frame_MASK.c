
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_20__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_19__ {int w; int h; TYPE_5__* dst; } ;
struct TYPE_18__ {int* linesize; int height; int width; scalar_t__* data; int pts; } ;
struct TYPE_17__ {int intensity; int background; scalar_t__ cie; int gamuts; int color_system; scalar_t__ show_white; TYPE_1__* f; int (* filter ) (TYPE_5__*,TYPE_3__*,double*,double*,int,int) ;} ;
struct TYPE_16__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_2__ CiescopeContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_3__**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int*,int,int,int,scalar_t__,int ) ;
 int FUNC_8 (int*,int,int,int,int,int ,scalar_t__) ;
 int FUNC_9 (TYPE_5__*,TYPE_3__*,double*,double*,int,int) ;
 int FUNC_10 (double,double,double*,double*) ;
 int FUNC_11 (double,double,double*,double*) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_3->dst;
    CiescopeContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->outputs[0];
    int VAR_8 = VAR_6->intensity * 65535;
    int VAR_9 = VAR_7->w;
    int VAR_10 = VAR_7->h;
    AVFrame *VAR_11;
    int VAR_12, VAR_13, VAR_14;

    VAR_11 = FUNC_5(VAR_7, VAR_7->w, VAR_7->h);
    if (!VAR_11) {
        FUNC_2(&VAR_4);
        return FUNC_0(VAR_0);
    }
    VAR_11->pts = VAR_4->pts;

    if (!VAR_6->background) {
        VAR_12 = FUNC_3(VAR_5);
        if (VAR_12 < 0) {
            FUNC_2(&VAR_11);
            return VAR_12;
        }
        VAR_6->background = 1;
    }
    for (VAR_14 = 0; VAR_14 < VAR_7->h; VAR_14++) {
        FUNC_6(VAR_11->data[0] + VAR_14 * VAR_11->linesize[0], 0, VAR_7->w * 8);
    }

    for (VAR_14 = 0; VAR_14 < VAR_4->height; VAR_14++) {
        for (VAR_13 = 0; VAR_13 < VAR_4->width; VAR_13++) {
            double VAR_15, VAR_16;
            uint16_t *VAR_17;
            int VAR_18, VAR_19;

            VAR_6->filter(VAR_5, VAR_4, &VAR_15, &VAR_16, VAR_13, VAR_14);

            if (VAR_6->cie == VAR_1) {
                double VAR_20, VAR_21;
                FUNC_10(VAR_15, VAR_16, &VAR_20, &VAR_21);
                VAR_15 = VAR_20;
                VAR_16 = VAR_21;
            } else if (VAR_6->cie == VAR_2) {
                double VAR_22, VAR_23;
                FUNC_11(VAR_15, VAR_16, &VAR_22, &VAR_23);
                VAR_15 = VAR_22;
                VAR_16 = VAR_23;
            }

            VAR_18 = (VAR_9 - 1) * VAR_15;
            VAR_19 = (VAR_10 - 1) - ((VAR_10 - 1) * VAR_16);

            if (VAR_18 < 0 || VAR_18 >= VAR_9 ||
                VAR_19 < 0 || VAR_19 >= VAR_10)
                continue;

            VAR_17 = (uint16_t *)(VAR_11->data[0] + VAR_19 * VAR_11->linesize[0] + VAR_18 * 8 + 0);
            VAR_17[0] = FUNC_1(VAR_17[0] + VAR_8, 65535);
            VAR_17[1] = FUNC_1(VAR_17[1] + VAR_8, 65535);
            VAR_17[2] = FUNC_1(VAR_17[2] + VAR_8, 65535);
            VAR_17[3] = 65535;
        }
    }

    for (VAR_14 = 0; VAR_14 < VAR_7->h; VAR_14++) {
        uint16_t *VAR_24 = (uint16_t *)(VAR_11->data[0] + VAR_14 * VAR_11->linesize[0]);
        const uint16_t *VAR_25 = (const uint16_t *)(VAR_6->f->data[0] + VAR_14 * VAR_6->f->linesize[0]);
        for (VAR_13 = 0; VAR_13 < VAR_7->w; VAR_13++) {
            const int VAR_26 = VAR_13 * 4;
            if (VAR_24[VAR_26 + 3] == 0) {
                VAR_24[VAR_26 + 0] = VAR_25[VAR_26 + 0];
                VAR_24[VAR_26 + 1] = VAR_25[VAR_26 + 1];
                VAR_24[VAR_26 + 2] = VAR_25[VAR_26 + 2];
                VAR_24[VAR_26 + 3] = VAR_25[VAR_26 + 3];
            }
        }
    }

    if (VAR_6->show_white)
        FUNC_8((uint16_t *)VAR_11->data[0], VAR_11->linesize[0] / 2,
                         VAR_7->w, VAR_7->h, 65535,
                         VAR_6->color_system, VAR_6->cie);

    FUNC_7((uint16_t *)VAR_11->data[0], VAR_11->linesize[0] / 2,
                VAR_7->w, VAR_7->h,
                VAR_6->cie, VAR_6->gamuts);

    FUNC_2(&VAR_4);
    return FUNC_4(VAR_7, VAR_11);
}
