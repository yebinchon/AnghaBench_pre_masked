
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_22__ {TYPE_1__* priv; TYPE_3__** outputs; TYPE_3__** inputs; } ;
struct TYPE_21__ {int time_base; } ;
struct TYPE_20__ {int pts; } ;
struct TYPE_19__ {int status; scalar_t__ first_pts; scalar_t__ preroll; scalar_t__ buffer; scalar_t__ cue; } ;
typedef TYPE_1__ CueContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int,int) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__**) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    CueContext *VAR_5 = VAR_2->priv;

    FUNC_1(VAR_4, VAR_3);

    if (FUNC_10(VAR_3)) {
        AVFrame *VAR_6 = FUNC_9(VAR_3, 0);
        int64_t VAR_7 = FUNC_5(VAR_6->pts, VAR_3->time_base, VAR_0);

        if (!VAR_5->status) {
            VAR_5->first_pts = VAR_7;
            VAR_5->status++;
        }
        if (VAR_5->status == 1) {
            if (VAR_7 - VAR_5->first_pts < VAR_5->preroll) {
                int VAR_8 = FUNC_8(VAR_3, &VAR_6);
                if (VAR_8 < 0)
                    return VAR_8;
                return FUNC_7(VAR_4, VAR_6);
            }
            VAR_5->first_pts = VAR_7;
            VAR_5->status++;
        }
        if (VAR_5->status == 2) {
            VAR_6 = FUNC_9(VAR_3, FUNC_10(VAR_3) - 1);
            VAR_7 = FUNC_5(VAR_6->pts, VAR_3->time_base, VAR_0);
            if (!(VAR_7 - VAR_5->first_pts < VAR_5->buffer && (FUNC_4() - VAR_5->cue) < 0))
                VAR_5->status++;
        }
        if (VAR_5->status == 3) {
            int64_t VAR_9;
            while ((VAR_9 = (FUNC_4() - VAR_5->cue)) < 0)
                FUNC_6(FUNC_3(-VAR_9 / 2, 100, 1000000));
            VAR_5->status++;
        }
        if (VAR_5->status == 4) {
            int VAR_10 = FUNC_8(VAR_3, &VAR_6);
            if (VAR_10 < 0)
                return VAR_10;
            return FUNC_7(VAR_4, VAR_6);
        }
    }

    FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_4, VAR_3);

    return VAR_1;
}
