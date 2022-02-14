
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int text ;
struct TYPE_12__ {TYPE_2__* priv; } ;
struct TYPE_11__ {int* linesize; int * data; } ;
struct TYPE_10__ {int h; int w; int ir_channel; int nb_taps; TYPE_1__** in; } ;
struct TYPE_9__ {int channels; scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioFIRContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 float FUNC_1 (double,double) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (float*) ;
 float* FUNC_4 (int,int) ;
 float const FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,int,int,int ,int,int) ;
 int FUNC_7 (TYPE_3__*,int,int,char*,int) ;
 float FUNC_8 (float,float) ;
 float FUNC_9 (float,float) ;
 float FUNC_10 (double,double) ;
 int FUNC_11 (int ,int ,int) ;
 float const FUNC_12 (int) ;
 int FUNC_13 (char*,int,char*,float) ;

__attribute__((used)) static void FUNC_14(AVFilterContext *VAR_3, AVFrame *VAR_4)
{
    AudioFIRContext *VAR_5 = VAR_3->priv;
    float *VAR_6, *VAR_7, *VAR_8, VAR_9 = VAR_0, VAR_10 = VAR_1;
    float VAR_11 = VAR_0, VAR_12 = VAR_1;
    int VAR_13 = -1, VAR_14 = -1, VAR_15 = -1;
    char VAR_16[32];
    int VAR_17, VAR_18, VAR_19;

    FUNC_11(VAR_4->data[0], 0, VAR_5->h * VAR_4->linesize[0]);

    VAR_7 = FUNC_4(VAR_5->w, sizeof(*VAR_7));
    VAR_6 = FUNC_4(VAR_5->w, sizeof(*VAR_6));
    VAR_8 = FUNC_4(VAR_5->w, sizeof(*VAR_8));
    if (!VAR_6 || !VAR_7 || !VAR_8)
        goto end;

    VAR_17 = FUNC_2(VAR_5->ir_channel, 0, VAR_5->in[1]->channels - 1);
    for (VAR_18 = 0; VAR_18 < VAR_5->w; VAR_18++) {
        const float *VAR_20 = (const float *)VAR_5->in[1]->extended_data[VAR_17];
        double VAR_21 = VAR_18 * VAR_2 / (VAR_5->w - 1);
        double VAR_22, VAR_23 = 0., VAR_24 = 0., VAR_25 = 0., VAR_26 = 0.;

        for (VAR_19 = 0; VAR_19 < VAR_5->nb_taps; VAR_19++) {
            VAR_25 += FUNC_5(-VAR_19 * VAR_21) * VAR_20[VAR_19];
            VAR_26 += FUNC_12(-VAR_19 * VAR_21) * VAR_20[VAR_19];
            VAR_23 += FUNC_5(-VAR_19 * VAR_21) * VAR_20[VAR_19] * VAR_19;
            VAR_24 += FUNC_12(-VAR_19 * VAR_21) * VAR_20[VAR_19] * VAR_19;
        }

        VAR_6[VAR_18] = FUNC_10(VAR_25, VAR_26);
        VAR_7[VAR_18] = FUNC_1(VAR_26, VAR_25);
        VAR_22 = VAR_25 * VAR_25 + VAR_26 * VAR_26;
        VAR_8[VAR_18] = (VAR_23 * VAR_25 + VAR_24 * VAR_26) / VAR_22;
        VAR_9 = FUNC_9(VAR_9, VAR_6[VAR_18]);
        VAR_10 = FUNC_8(VAR_10, VAR_6[VAR_18]);
        VAR_11 = FUNC_9(VAR_11, VAR_8[VAR_18]);
        VAR_12 = FUNC_8(VAR_12, VAR_8[VAR_18]);
    }

    for (VAR_18 = 0; VAR_18 < VAR_5->w; VAR_18++) {
        int VAR_27 = VAR_6[VAR_18] / VAR_10 * (VAR_5->h - 1);
        int VAR_28 = (VAR_8[VAR_18] - VAR_11) / (VAR_12 - VAR_11) * (VAR_5->h - 1);
        int VAR_29 = (0.5 * (1. + VAR_7[VAR_18] / VAR_2)) * (VAR_5->h - 1);

        VAR_27 = VAR_5->h - 1 - FUNC_2(VAR_27, 0, VAR_5->h - 1);
        VAR_29 = VAR_5->h - 1 - FUNC_2(VAR_29, 0, VAR_5->h - 1);
        VAR_28 = VAR_5->h - 1 - FUNC_2(VAR_28, 0, VAR_5->h - 1);

        if (VAR_13 < 0)
            VAR_13 = VAR_27;
        if (VAR_14 < 0)
            VAR_14 = VAR_29;
        if (VAR_15 < 0)
            VAR_15 = VAR_28;

        FUNC_6(VAR_4, VAR_18, VAR_27, FUNC_0(VAR_18 - 1, 0), VAR_13, 0xFFFF00FF);
        FUNC_6(VAR_4, VAR_18, VAR_29, FUNC_0(VAR_18 - 1, 0), VAR_14, 0xFF00FF00);
        FUNC_6(VAR_4, VAR_18, VAR_28, FUNC_0(VAR_18 - 1, 0), VAR_15, 0xFF00FFFF);

        VAR_13 = VAR_27;
        VAR_14 = VAR_29;
        VAR_15 = VAR_28;
    }

    if (VAR_5->w > 400 && VAR_5->h > 100) {
        FUNC_7(VAR_4, 2, 2, "Max Magnitude:", 0xDDDDDDDD);
        FUNC_13(VAR_16, sizeof(VAR_16), "%.2f", VAR_10);
        FUNC_7(VAR_4, 15 * 8 + 2, 2, VAR_16, 0xDDDDDDDD);

        FUNC_7(VAR_4, 2, 12, "Min Magnitude:", 0xDDDDDDDD);
        FUNC_13(VAR_16, sizeof(VAR_16), "%.2f", VAR_9);
        FUNC_7(VAR_4, 15 * 8 + 2, 12, VAR_16, 0xDDDDDDDD);

        FUNC_7(VAR_4, 2, 22, "Max Delay:", 0xDDDDDDDD);
        FUNC_13(VAR_16, sizeof(VAR_16), "%.2f", VAR_12);
        FUNC_7(VAR_4, 11 * 8 + 2, 22, VAR_16, 0xDDDDDDDD);

        FUNC_7(VAR_4, 2, 32, "Min Delay:", 0xDDDDDDDD);
        FUNC_13(VAR_16, sizeof(VAR_16), "%.2f", VAR_11);
        FUNC_7(VAR_4, 11 * 8 + 2, 32, VAR_16, 0xDDDDDDDD);
    }

end:
    FUNC_3(VAR_8);
    FUNC_3(VAR_7);
    FUNC_3(VAR_6);
}
