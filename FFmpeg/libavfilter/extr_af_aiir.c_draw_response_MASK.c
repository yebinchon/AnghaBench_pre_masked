
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
struct TYPE_10__ {int h; int w; int ir_channel; int channels; scalar_t__ format; TYPE_1__* iir; } ;
struct TYPE_9__ {double** ab; int* nb_ab; float g; } ;
typedef TYPE_2__ AudioIIRContext ;
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
 double const FUNC_5 (double) ;
 int FUNC_6 (TYPE_3__*,int,int,int ,int,int) ;
 int FUNC_7 (TYPE_3__*,int,int,char*,int) ;
 float FUNC_8 (float,float) ;
 float FUNC_9 (float,float) ;
 float FUNC_10 (double,double) ;
 int FUNC_11 (int ,int ,int) ;
 double const FUNC_12 (double) ;
 int FUNC_13 (char*,int,char*,float) ;

__attribute__((used)) static void FUNC_14(AVFilterContext *VAR_3, AVFrame *VAR_4)
{
    AudioIIRContext *VAR_5 = VAR_3->priv;
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

    VAR_17 = FUNC_2(VAR_5->ir_channel, 0, VAR_5->channels - 1);
    for (VAR_18 = 0; VAR_18 < VAR_5->w; VAR_18++) {
        const double *VAR_20 = VAR_5->iir[VAR_17].ab[0];
        const double *VAR_21 = VAR_5->iir[VAR_17].ab[1];
        double VAR_22 = VAR_18 * VAR_2 / (VAR_5->w - 1);
        double VAR_23, VAR_24;
        double VAR_25, VAR_26;
        double VAR_27, VAR_28, VAR_29;

        if (VAR_5->format == 0) {
            VAR_23 = 0., VAR_24 = 0.;
            VAR_25 = 0., VAR_26 = 0.;
            for (VAR_19 = 0; VAR_19 < VAR_5->iir[VAR_17].nb_ab[1]; VAR_19++) {
                VAR_23 += FUNC_5(-VAR_19 * VAR_22) * VAR_21[VAR_19];
                VAR_25 += FUNC_12(-VAR_19 * VAR_22) * VAR_21[VAR_19];
            }

            for (VAR_19 = 0; VAR_19 < VAR_5->iir[VAR_17].nb_ab[0]; VAR_19++) {
                VAR_24 += FUNC_5(-VAR_19 * VAR_22) * VAR_20[VAR_19];
                VAR_26 += FUNC_12(-VAR_19 * VAR_22) * VAR_20[VAR_19];
            }

            VAR_29 = VAR_24 * VAR_24 + VAR_26 * VAR_26;
            VAR_27 = (VAR_23 * VAR_24 + VAR_25 * VAR_26) / VAR_29;
            VAR_28 = (VAR_25 * VAR_24 - VAR_26 * VAR_23) / VAR_29;
        } else {
            VAR_27 = 1;
            VAR_28 = 0;
            for (VAR_19 = 0; VAR_19 < VAR_5->iir[VAR_17].nb_ab[1]; VAR_19++) {
                double VAR_30, VAR_31, VAR_32, VAR_33;

                VAR_32 = FUNC_5(VAR_22) - VAR_21[2 * VAR_19];
                VAR_33 = FUNC_12(VAR_22) - VAR_21[2 * VAR_19 + 1];

                VAR_30 = VAR_27;
                VAR_31 = VAR_28;

                VAR_27 = VAR_30 * VAR_32 - VAR_31 * VAR_33;
                VAR_28 = VAR_30 * VAR_33 + VAR_31 * VAR_32;
            }

            for (VAR_19 = 0; VAR_19 < VAR_5->iir[VAR_17].nb_ab[0]; VAR_19++) {
                double VAR_34, VAR_35, VAR_36, VAR_37;

                VAR_36 = FUNC_5(VAR_22) - VAR_20[2 * VAR_19];
                VAR_37 = FUNC_12(VAR_22) - VAR_20[2 * VAR_19 + 1];

                VAR_34 = VAR_27;
                VAR_35 = VAR_28;
                VAR_29 = VAR_36 * VAR_36 + VAR_37 * VAR_37;

                VAR_27 = (VAR_34 * VAR_36 + VAR_35 * VAR_37) / VAR_29;
                VAR_28 = (VAR_35 * VAR_36 - VAR_34 * VAR_37) / VAR_29;
            }
        }

        VAR_6[VAR_18] = VAR_5->iir[VAR_17].g * FUNC_10(VAR_27, VAR_28);
        VAR_7[VAR_18] = FUNC_1(VAR_28, VAR_27);
        VAR_9 = FUNC_9(VAR_9, VAR_6[VAR_18]);
        VAR_10 = FUNC_8(VAR_10, VAR_6[VAR_18]);
    }

    for (VAR_18 = 0; VAR_18 < VAR_5->w - 1; VAR_18++) {
        float VAR_38 = VAR_2 / (VAR_5->w - 1);

        VAR_8[VAR_18] = -(VAR_7[VAR_18 + 1] - VAR_7[VAR_18]) / VAR_38;
        VAR_11 = FUNC_9(VAR_11, VAR_8[VAR_18]);
        VAR_12 = FUNC_8(VAR_12, VAR_8[VAR_18]);
    }

    VAR_8[VAR_18] = VAR_8[VAR_18 - 1];

    for (VAR_18 = 0; VAR_18 < VAR_5->w; VAR_18++) {
        int VAR_39 = VAR_6[VAR_18] / VAR_10 * (VAR_5->h - 1);
        int VAR_40 = (VAR_8[VAR_18] - VAR_11) / (VAR_12 - VAR_11) * (VAR_5->h - 1);
        int VAR_41 = (0.5 * (1. + VAR_7[VAR_18] / VAR_2)) * (VAR_5->h - 1);

        VAR_39 = VAR_5->h - 1 - FUNC_2(VAR_39, 0, VAR_5->h - 1);
        VAR_41 = VAR_5->h - 1 - FUNC_2(VAR_41, 0, VAR_5->h - 1);
        VAR_40 = VAR_5->h - 1 - FUNC_2(VAR_40, 0, VAR_5->h - 1);

        if (VAR_13 < 0)
            VAR_13 = VAR_39;
        if (VAR_14 < 0)
            VAR_14 = VAR_41;
        if (VAR_15 < 0)
            VAR_15 = VAR_40;

        FUNC_6(VAR_4, VAR_18, VAR_39, FUNC_0(VAR_18 - 1, 0), VAR_13, 0xFFFF00FF);
        FUNC_6(VAR_4, VAR_18, VAR_41, FUNC_0(VAR_18 - 1, 0), VAR_14, 0xFF00FF00);
        FUNC_6(VAR_4, VAR_18, VAR_40, FUNC_0(VAR_18 - 1, 0), VAR_15, 0xFF00FFFF);

        VAR_13 = VAR_39;
        VAR_14 = VAR_41;
        VAR_15 = VAR_40;
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
