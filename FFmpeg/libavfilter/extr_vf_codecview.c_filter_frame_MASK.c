
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_19__ {TYPE_5__** outputs; TYPE_1__* priv; } ;
struct TYPE_18__ {TYPE_6__* dst; } ;
struct TYPE_17__ {int** data; int* linesize; scalar_t__ pict_type; int height; int width; } ;
struct TYPE_16__ {int size; scalar_t__ data; } ;
struct TYPE_15__ {scalar_t__ source; int src_y; int src_x; int dst_y; int dst_x; } ;
struct TYPE_14__ {int mv; int mv_type; int frame_type; int vsub; int hsub; scalar_t__ qp; } ;
typedef TYPE_1__ CodecViewContext ;
typedef TYPE_2__ AVMotionVector ;
typedef TYPE_3__ AVFrameSideData ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_1 (TYPE_4__*,int*,int*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int*,int ,int ,int ,int ,int ,int ,int,int,int ,int const) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_12, AVFrame *VAR_13)
{
    AVFilterContext *VAR_14 = VAR_12->dst;
    CodecViewContext *VAR_15 = VAR_14->priv;
    AVFilterLink *VAR_16 = VAR_14->outputs[0];

    if (VAR_15->qp) {
        int VAR_17, VAR_18;
        int8_t *VAR_19 = FUNC_1(VAR_13, &VAR_17, &VAR_18);

        if (VAR_19) {
            int VAR_20, VAR_21;
            const int VAR_22 = FUNC_0(VAR_13->width, VAR_15->hsub);
            const int VAR_23 = FUNC_0(VAR_13->height, VAR_15->vsub);
            uint8_t *VAR_24 = VAR_13->data[1];
            uint8_t *VAR_25 = VAR_13->data[2];
            const int VAR_26 = VAR_13->linesize[1];
            const int VAR_27 = VAR_13->linesize[2];

            for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
                for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
                    const int VAR_28 = FUNC_5(VAR_19[(VAR_21 >> 3) * VAR_17 + (VAR_20 >> 3)], VAR_18) * 128/31;
                    VAR_24[VAR_20] = VAR_25[VAR_20] = VAR_28;
                }
                VAR_24 += VAR_26;
                VAR_25 += VAR_27;
            }
        }
    }

    if (VAR_15->mv || VAR_15->mv_type) {
        AVFrameSideData *VAR_29 = FUNC_2(VAR_13, VAR_0);
        if (VAR_29) {
            int VAR_30;
            const AVMotionVector *VAR_31 = (const AVMotionVector *)VAR_29->data;
            const int VAR_32 = (VAR_15->frame_type & VAR_5) && VAR_13->pict_type == VAR_2;
            const int VAR_33 = (VAR_15->frame_type & VAR_6) && VAR_13->pict_type == VAR_3;
            const int VAR_34 = (VAR_15->frame_type & VAR_4) && VAR_13->pict_type == VAR_1;

            for (VAR_30 = 0; VAR_30 < VAR_29->size / sizeof(*VAR_31); VAR_30++) {
                const AVMotionVector *VAR_35 = &VAR_31[VAR_30];
                const int VAR_36 = VAR_35->source > 0;

                if (VAR_15->mv_type) {
                    const int VAR_37 = VAR_36 == 0 && (VAR_15->mv_type & VAR_11);
                    const int VAR_38 = VAR_36 == 1 && (VAR_15->mv_type & VAR_10);

                    if ((!VAR_15->frame_type && (VAR_37 || VAR_38)) ||
                        VAR_32 && VAR_37 || VAR_32 && VAR_38 ||
                        VAR_33 && VAR_37 ||
                        VAR_34 && VAR_37 || VAR_34 && VAR_38)
                        FUNC_3(VAR_13->data[0], VAR_35->dst_x, VAR_35->dst_y, VAR_35->src_x, VAR_35->src_y,
                                   VAR_13->width, VAR_13->height, VAR_13->linesize[0],
                                   100, 0, VAR_36);
                } else if (VAR_15->mv)
                    if ((VAR_36 == 0 && (VAR_15->mv & VAR_9) && VAR_13->pict_type == VAR_3) ||
                        (VAR_36 == 0 && (VAR_15->mv & VAR_8) && VAR_13->pict_type == VAR_1) ||
                        (VAR_36 == 1 && (VAR_15->mv & VAR_7) && VAR_13->pict_type == VAR_1))
                        FUNC_3(VAR_13->data[0], VAR_35->dst_x, VAR_35->dst_y, VAR_35->src_x, VAR_35->src_y,
                                   VAR_13->width, VAR_13->height, VAR_13->linesize[0],
                                   100, 0, VAR_36);
            }
        }
    }

    return FUNC_4(VAR_16, VAR_13);
}
