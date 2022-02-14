
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;


typedef scalar_t__ int64_t ;
struct TYPE_29__ {TYPE_1__* priv; TYPE_3__** outputs; TYPE_3__** inputs; } ;
struct TYPE_25__ {scalar_t__ num; } ;
struct TYPE_28__ {int time_base; TYPE_14__ frame_rate; } ;
struct TYPE_27__ {scalar_t__ pts; } ;
struct TYPE_26__ {scalar_t__ n; scalar_t__ reference_n; scalar_t__ duration; int frozen; TYPE_2__* reference_frame; } ;
typedef TYPE_1__ FreezeDetectContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (TYPE_14__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__**) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_13(AVFilterContext *VAR_4)
{
    int VAR_5;
    AVFilterLink *VAR_6 = VAR_4->inputs[0];
    AVFilterLink *VAR_7 = VAR_4->outputs[0];
    FreezeDetectContext *VAR_8 = VAR_4->priv;
    AVFrame *VAR_9;

    FUNC_2(VAR_7, VAR_6);

    VAR_5 = FUNC_10(VAR_6, &VAR_9);
    if (VAR_5 < 0)
        return VAR_5;

    if (VAR_9) {
        int VAR_10 = 0;
        VAR_8->n++;

        if (VAR_8->reference_frame) {
            int64_t VAR_11;
            if (VAR_8->reference_frame->pts == VAR_0 || VAR_9->pts == VAR_0 || VAR_9->pts < VAR_8->reference_frame->pts)
                VAR_11 = VAR_6->frame_rate.num > 0 ? FUNC_7(VAR_8->n - VAR_8->reference_n, FUNC_6(VAR_6->frame_rate), VAR_1) : 0;
            else
                VAR_11 = FUNC_7(VAR_9->pts - VAR_8->reference_frame->pts, VAR_6->time_base, VAR_1);

            VAR_10 = FUNC_11(VAR_8, VAR_8->reference_frame, VAR_9);
            if (VAR_11 >= VAR_8->duration) {
                if (!VAR_8->frozen)
                    FUNC_12(VAR_8, VAR_9, "lavfi.freezedetect.freeze_start", FUNC_8(VAR_8->reference_frame->pts, &VAR_6->time_base));
                if (!VAR_10) {
                    FUNC_12(VAR_8, VAR_9, "lavfi.freezedetect.freeze_duration", FUNC_8(VAR_11, &VAR_1));
                    FUNC_12(VAR_8, VAR_9, "lavfi.freezedetect.freeze_end", FUNC_8(VAR_9->pts, &VAR_6->time_base));
                }
                VAR_8->frozen = VAR_10;
            }
        }

        if (!VAR_10) {
            FUNC_5(&VAR_8->reference_frame);
            VAR_8->reference_frame = FUNC_4(VAR_9);
            VAR_8->reference_n = VAR_8->n;
            if (!VAR_8->reference_frame) {
                FUNC_5(&VAR_9);
                return FUNC_0(VAR_2);
            }
        }
        return FUNC_9(VAR_7, VAR_9);
    }

    FUNC_1(VAR_6, VAR_7);
    FUNC_3(VAR_7, VAR_6);

    return VAR_3;
}
