
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* sono_v_buf; int cqt_len; double* bar_v_buf; double timeclamp; double* freq; int ctx; int bar_v; int sono_v; } ;
typedef TYPE_1__ ShowCQTContext ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,double*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char const**,char const**,double (*) (void*,double),int *,int *,int ,int ) ;
 int FUNC_4 (double**) ;
 void* FUNC_5 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 double FUNC_6 (int ,char*,int ,double,int ,double,int) ;

__attribute__((used)) static int FUNC_7(ShowCQTContext *VAR_5)
{
    const char *VAR_6[] = { "a_weighting", "b_weighting", "c_weighting", ((void*)0) };
    const char *VAR_7[] = { "timeclamp", "tc", "frequency", "freq", "f", "bar_v", ((void*)0) };
    const char *VAR_8[] = { "timeclamp", "tc", "frequency", "freq", "f", "sono_v", ((void*)0) };
    double (*VAR_9[])(void *, double) = { VAR_2, VAR_3, VAR_4 };
    AVExpr *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12, VAR_13 = FUNC_0(VAR_0);

    VAR_5->sono_v_buf = FUNC_5(VAR_5->cqt_len, sizeof(*VAR_5->sono_v_buf));
    VAR_5->bar_v_buf = FUNC_5(VAR_5->cqt_len, sizeof(*VAR_5->bar_v_buf));
    if (!VAR_5->sono_v_buf || !VAR_5->bar_v_buf)
        goto error;

    if ((VAR_13 = FUNC_3(&VAR_10, VAR_5->sono_v, VAR_7, VAR_6, VAR_9, ((void*)0), ((void*)0), 0, VAR_5->ctx)) < 0)
        goto error;

    if ((VAR_13 = FUNC_3(&VAR_11, VAR_5->bar_v, VAR_8, VAR_6, VAR_9, ((void*)0), ((void*)0), 0, VAR_5->ctx)) < 0)
        goto error;

    for (VAR_12 = 0; VAR_12 < VAR_5->cqt_len; VAR_12++) {
        double VAR_14[] = { VAR_5->timeclamp, VAR_5->timeclamp, VAR_5->freq[VAR_12], VAR_5->freq[VAR_12], VAR_5->freq[VAR_12], 0.0 };
        double VAR_15 = FUNC_6(VAR_5->ctx, "sono_v", FUNC_1(VAR_10, VAR_14, ((void*)0)), 0.0, VAR_1, 0.0, VAR_12);
        VAR_14[5] = VAR_15;
        VAR_15 = FUNC_6(VAR_5->ctx, "bar_v", FUNC_1(VAR_11, VAR_14, ((void*)0)), 0.0, VAR_1, 0.0, VAR_12);
        VAR_5->bar_v_buf[VAR_12] = VAR_15 * VAR_15;
        VAR_14[5] = VAR_15;
        VAR_15 = FUNC_6(VAR_5->ctx, "sono_v", FUNC_1(VAR_10, VAR_14, ((void*)0)), 0.0, VAR_1, 0.0, VAR_12);
        VAR_5->sono_v_buf[VAR_12] = VAR_15 * VAR_15;
    }
    FUNC_2(VAR_10);
    FUNC_2(VAR_11);
    return 0;

error:
    FUNC_4(&VAR_5->sono_v_buf);
    FUNC_4(&VAR_5->bar_v_buf);
    FUNC_2(VAR_10);
    FUNC_2(VAR_11);
    return VAR_13;
}
