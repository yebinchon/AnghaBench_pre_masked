
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_8__* out; } ;
typedef TYPE_5__ ThreadData ;
struct TYPE_22__ {TYPE_7__* priv; } ;
struct TYPE_21__ {scalar_t__* extended_data; } ;
struct TYPE_20__ {double* window_func_lut; int window_size; int (* detector ) (TYPE_7__*,TYPE_6__*,double,int ,int ,int ,int*,double const*,double*) ;scalar_t__ method; int overlap_skip; int hop_size; scalar_t__ ar_order; TYPE_6__* chan; TYPE_4__* buffer; TYPE_3__* out; TYPE_2__* is; TYPE_1__* in; } ;
struct TYPE_19__ {double* interpolated; int* index; int auxiliary; int acoefficients; int click; int detection; int tmp; int acorrelation; } ;
struct TYPE_17__ {scalar_t__* extended_data; } ;
struct TYPE_16__ {scalar_t__* extended_data; } ;
struct TYPE_15__ {scalar_t__* extended_data; } ;
struct TYPE_14__ {scalar_t__* extended_data; } ;
typedef TYPE_6__ DeclickChannel ;
typedef TYPE_7__ AudioDeclickContext ;
typedef TYPE_8__ AVFrame ;
typedef TYPE_9__ AVFilterContext ;


 double FUNC_0 (double const*,scalar_t__,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,double const*,scalar_t__,int ,int*,int,int ,double*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (double*,double const*,int) ;
 int FUNC_4 (double*,double*,int) ;
 int FUNC_5 (double*,int ,int) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*,double,int ,int ,int ,int*,double const*,double*) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioDeclickContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->out;
    const double *VAR_7 = (const double *)VAR_4->in->extended_data[VAR_2];
    double *VAR_8 = (double *)VAR_4->is->extended_data[VAR_2];
    double *VAR_9 = (double *)VAR_4->out->extended_data[VAR_2];
    double *VAR_10 = (double *)VAR_6->extended_data[VAR_2];
    double *VAR_11 = (double *)VAR_4->buffer->extended_data[VAR_2];
    const double *VAR_12 = VAR_4->window_func_lut;
    DeclickChannel *VAR_13 = &VAR_4->chan[VAR_2];
    double VAR_14;
    int VAR_15, VAR_16;

    VAR_14 = FUNC_0(VAR_7, VAR_4->ar_order, VAR_4->window_size, VAR_13->acoefficients, VAR_13->acorrelation, VAR_13->tmp);

    if (FUNC_2(VAR_13->acoefficients, VAR_4->ar_order + 1)) {
        double *VAR_17 = VAR_13->interpolated;
        int *VAR_18 = VAR_13->index;
        int VAR_19;

        VAR_19 = VAR_4->detector(VAR_4, VAR_13, VAR_14, VAR_13->detection, VAR_13->acoefficients,
                                VAR_13->click, VAR_18, VAR_7, VAR_9);
        if (VAR_19 > 0) {
            VAR_16 = FUNC_1(VAR_13, VAR_7, VAR_4->ar_order, VAR_13->acoefficients, VAR_18,
                                VAR_19, VAR_13->auxiliary, VAR_17);
            if (VAR_16 < 0)
                return VAR_16;

            for (VAR_15 = 0; VAR_15 < VAR_19; VAR_15++) {
                VAR_9[VAR_18[VAR_15]] = VAR_17[VAR_15];
                VAR_8[VAR_18[VAR_15]] = 1;
            }
        }
    } else {
        FUNC_3(VAR_9, VAR_7, VAR_4->window_size * sizeof(*VAR_9));
    }

    if (VAR_4->method == 0) {
        for (VAR_15 = 0; VAR_15 < VAR_4->window_size; VAR_15++)
            VAR_11[VAR_15] += VAR_9[VAR_15] * VAR_12[VAR_15];
    } else {
        const int VAR_20 = VAR_4->overlap_skip;

        for (VAR_15 = 0; VAR_15 < VAR_4->hop_size; VAR_15++)
            VAR_11[VAR_15] = VAR_9[VAR_20 + VAR_15];
    }
    for (VAR_15 = 0; VAR_15 < VAR_4->hop_size; VAR_15++)
        VAR_10[VAR_15] = VAR_11[VAR_15];

    FUNC_4(VAR_11, VAR_11 + VAR_4->hop_size, (VAR_4->window_size * 2 - VAR_4->hop_size) * sizeof(*VAR_11));
    FUNC_4(VAR_8, VAR_8 + VAR_4->hop_size, (VAR_4->window_size - VAR_4->hop_size) * sizeof(*VAR_8));
    FUNC_5(VAR_11 + VAR_4->window_size * 2 - VAR_4->hop_size, 0, VAR_4->hop_size * sizeof(*VAR_11));
    FUNC_5(VAR_8 + VAR_4->window_size - VAR_4->hop_size, 0, VAR_4->hop_size * sizeof(*VAR_8));

    return 0;
}
