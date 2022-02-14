
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {double level_in; double level_out; size_t buffer_size; double* buffer; int par_m_source; size_t write_ptr; size_t const* delay; double par_side_gain; double* balance_l; double* balance_r; scalar_t__ par_middle_phase; } ;
typedef TYPE_1__ HaasContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    HaasContext *VAR_5 = VAR_3->priv;
    const double *VAR_6 = (const double *)VAR_2->data[0];
    const double VAR_7 = VAR_5->level_in;
    const double VAR_8 = VAR_5->level_out;
    const uint32_t VAR_9 = VAR_5->buffer_size - 1;
    double *VAR_10 = VAR_5->buffer;
    AVFrame *VAR_11;
    double *VAR_12;
    int VAR_13;

    if (FUNC_3(VAR_2)) {
        VAR_11 = VAR_2;
    } else {
        VAR_11 = FUNC_5(VAR_4, VAR_2->nb_samples);
        if (!VAR_11) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_11, VAR_2);
    }
    VAR_12 = (double *)VAR_11->data[0];

    for (VAR_13 = 0; VAR_13 < VAR_2->nb_samples; VAR_13++, VAR_6 += 2, VAR_12 += 2) {
        double VAR_14, VAR_15[2], VAR_16, VAR_17;
        uint32_t VAR_18, VAR_19;

        switch (VAR_5->par_m_source) {
        case 0: VAR_14 = VAR_6[0]; break;
        case 1: VAR_14 = VAR_6[1]; break;
        case 2: VAR_14 = (VAR_6[0] + VAR_6[1]) * 0.5; break;
        case 3: VAR_14 = (VAR_6[0] - VAR_6[1]) * 0.5; break;
        }

        VAR_14 *= VAR_7;

        VAR_10[VAR_5->write_ptr] = VAR_14;

        VAR_18 = (VAR_5->write_ptr + VAR_5->buffer_size - VAR_5->delay[0]) & VAR_9;
        VAR_19 = (VAR_5->write_ptr + VAR_5->buffer_size - VAR_5->delay[1]) & VAR_9;

        if (VAR_5->par_middle_phase)
            VAR_14 = -VAR_14;

        VAR_15[0] = VAR_10[VAR_18] * VAR_5->par_side_gain;
        VAR_15[1] = VAR_10[VAR_19] * VAR_5->par_side_gain;
        VAR_16 = VAR_15[0] * VAR_5->balance_l[0] - VAR_15[1] * VAR_5->balance_l[1];
        VAR_17 = VAR_15[1] * VAR_5->balance_r[1] - VAR_15[0] * VAR_5->balance_r[0];

        VAR_12[0] = (VAR_14 + VAR_16) * VAR_8;
        VAR_12[1] = (VAR_14 + VAR_17) * VAR_8;

        VAR_5->write_ptr = (VAR_5->write_ptr + 1) & VAR_9;
    }

    if (VAR_11 != VAR_2)
        FUNC_2(&VAR_2);
    return FUNC_4(VAR_4, VAR_11);
}
