
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int sample_noise_start; int sample_noise_end; int output_mode; void* noise_floor; void* noise_reduction; } ;
typedef TYPE_1__ AudioFFTDeNoiseContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (float,int,int) ;
 int FUNC_1 (char const*,char*,float*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_3, const char *VAR_4, const char *VAR_5,
                           char *VAR_6, int VAR_7, int VAR_8)
{
    AudioFFTDeNoiseContext *VAR_9 = VAR_3->priv;
    int VAR_10 = 0;

    if (!FUNC_3(VAR_4, "sample_noise") ||
        !FUNC_3(VAR_4, "sn")) {
        if (!FUNC_3(VAR_5, "start")) {
            VAR_9->sample_noise_start = 1;
            VAR_9->sample_noise_end = 0;
        } else if (!FUNC_3(VAR_5, "end") ||
                   !FUNC_3(VAR_5, "stop")) {
            VAR_9->sample_noise_start = 0;
            VAR_9->sample_noise_end = 1;
        }
    } else if (!FUNC_3(VAR_4, "nr") ||
               !FUNC_3(VAR_4, "noise_reduction")) {
        float VAR_11;

        if (FUNC_1(VAR_5, "%f", &VAR_11) == 1) {
            VAR_9->noise_reduction = FUNC_0(VAR_11, 0.01, 97);
            VAR_10 = 1;
        }
    } else if (!FUNC_3(VAR_4, "nf") ||
               !FUNC_3(VAR_4, "noise_floor")) {
        float VAR_12;

        if (FUNC_1(VAR_5, "%f", &VAR_12) == 1) {
            VAR_9->noise_floor = FUNC_0(VAR_12, -80, -20);
            VAR_10 = 1;
        }
    } else if (!FUNC_3(VAR_4, "output_mode") ||
               !FUNC_3(VAR_4, "om")) {
        if (!FUNC_3(VAR_5, "i")) {
            VAR_9->output_mode = VAR_0;
        } else if (!FUNC_3(VAR_5, "o")) {
            VAR_9->output_mode = VAR_2;
        } else if (!FUNC_3(VAR_5, "n")) {
            VAR_9->output_mode = VAR_1;
        }
    }

    if (VAR_10)
        FUNC_2(VAR_9);

    return 0;
}
