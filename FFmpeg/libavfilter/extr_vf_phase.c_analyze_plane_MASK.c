
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum PhaseMode { ____Placeholder_PhaseMode } PhaseMode ;
struct TYPE_4__ {int* linesize; int height; int width; int ** data; scalar_t__ top_field_first; scalar_t__ interlaced_frame; } ;
typedef TYPE_1__ AVFrame ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int const*,int const,int const*,int const) ;

 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,char*,char,double,double,double) ;

__attribute__((used)) static enum PhaseMode FUNC_3(void *VAR_6, enum PhaseMode VAR_7, AVFrame *VAR_8, AVFrame *VAR_9)
{
    double VAR_10, VAR_11, VAR_12;

    if (VAR_7 == VAR_0) {
        VAR_7 = VAR_9->interlaced_frame ? VAR_9->top_field_first ?
               VAR_5 : VAR_3 : VAR_4;
    } else if (VAR_7 == VAR_1) {
        VAR_7 = VAR_9->interlaced_frame ? VAR_9->top_field_first ?
               128 : 130 : 129;
    }

    if (VAR_7 <= VAR_3) {
        VAR_10 = VAR_12 = VAR_11 = 65536.0;
    } else {
        const int VAR_13 = VAR_9->linesize[0];
        const int VAR_14 = VAR_8->linesize[0];
        const uint8_t *VAR_15 = VAR_9->data[0];
        const uint8_t *VAR_16 = VAR_8->data[0];
        const int VAR_17 = VAR_9->height;
        const int VAR_18 = VAR_9->width;
        int VAR_19, VAR_20, VAR_21;
        double VAR_22;

        int VAR_23 = 0, VAR_24;
        const uint8_t *VAR_25, *VAR_26 = VAR_15 + (VAR_17 - 2) * VAR_13;

        VAR_10 = VAR_12 = VAR_11 = 0.0;

        VAR_15 += VAR_13;
        VAR_16 += VAR_14;
        while (VAR_15 < VAR_26) {
            VAR_21 = VAR_20 = VAR_19 = 0;

            switch (VAR_7) {
            case 128:
                if (VAR_23) {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_20 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                    }
                } else {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_20 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                }
                break;
            case 130:
                if (VAR_23) {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_19 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                } else {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_19 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                    }
                }
                break;
            case 131:
                if (VAR_23) {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_20 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                        VAR_19 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                } else {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_19 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                        VAR_20 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                }
                break;
            case 129:
                if (VAR_23) {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_20 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                        VAR_19 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                } else {
                    for (VAR_25 = VAR_15 + VAR_18; VAR_15 < VAR_25; VAR_15++, VAR_16++) {
                        VAR_21 += FUNC_0(VAR_15, VAR_13, VAR_15, VAR_13);
                        VAR_19 += FUNC_0(VAR_15, VAR_13, VAR_16, VAR_14);
                        VAR_20 += FUNC_0(VAR_16, VAR_14, VAR_15, VAR_13);
                    }
                }
                break;
            default:
                FUNC_1(0);
            }

            VAR_12 += (double)VAR_21;
            VAR_11 += (double)VAR_20;
            VAR_10 += (double)VAR_19;
            VAR_15 += VAR_13 - VAR_18;
            VAR_16 += VAR_14 - VAR_18;
            VAR_23 ^= 1;
        }

        VAR_22 = 1.0 / (VAR_18 * (VAR_17 - 3)) / 25.0;
        VAR_12 *= VAR_22;
        VAR_11 *= VAR_22;
        VAR_10 *= VAR_22;

        if (VAR_7 == 128) {
            VAR_10 = 65536.0;
        } else if (VAR_7 == 130) {
            VAR_11 = 65536.0;
        } else if (VAR_7 == 131) {
            VAR_12 = 65536.0;
        }

        if (VAR_10 < VAR_12 && VAR_10 < VAR_11) {
            VAR_7 = VAR_3;
        } else if (VAR_11 < VAR_12 && VAR_11 < VAR_10) {
            VAR_7 = VAR_5;
        } else {
            VAR_7 = VAR_4;
        }
    }

    FUNC_2(VAR_6, VAR_2, "mode=%c tdiff=%f bdiff=%f pdiff=%f\n",
           VAR_7 == VAR_3 ? 'b' : VAR_7 == VAR_5 ? 't' : 'p',
           VAR_11, VAR_10, VAR_12);
    return VAR_7;
}
