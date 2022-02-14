
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {float sample_rate; TYPE_3__* src; } ;
struct TYPE_7__ {float sample_rate; float Fc0; float Fc1; int* num_taps; float phase; int n; int rdft_len; float* coeffs; int * irdft; int * rdft; int round; int beta; int att; int tbw1; int tbw0; scalar_t__ pts; } ;
typedef TYPE_1__ SincContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (TYPE_3__*,int ,char*,float) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,float**,int*,int*,float) ;
 int FUNC_7 (float*,int) ;
 float* FUNC_8 (float,float,int ,int*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_9(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    SincContext *VAR_5 = VAR_4->priv;
    float VAR_6 = VAR_5->sample_rate * .5f;
    float *VAR_7[2];
    int VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_3->sample_rate = VAR_5->sample_rate;
    VAR_5->pts = 0;

    if (VAR_5->Fc0 >= VAR_6 || VAR_5->Fc1 >= VAR_6) {
        FUNC_3(VAR_4, VAR_0,
               "filter frequency must be less than %d/2.\n", VAR_5->sample_rate);
        return FUNC_0(VAR_1);
    }

    VAR_7[0] = FUNC_8(VAR_6, VAR_5->Fc0, VAR_5->tbw0, &VAR_5->num_taps[0], VAR_5->att, &VAR_5->beta, VAR_5->round);
    VAR_7[1] = FUNC_8(VAR_6, VAR_5->Fc1, VAR_5->tbw1, &VAR_5->num_taps[1], VAR_5->att, &VAR_5->beta, VAR_5->round);

    if (VAR_7[0])
        FUNC_7(VAR_7[0], VAR_5->num_taps[0]);

    VAR_11 = VAR_5->num_taps[1] > VAR_5->num_taps[0];
    VAR_9 = VAR_5->num_taps[VAR_11];

    if (VAR_7[0] && VAR_7[1]) {
        for (VAR_8 = 0; VAR_8 < VAR_5->num_taps[!VAR_11]; VAR_8++)
            VAR_7[VAR_11][VAR_8 + (VAR_9 - VAR_5->num_taps[!VAR_11]) / 2] += VAR_7[!VAR_11][VAR_8];

        if (VAR_5->Fc0 < VAR_5->Fc1)
            FUNC_7(VAR_7[VAR_11], VAR_9);

        FUNC_2(VAR_7[!VAR_11]);
    }

    if (VAR_5->phase != 50.f) {
        int VAR_12 = FUNC_6(VAR_5, &VAR_7[VAR_11], &VAR_9, &VAR_10, VAR_5->phase);
        if (VAR_12 < 0)
            return VAR_12;
    } else {
        VAR_10 = VAR_9 >> 1;
    }

    VAR_5->n = 1 << (FUNC_4(VAR_9) + 1);
    VAR_5->rdft_len = 1 << FUNC_4(VAR_9);
    VAR_5->coeffs = FUNC_1(VAR_5->n, sizeof(*VAR_5->coeffs));
    if (!VAR_5->coeffs)
        return FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
        VAR_5->coeffs[VAR_8] = VAR_7[VAR_11][VAR_8];
    FUNC_2(VAR_7[VAR_11]);

    FUNC_5(VAR_5->rdft);
    FUNC_5(VAR_5->irdft);
    VAR_5->rdft = VAR_5->irdft = ((void*)0);

    return 0;
}
