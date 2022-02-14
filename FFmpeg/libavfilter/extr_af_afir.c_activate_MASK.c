
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef scalar_t__ int64_t ;
struct TYPE_25__ {int time_base; } ;
struct TYPE_24__ {TYPE_7__** inputs; TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_23__ {int time_base; } ;
struct TYPE_22__ {int eof_coeffs; int min_part_size; scalar_t__ response; TYPE_17__* video; int pts; scalar_t__ have_coeffs; } ;
struct TYPE_21__ {scalar_t__ pts; } ;
typedef TYPE_1__ AudioFIRContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_17__*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (TYPE_7__*,int*,scalar_t__*) ;
 int FUNC_9 (TYPE_7__*,int,int,int **) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(AVFilterContext *VAR_2)
{
    AudioFIRContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    int VAR_5, VAR_6, VAR_7, VAR_8;
    AVFrame *VAR_9 = ((void*)0);
    int64_t VAR_10;

    FUNC_1(VAR_2->outputs[0], VAR_2);
    if (VAR_3->response)
        FUNC_1(VAR_2->outputs[1], VAR_2);
    if (!VAR_3->eof_coeffs) {
        AVFrame *VAR_11 = ((void*)0);

        VAR_5 = FUNC_4(VAR_2->inputs[1], VAR_11);
        if (VAR_5 < 0)
            return VAR_5;

        if (FUNC_13(VAR_2->inputs[1]) == VAR_0)
            VAR_3->eof_coeffs = 1;

        if (!VAR_3->eof_coeffs) {
            if (FUNC_12(VAR_2->outputs[0]))
                FUNC_11(VAR_2->inputs[1]);
            else if (VAR_3->response && FUNC_12(VAR_2->outputs[1]))
                FUNC_11(VAR_2->inputs[1]);
            return 0;
        }
    }

    if (!VAR_3->have_coeffs && VAR_3->eof_coeffs) {
        VAR_5 = FUNC_5(VAR_2);
        if (VAR_5 < 0)
            return VAR_5;
    }

    VAR_7 = FUNC_10(VAR_2->inputs[0]);
    VAR_8 = FUNC_0(VAR_3->min_part_size, (VAR_7 / VAR_3->min_part_size) * VAR_3->min_part_size);
    VAR_5 = FUNC_9(VAR_2->inputs[0], VAR_8, VAR_8, &VAR_9);
    if (VAR_5 > 0)
        VAR_5 = FUNC_15(VAR_3, VAR_9, VAR_4);

    if (VAR_5 < 0)
        return VAR_5;

    if (VAR_3->response && VAR_3->have_coeffs) {
        int64_t VAR_12 = VAR_3->video->pts;
        int64_t VAR_13 = FUNC_3(VAR_3->pts, VAR_2->inputs[0]->time_base, VAR_2->outputs[1]->time_base);

        if (FUNC_12(VAR_2->outputs[1]) && VAR_12 < VAR_13) {
            VAR_3->video->pts = VAR_13;
            return FUNC_6(VAR_2->outputs[1], FUNC_2(VAR_3->video));
        }
    }

    if (FUNC_10(VAR_2->inputs[0]) >= VAR_3->min_part_size) {
        FUNC_7(VAR_2, 10);
        return 0;
    }

    if (FUNC_8(VAR_2->inputs[0], &VAR_6, &VAR_10)) {
        if (VAR_6 == VAR_0) {
            FUNC_14(VAR_2->outputs[0], VAR_6, VAR_10);
            if (VAR_3->response)
                FUNC_14(VAR_2->outputs[1], VAR_6, VAR_10);
            return 0;
        }
    }

    if (FUNC_12(VAR_2->outputs[0]) &&
        !FUNC_13(VAR_2->inputs[0])) {
        FUNC_11(VAR_2->inputs[0]);
        return 0;
    }

    if (VAR_3->response &&
        FUNC_12(VAR_2->outputs[1]) &&
        !FUNC_13(VAR_2->inputs[0])) {
        FUNC_11(VAR_2->inputs[0]);
        return 0;
    }

    return VAR_1;
}
