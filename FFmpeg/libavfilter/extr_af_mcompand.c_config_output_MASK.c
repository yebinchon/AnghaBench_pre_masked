
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {double curve_dB; int nb_segments; double gain_dB; void* segments; } ;
struct TYPE_15__ {TYPE_2__* priv; } ;
struct TYPE_14__ {int channels; double sample_rate; TYPE_4__* src; } ;
struct TYPE_13__ {char* args; int nb_bands; int delay_buf_size; TYPE_1__* bands; } ;
struct TYPE_12__ {double* attack_rate; double* decay_rate; double* volume; double topfreq; double delay; int delay_buf; TYPE_6__ transfer_fn; int filter; } ;
typedef TYPE_2__ MCompandContext ;
typedef int CompandSegment ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 double VAR_3 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_4__*,int ,char*,...) ;
 char* FUNC_5 (char*,char*,char**) ;
 int FUNC_6 (char*,int*,char) ;
 int FUNC_7 (TYPE_3__*,int *,int) ;
 double FUNC_8 (double) ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (char*,int,double,TYPE_6__*,TYPE_4__*) ;
 double FUNC_11 (double,double) ;
 int FUNC_12 (char*,char*,double*) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    MCompandContext *VAR_6 = VAR_5->priv;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    char *VAR_13 = VAR_6->args, *VAR_14 = ((void*)0);
    int VAR_15 = 0;

    FUNC_6(VAR_6->args, &VAR_12, '|');
    VAR_6->nb_bands = FUNC_1(1, VAR_12);

    VAR_6->bands = FUNC_3(VAR_12, sizeof(*VAR_6->bands));
    if (!VAR_6->bands)
        return FUNC_0(VAR_2);

    for (VAR_9 = 0, VAR_11 = 0; VAR_9 < VAR_12; VAR_9++) {
        int VAR_16, VAR_17, VAR_18 = 0;
        char *VAR_19, *VAR_20 = FUNC_5(VAR_13, "|", &VAR_14);
        char *VAR_21, *VAR_22, *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
        double VAR_25;

        if (!VAR_20) {
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }
        VAR_13 = ((void*)0);

        VAR_21 = VAR_20;
        FUNC_6(VAR_20, &VAR_18, ' ');
        VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
        if (!VAR_19) {
            FUNC_4(VAR_5, VAR_0, "at least one attacks/decays rate is mandatory\n");
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }
        VAR_21 = ((void*)0);
        VAR_22 = VAR_19;

        FUNC_6(VAR_19, &VAR_17, ',');
        if (!VAR_17 || VAR_17 & 1) {
            FUNC_4(VAR_5, VAR_0, "number of attacks rate plus decays rate must be even\n");
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }

        VAR_6->bands[VAR_9].attack_rate = FUNC_3(VAR_4->channels, sizeof(double));
        VAR_6->bands[VAR_9].decay_rate = FUNC_3(VAR_4->channels, sizeof(double));
        VAR_6->bands[VAR_9].volume = FUNC_3(VAR_4->channels, sizeof(double));
        for (VAR_10 = 0; VAR_10 < FUNC_2(VAR_17 / 2, VAR_4->channels); VAR_10++) {
            char *VAR_26 = FUNC_5(VAR_22, ",", &VAR_24);

            VAR_22 = ((void*)0);
            FUNC_12(VAR_26, "%lf", &VAR_6->bands[VAR_9].attack_rate[VAR_10]);
            VAR_26 = FUNC_5(VAR_22, ",", &VAR_24);
            FUNC_12(VAR_26, "%lf", &VAR_6->bands[VAR_9].decay_rate[VAR_10]);

            if (VAR_6->bands[VAR_9].attack_rate[VAR_10] > 1.0 / VAR_4->sample_rate) {
                VAR_6->bands[VAR_9].attack_rate[VAR_10] = 1.0 - FUNC_8(-1.0 / (VAR_4->sample_rate * VAR_6->bands[VAR_9].attack_rate[VAR_10]));
            } else {
                VAR_6->bands[VAR_9].attack_rate[VAR_10] = 1.0;
            }

            if (VAR_6->bands[VAR_9].decay_rate[VAR_10] > 1.0 / VAR_4->sample_rate) {
                VAR_6->bands[VAR_9].decay_rate[VAR_10] = 1.0 - FUNC_8(-1.0 / (VAR_4->sample_rate * VAR_6->bands[VAR_9].decay_rate[VAR_10]));
            } else {
                VAR_6->bands[VAR_9].decay_rate[VAR_10] = 1.0;
            }
        }

        for (VAR_8 = VAR_10; VAR_8 < VAR_4->channels; VAR_8++) {
            VAR_6->bands[VAR_9].attack_rate[VAR_8] = VAR_6->bands[VAR_9].attack_rate[VAR_10 - 1];
            VAR_6->bands[VAR_9].decay_rate[VAR_8] = VAR_6->bands[VAR_9].decay_rate[VAR_10 - 1];
        }

        VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
        if (!VAR_19) {
            FUNC_4(VAR_5, VAR_0, "transfer function curve in dB must be set\n");
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }
        FUNC_12(VAR_19, "%lf", &VAR_6->bands[VAR_9].transfer_fn.curve_dB);

        VAR_25 = VAR_6->bands[VAR_9].transfer_fn.curve_dB * VAR_3 / 20.0;

        VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
        if (!VAR_19) {
            FUNC_4(VAR_5, VAR_0, "transfer points missing\n");
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }

        FUNC_6(VAR_19, &VAR_16, ',');
        VAR_6->bands[VAR_9].transfer_fn.nb_segments = (VAR_16 + 4) * 2;
        VAR_6->bands[VAR_9].transfer_fn.segments = FUNC_3(VAR_6->bands[VAR_9].transfer_fn.nb_segments,
                                                     sizeof(CompandSegment));
        if (!VAR_6->bands[VAR_9].transfer_fn.segments) {
            FUNC_13(VAR_5);
            return FUNC_0(VAR_2);
        }

        VAR_7 = FUNC_10(VAR_19, VAR_16, VAR_25, &VAR_6->bands[VAR_9].transfer_fn, VAR_5);
        if (VAR_7 < 0) {
            FUNC_4(VAR_5, VAR_0, "transfer points parsing failed\n");
            FUNC_13(VAR_5);
            return VAR_7;
        }

        VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
        if (!VAR_19) {
            FUNC_4(VAR_5, VAR_0, "crossover_frequency is missing\n");
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }

        VAR_11 += FUNC_12(VAR_19, "%lf", &VAR_6->bands[VAR_9].topfreq) == 1;
        if (VAR_6->bands[VAR_9].topfreq < 0 || VAR_6->bands[VAR_9].topfreq >= VAR_4->sample_rate / 2) {
            FUNC_4(VAR_5, VAR_0, "crossover_frequency: %f, should be >=0 and lower than half of sample rate: %d.\n", VAR_6->bands[VAR_9].topfreq, VAR_4->sample_rate / 2);
            FUNC_13(VAR_5);
            return FUNC_0(VAR_1);
        }

        if (VAR_6->bands[VAR_9].topfreq != 0) {
            VAR_7 = FUNC_7(VAR_4, &VAR_6->bands[VAR_9].filter, VAR_6->bands[VAR_9].topfreq);
            if (VAR_7 < 0) {
                FUNC_13(VAR_5);
                return VAR_7;
            }
        }

        VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
        if (VAR_19) {
            FUNC_12(VAR_19, "%lf", &VAR_6->bands[VAR_9].delay);
            VAR_15 = FUNC_1(VAR_15, VAR_6->bands[VAR_9].delay * VAR_4->sample_rate);

            VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
            if (VAR_19) {
                double VAR_27;

                FUNC_12(VAR_19, "%lf", &VAR_27);
                VAR_27 = FUNC_11(10.0, VAR_27 / 20);

                for (VAR_10 = 0; VAR_10 < VAR_4->channels; VAR_10++) {
                    VAR_6->bands[VAR_9].volume[VAR_10] = VAR_27;
                }

                VAR_19 = FUNC_5(VAR_21, " ", &VAR_23);
                if (VAR_19) {
                    FUNC_12(VAR_19, "%lf", &VAR_6->bands[VAR_9].transfer_fn.gain_dB);
                }
            }
        }
    }
    VAR_6->nb_bands = VAR_11;

    for (VAR_9 = 0; VAR_15 > 0 && VAR_9 < VAR_6->nb_bands; VAR_9++) {
        VAR_6->bands[VAR_9].delay_buf = FUNC_9(VAR_4, VAR_15);
        if (!VAR_6->bands[VAR_9].delay_buf)
            return FUNC_0(VAR_2);
    }
    VAR_6->delay_buf_size = VAR_15;

    return 0;
}
