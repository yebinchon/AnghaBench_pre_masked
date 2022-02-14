
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct thread_data {double coeff; int h; int imin; int omin; int offset; int src_linesize; int dst_linesize; int * dstrow; int const* srcrow; } ;
struct TYPE_25__ {TYPE_1__* internal; TYPE_5__** outputs; TYPE_3__* priv; } ;
struct TYPE_24__ {int h; int w; TYPE_6__* dst; } ;
struct TYPE_23__ {int * linesize; int ** data; } ;
struct TYPE_22__ {int step; int bpp; int nb_comp; int linesize; int * rgba_map; TYPE_2__* range; } ;
struct TYPE_21__ {int in_min; int in_max; int out_min; int out_max; } ;
struct TYPE_20__ {int (* execute ) (TYPE_6__*,int ,struct thread_data*,int *,int) ;} ;
typedef TYPE_2__ Range ;
typedef TYPE_3__ ColorLevelsContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int const) ;
 int FUNC_2 (int,int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int const FUNC_7 (TYPE_6__*) ;
 TYPE_4__* FUNC_8 (TYPE_5__*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_6__*,int ,struct thread_data*,int *,int) ;
 int FUNC_11 (TYPE_6__*,int ,struct thread_data*,int *,int) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_5->dst;
    ColorLevelsContext *VAR_8 = VAR_7->priv;
    AVFilterLink *VAR_9 = VAR_7->outputs[0];
    const int VAR_10 = VAR_8->step;
    AVFrame *VAR_11;
    int VAR_12, VAR_13, VAR_14;

    if (FUNC_5(VAR_6)) {
        VAR_11 = VAR_6;
    } else {
        VAR_11 = FUNC_8(VAR_9, VAR_9->w, VAR_9->h);
        if (!VAR_11) {
            FUNC_4(&VAR_6);
            return FUNC_0(VAR_0);
        }
        FUNC_3(VAR_11, VAR_6);
    }

    switch (VAR_8->bpp) {
    case 1:
        for (VAR_14 = 0; VAR_14 < VAR_8->nb_comp; VAR_14++) {
            Range *VAR_15 = &VAR_8->range[VAR_14];
            const uint8_t VAR_16 = VAR_8->rgba_map[VAR_14];
            const uint8_t *VAR_17 = VAR_6->data[0];
            uint8_t *VAR_18 = VAR_11->data[0];
            int VAR_19 = FUNC_9(VAR_15->in_min * VAR_2);
            int VAR_20 = FUNC_9(VAR_15->in_max * VAR_2);
            int VAR_21 = FUNC_9(VAR_15->out_min * VAR_2);
            int VAR_22 = FUNC_9(VAR_15->out_max * VAR_2);
            double VAR_23;
            struct thread_data VAR_24;

            if (VAR_19 < 0) {
                VAR_19 = VAR_2;
                for (VAR_13 = 0; VAR_13 < VAR_5->h; VAR_13++) {
                    const uint8_t *VAR_25 = VAR_17;

                    for (VAR_12 = 0; VAR_12 < VAR_8->linesize; VAR_12 += VAR_10)
                        VAR_19 = FUNC_2(VAR_19, VAR_25[VAR_12 + VAR_16]);
                    VAR_17 += VAR_6->linesize[0];
                }
            }
            if (VAR_20 < 0) {
                VAR_17 = VAR_6->data[0];
                VAR_20 = 0;
                for (VAR_13 = 0; VAR_13 < VAR_5->h; VAR_13++) {
                    const uint8_t *VAR_26 = VAR_17;

                    for (VAR_12 = 0; VAR_12 < VAR_8->linesize; VAR_12 += VAR_10)
                        VAR_20 = FUNC_1(VAR_20, VAR_26[VAR_12 + VAR_16]);
                    VAR_17 += VAR_6->linesize[0];
                }
            }

            VAR_17 = VAR_6->data[0];
            VAR_23 = (VAR_22 - VAR_21) / (double)(VAR_20 - VAR_19);

            VAR_24.srcrow = VAR_17;
            VAR_24.dstrow = VAR_18;
            VAR_24.dst_linesize = VAR_11->linesize[0];
            VAR_24.src_linesize = VAR_6->linesize[0];
            VAR_24.coeff = VAR_23;
            VAR_24.offset = VAR_16;
            VAR_24.h = VAR_5->h;
            VAR_24.imin = VAR_19;
            VAR_24.omin = VAR_21;

            VAR_7->internal->execute(VAR_7, VAR_4, &VAR_24, ((void*)0),
                                   FUNC_2(VAR_5->h, FUNC_7(VAR_7)));
        }
        break;
    case 2:
        for (VAR_14 = 0; VAR_14 < VAR_8->nb_comp; VAR_14++) {
            Range *VAR_27 = &VAR_8->range[VAR_14];
            const uint8_t VAR_28 = VAR_8->rgba_map[VAR_14];
            const uint8_t *VAR_29 = VAR_6->data[0];
            uint8_t *VAR_30 = VAR_11->data[0];
            int VAR_31 = FUNC_9(VAR_27->in_min * VAR_1);
            int VAR_32 = FUNC_9(VAR_27->in_max * VAR_1);
            int VAR_33 = FUNC_9(VAR_27->out_min * VAR_1);
            int VAR_34 = FUNC_9(VAR_27->out_max * VAR_1);
            double VAR_35;
            struct thread_data VAR_36;

            if (VAR_31 < 0) {
                VAR_31 = VAR_1;
                for (VAR_13 = 0; VAR_13 < VAR_5->h; VAR_13++) {
                    const uint16_t *VAR_37 = (const uint16_t *)VAR_29;

                    for (VAR_12 = 0; VAR_12 < VAR_8->linesize; VAR_12 += VAR_10)
                        VAR_31 = FUNC_2(VAR_31, VAR_37[VAR_12 + VAR_28]);
                    VAR_29 += VAR_6->linesize[0];
                }
            }
            if (VAR_32 < 0) {
                VAR_29 = VAR_6->data[0];
                VAR_32 = 0;
                for (VAR_13 = 0; VAR_13 < VAR_5->h; VAR_13++) {
                    const uint16_t *VAR_38 = (const uint16_t *)VAR_29;

                    for (VAR_12 = 0; VAR_12 < VAR_8->linesize; VAR_12 += VAR_10)
                        VAR_32 = FUNC_1(VAR_32, VAR_38[VAR_12 + VAR_28]);
                    VAR_29 += VAR_6->linesize[0];
                }
            }

            VAR_29 = VAR_6->data[0];
            VAR_35 = (VAR_34 - VAR_33) / (double)(VAR_32 - VAR_31);

            VAR_36.srcrow = VAR_29;
            VAR_36.dstrow = VAR_30;
            VAR_36.dst_linesize = VAR_11->linesize[0];
            VAR_36.src_linesize = VAR_6->linesize[0];
            VAR_36.coeff = VAR_35;
            VAR_36.offset = VAR_28;
            VAR_36.h = VAR_5->h;
            VAR_36.imin = VAR_31;
            VAR_36.omin = VAR_33;

            VAR_7->internal->execute(VAR_7, VAR_3, &VAR_36, ((void*)0),
                                   FUNC_2(VAR_5->h, FUNC_7(VAR_7)));
        }
    }

    if (VAR_6 != VAR_11)
        FUNC_4(&VAR_6);
    return FUNC_6(VAR_9, VAR_11);
}
