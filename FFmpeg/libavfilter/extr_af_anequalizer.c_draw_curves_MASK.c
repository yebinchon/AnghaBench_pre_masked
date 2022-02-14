
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_3__* priv; } ;
struct TYPE_15__ {int channels; } ;
struct TYPE_14__ {int* linesize; scalar_t__* data; } ;
struct TYPE_13__ {int h; double w; int nb_filters; int mag; TYPE_1__* filters; scalar_t__ fscale; int colors; } ;
struct TYPE_12__ {int b4; double b2; double b1; double b3; int b0; int a4; double a2; double a1; double a3; int a0; } ;
struct TYPE_11__ {int channel; TYPE_2__* section; scalar_t__ ignore; } ;
typedef TYPE_2__ FoSection ;
typedef TYPE_3__ AudioNEqualizerContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 double VAR_1 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*,char*,int,TYPE_6__*) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char*,char*,char**) ;
 double FUNC_7 (double) ;
 double FUNC_8 (double,double) ;
 int FUNC_9 (double) ;
 int FUNC_10 (double) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 double FUNC_12 (int,double) ;
 double FUNC_13 (double) ;

__attribute__((used)) static void FUNC_14(AVFilterContext *VAR_2, AVFilterLink *VAR_3, AVFrame *VAR_4)
{
    AudioNEqualizerContext *VAR_5 = VAR_2->priv;
    char *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
    int VAR_9, VAR_10, VAR_11;

    VAR_6 = FUNC_5(VAR_5->colors);
    if (!VAR_6)
        return;

    FUNC_11(VAR_4->data[0], 0, VAR_5->h * VAR_4->linesize[0]);

    for (VAR_9 = 0; VAR_9 < VAR_3->channels; VAR_9++) {
        uint8_t VAR_12[4] = { 0xff, 0xff, 0xff, 0xff };
        int VAR_13 = -1;
        double VAR_14;

        VAR_7 = FUNC_6(VAR_9 == 0 ? VAR_6 : ((void*)0), " |", &VAR_8);
        if (VAR_7)
            FUNC_4(VAR_12, VAR_7, -1, VAR_2);

        for (VAR_14 = 0; VAR_14 < VAR_5->w; VAR_14++) {
            double VAR_15, VAR_16, VAR_17, VAR_18;
            double VAR_19, VAR_20;
            double VAR_21 = 1;
            double VAR_22;
            int VAR_23, VAR_24, VAR_25;

            VAR_22 = VAR_1 * (VAR_5->fscale ? FUNC_12(VAR_5->w - 1, VAR_14 / VAR_5->w) : VAR_14) / (VAR_5->w - 1);
            VAR_15 = FUNC_7(VAR_22);
            VAR_17 = VAR_15 * VAR_15;
            VAR_16 = -FUNC_13(VAR_22);
            VAR_18 = VAR_16 * VAR_16;

            for (VAR_11 = 0; VAR_11 < VAR_5->nb_filters; VAR_11++) {
                if (VAR_5->filters[VAR_11].channel != VAR_9 ||
                    VAR_5->filters[VAR_11].ignore)
                    continue;

                for (VAR_10 = 0; VAR_10 < VAR_0 / 2; VAR_10++) {
                    FoSection *VAR_26 = &VAR_5->filters[VAR_11].section[VAR_10];




                    VAR_19 = VAR_26->b4*(1-8*VAR_17*VAR_18) + VAR_26->b2*(VAR_17-VAR_18) + VAR_15*(VAR_26->b1+VAR_26->b3*(VAR_17-3*VAR_18))+ VAR_26->b0;
                    VAR_20 = VAR_16*(VAR_26->b3*(3*VAR_17-VAR_18) + VAR_26->b1 + 2*VAR_15*(2*VAR_26->b4*(VAR_17-VAR_18) + VAR_26->b2));
                    VAR_21 *= FUNC_8(VAR_19, VAR_20);
                    VAR_19 = VAR_26->a4*(1-8*VAR_17*VAR_18) + VAR_26->a2*(VAR_17-VAR_18) + VAR_15*(VAR_26->a1+VAR_26->a3*(VAR_17-3*VAR_18))+ VAR_26->a0;
                    VAR_20 = VAR_16*(VAR_26->a3*(3*VAR_17-VAR_18) + VAR_26->a1 + 2*VAR_15*(2*VAR_26->a4*(VAR_17-VAR_18) + VAR_26->a2));
                    VAR_21 /= FUNC_8(VAR_19, VAR_20);
                }
            }

            VAR_23 = FUNC_2((1. + -20 * FUNC_9(VAR_21) / VAR_5->mag) * VAR_5->h / 2, 0, VAR_5->h - 1);
            VAR_25 = FUNC_10(VAR_14);
            if (VAR_13 == -1)
                VAR_13 = VAR_23;
            if (VAR_23 <= VAR_13) {
                for (VAR_24 = VAR_23; VAR_24 <= VAR_13; VAR_24++)
                    FUNC_1(VAR_4->data[0] + VAR_24 * VAR_4->linesize[0] + VAR_25 * 4, FUNC_0(VAR_12));
            } else {
                for (VAR_24 = VAR_13; VAR_24 <= VAR_23; VAR_24++)
                    FUNC_1(VAR_4->data[0] + VAR_24 * VAR_4->linesize[0] + VAR_25 * 4, FUNC_0(VAR_12));
            }

            VAR_13 = VAR_23;
        }
    }

    FUNC_3(VAR_6);
}
