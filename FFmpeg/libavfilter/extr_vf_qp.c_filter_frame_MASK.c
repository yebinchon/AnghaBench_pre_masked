
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t int8_t ;
struct TYPE_14__ {int* data; } ;
struct TYPE_13__ {scalar_t__ is_disabled; TYPE_1__* priv; TYPE_2__** outputs; } ;
struct TYPE_12__ {TYPE_3__* dst; } ;
struct TYPE_11__ {int h; int qstride; int* lut; int qp_expr_str; scalar_t__ evaluate_per_mb; } ;
typedef TYPE_1__ QPContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t const VAR_1 ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (double*,int ,char const**,double*,int *,int *,int *,int *,int ,int ,TYPE_3__*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 size_t* FUNC_6 (int *,int*,int*) ;
 int FUNC_7 (int *,TYPE_4__*,int,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (double) ;

__attribute__((used)) static int FUNC_10(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    QPContext *VAR_6 = VAR_4->priv;
    AVBufferRef *VAR_7;
    AVFrame *VAR_8 = ((void*)0);
    const int8_t *VAR_9;
    int VAR_10, VAR_11, VAR_12;

    if (!VAR_6->qp_expr_str || VAR_4->is_disabled)
        return FUNC_8(VAR_5, VAR_3);

    VAR_7 = FUNC_1(VAR_6->h * VAR_6->qstride);
    if (!VAR_7) {
        VAR_12 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_8 = FUNC_4(VAR_3);
    if (!VAR_8) {
        FUNC_2(&VAR_7);
        VAR_12 = FUNC_0(VAR_0);
        goto fail;
    }

    VAR_9 = FUNC_6(VAR_3, &VAR_11, &VAR_10);
    FUNC_7(VAR_8, VAR_7, VAR_6->qstride, VAR_10);


    if (VAR_6->evaluate_per_mb) {
        int VAR_13, VAR_14;

        for (VAR_13 = 0; VAR_13 < VAR_6->h; VAR_13++)
            for (VAR_14 = 0; VAR_14 < VAR_6->qstride; VAR_14++) {
                int VAR_15 = VAR_9 ? VAR_9[VAR_14 + VAR_11 * VAR_13] : VAR_1;
                double VAR_16[] = { !!VAR_9, VAR_15, VAR_14, VAR_13, VAR_6->qstride, VAR_6->h, 0};
                static const char *VAR_17[] = { "known", "qp", "x", "y", "w", "h", ((void*)0) };
                double VAR_18;

                VAR_12 = FUNC_3(&VAR_18, VAR_6->qp_expr_str,
                                            VAR_17, VAR_16,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, 0, VAR_4);
                if (VAR_12 < 0)
                    goto fail;
                VAR_7->data[VAR_14 + VAR_6->qstride * VAR_13] = FUNC_9(VAR_18);
            }
    } else if (VAR_9) {
        int VAR_19, VAR_20;

        for (VAR_19 = 0; VAR_19 < VAR_6->h; VAR_19++)
            for (VAR_20 = 0; VAR_20 < VAR_6->qstride; VAR_20++)
                VAR_7->data[VAR_20 + VAR_6->qstride * VAR_19] = VAR_6->lut[129 +
                    ((int8_t)VAR_9[VAR_20 + VAR_11 * VAR_19])];
    } else {
        int VAR_21, VAR_22, VAR_23 = VAR_6->lut[0];

        for (VAR_21 = 0; VAR_21 < VAR_6->h; VAR_21++)
            for (VAR_22 = 0; VAR_22 < VAR_6->qstride; VAR_22++)
                VAR_7->data[VAR_22 + VAR_6->qstride * VAR_21] = VAR_23;
    }

    VAR_12 = FUNC_8(VAR_5, VAR_8);
    VAR_8 = ((void*)0);
fail:
    FUNC_5(&VAR_3);
    FUNC_5(&VAR_8);
    return VAR_12;
}
