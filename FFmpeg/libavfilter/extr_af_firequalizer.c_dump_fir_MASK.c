
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_6__ {scalar_t__ dumpscale; int fir_len; int* analysis_buf; int rdft_len; int analysis_rdft_len; double* dump_buf; scalar_t__ min_phase; int analysis_rdft; scalar_t__ zero_phase; } ;
struct TYPE_5__ {int sample_rate; } ;
typedef TYPE_2__ FIREqualizerContext ;
typedef int FILE ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int *,char*,...) ;
 double FUNC_3 (int,int) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;

__attribute__((used)) static void FUNC_6(AVFilterContext *VAR_3, FILE *VAR_4, int VAR_5)
{
    FIREqualizerContext *VAR_6 = VAR_3->priv;
    int VAR_7 = VAR_3->inputs[0]->sample_rate;
    int VAR_8 = VAR_6->dumpscale == VAR_1 || VAR_6->dumpscale == VAR_2;
    int VAR_9 = VAR_6->dumpscale == VAR_0 || VAR_6->dumpscale == VAR_2;
    int VAR_10;
    int VAR_11 = VAR_6->fir_len / 2;
    double VAR_12 = VAR_6->zero_phase ? 0.0 : (double) VAR_11 / VAR_7;
    double VAR_13, VAR_14, VAR_15;

    if (!VAR_6->min_phase) {
        VAR_6->analysis_buf[0] *= VAR_6->rdft_len/2;
        for (VAR_10 = 1; VAR_10 <= VAR_11; VAR_10++) {
            VAR_6->analysis_buf[VAR_10] *= VAR_6->rdft_len/2;
            VAR_6->analysis_buf[VAR_6->analysis_rdft_len - VAR_10] *= VAR_6->rdft_len/2;
        }
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_6->fir_len; VAR_10++)
            VAR_6->analysis_buf[VAR_10] *= VAR_6->rdft_len/2;
    }

    if (VAR_5)
        FUNC_2(VAR_4, "\n\n");

    FUNC_2(VAR_4, "# time[%d] (time amplitude)\n", VAR_5);

    if (!VAR_6->min_phase) {
    for (VAR_10 = VAR_11; VAR_10 > 0; VAR_10--)
        FUNC_2(VAR_4, "%15.10f %15.10f\n", VAR_12 - (double) VAR_10 / VAR_7, (double) VAR_6->analysis_buf[VAR_6->analysis_rdft_len - VAR_10]);

    for (VAR_10 = 0; VAR_10 <= VAR_11; VAR_10++)
        FUNC_2(VAR_4, "%15.10f %15.10f\n", VAR_12 + (double)VAR_10 / VAR_7 , (double) VAR_6->analysis_buf[VAR_10]);
    } else {
        for (VAR_10 = 0; VAR_10 < VAR_6->fir_len; VAR_10++)
            FUNC_2(VAR_4, "%15.10f %15.10f\n", (double)VAR_10 / VAR_7, (double) VAR_6->analysis_buf[VAR_10]);
    }

    FUNC_0(VAR_6->analysis_rdft, VAR_6->analysis_buf);

    FUNC_2(VAR_4, "\n\n# freq[%d] (frequency desired_gain actual_gain)\n", VAR_5);

    for (VAR_10 = 0; VAR_10 <= VAR_6->analysis_rdft_len/2; VAR_10++) {
        int VAR_16 = (VAR_10 == VAR_6->analysis_rdft_len/2) ? 1 : 2 * VAR_10;
        VAR_13 = (double)VAR_10 * VAR_7 / VAR_6->analysis_rdft_len;
        if (VAR_8)
            VAR_13 = FUNC_5(0.05*VAR_13);
        VAR_14 = VAR_6->dump_buf[VAR_16];
        VAR_15 = VAR_6->min_phase && (VAR_16 > 1) ? FUNC_3(VAR_6->analysis_buf[VAR_16], VAR_6->analysis_buf[VAR_16+1]) : VAR_6->analysis_buf[VAR_16];
        if (VAR_6->min_phase)
            VAR_15 = FUNC_1(VAR_15);
        if (VAR_9) {
            VAR_14 = 20.0 * FUNC_4(FUNC_1(VAR_14));
            VAR_15 = 20.0 * FUNC_4(FUNC_1(VAR_15));
        }
        FUNC_2(VAR_4, "%17.10f %17.10f %17.10f\n", VAR_13, VAR_14, VAR_15);
    }
}
