
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int** data; int* linesize; } ;
struct TYPE_5__ {double basefreq; double endfreq; int cqt_len; double* freq; double timeclamp; int ctx; int fontcolor; } ;
typedef TYPE_1__ ShowCQTContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,double*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char const**,char const**,double (*) (void*,double),int *,int *,int ,int ) ;
 int FUNC_4 (double**) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_5 ;
 double* FUNC_6 (double,double,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(ShowCQTContext *VAR_9, AVFrame *VAR_10, int VAR_11)
{
    const char *VAR_12[] = { "timeclamp", "tc", "frequency", "freq", "f", ((void*)0) };
    const char *VAR_13[] = { "midi", "r", "g", "b", ((void*)0) };
    double (*VAR_14[])(void *, double) = { VAR_7, VAR_8, VAR_6, VAR_5 };
    AVExpr *VAR_15 = ((void*)0);
    double *VAR_16 = ((void*)0);
    int VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21 = VAR_11 ? 1920/2 : 1920, VAR_22 = VAR_11 ? 16 : 32;
    int VAR_23 = VAR_11 ? 2 : 1;

    if (VAR_9->basefreq != (double) VAR_1 || VAR_9->endfreq != (double) VAR_3) {
        FUNC_5(VAR_9->ctx, VAR_0, "font axis rendering is not implemented in non-default frequency range,"
               " please use axisfile option instead.\n");
        return FUNC_0(VAR_2);
    }

    if (VAR_9->cqt_len == 1920)
        VAR_16 = VAR_9->freq;
    else if (!(VAR_16 = FUNC_6(VAR_9->basefreq, VAR_9->endfreq, 1920)))
        return FUNC_0(VAR_4);

    if ((VAR_20 = FUNC_3(&VAR_15, VAR_9->fontcolor, VAR_12, VAR_13, VAR_14, ((void*)0), ((void*)0), 0, VAR_9->ctx)) < 0) {
        if (VAR_16 != VAR_9->freq)
            FUNC_4(&VAR_16);
        return VAR_20;
    }

    for (VAR_17 = 0, VAR_18 = 0; VAR_17 < VAR_21; VAR_17++, VAR_18 += VAR_23) {
        double VAR_24[] = { VAR_9->timeclamp, VAR_9->timeclamp, VAR_16[VAR_18], VAR_16[VAR_18], VAR_16[VAR_18] };
        int VAR_25 = (int) FUNC_1(VAR_15, VAR_24, ((void*)0));
        uint8_t VAR_26 = (VAR_25 >> 16) & 0xFF, VAR_27 = (VAR_25 >> 8) & 0xFF, VAR_28 = VAR_25 & 0xFF;
        uint8_t *VAR_29 = VAR_10->data[0];
        int VAR_30 = VAR_10->linesize[0];
        for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
            VAR_29[VAR_30 * VAR_19 + 4 * VAR_17] = VAR_26;
            VAR_29[VAR_30 * VAR_19 + 4 * VAR_17 + 1] = VAR_27;
            VAR_29[VAR_30 * VAR_19 + 4 * VAR_17 + 2] = VAR_28;
        }
    }

    FUNC_2(VAR_15);
    if (VAR_16 != VAR_9->freq)
        FUNC_4(&VAR_16);
    return 0;
}
