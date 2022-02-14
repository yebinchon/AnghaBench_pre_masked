
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* lspv; } ;
struct TYPE_5__ {scalar_t__ bitrate; scalar_t__ prev_bitrate; float* prev_lspf; float* predictor_lspf; int octave_count; int erasure_count; TYPE_1__ frame; } ;
typedef TYPE_2__ QCELPContext ;


 float FUNC_0 (float,float const) ;
 float FUNC_1 (float,float) ;
 scalar_t__ VAR_0 ;
 float const VAR_1 ;
 float const VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 double FUNC_3 (float) ;
 int FUNC_4 (float*,float*,float*,float,double,int) ;
 double*** VAR_5 ;

__attribute__((used)) static int FUNC_5(QCELPContext *VAR_6, float *VAR_7)
{
    int VAR_8;
    float VAR_9, VAR_10, VAR_11;
    const float *VAR_12;

    if (VAR_6->bitrate == VAR_3 || VAR_6->bitrate == VAR_0) {
        VAR_12 = VAR_6->prev_bitrate != VAR_3 &&
                     VAR_6->prev_bitrate != VAR_0 ? VAR_6->prev_lspf
                                              : VAR_6->predictor_lspf;

        if (VAR_6->bitrate == VAR_3) {
            VAR_6->octave_count++;

            for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
                VAR_6->predictor_lspf[VAR_8] =
                             VAR_7[VAR_8] = (VAR_6->frame.lspv[VAR_8] ? VAR_2
                                                         : -VAR_2) +
                                        VAR_12[VAR_8] * VAR_1 +
                                        (VAR_8 + 1) * ((1 - VAR_1) / 11);
            }
            VAR_10 = VAR_6->octave_count < 10 ? .875 : 0.1;
        } else {
            VAR_11 = VAR_1;

            FUNC_2(VAR_6->bitrate == VAR_0);

            if (VAR_6->erasure_count > 1)
                VAR_11 *= VAR_6->erasure_count < 4 ? 0.9 : 0.7;

            for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
                VAR_6->predictor_lspf[VAR_8] =
                             VAR_7[VAR_8] = (VAR_8 + 1) * (1 - VAR_11) / 11 +
                                       VAR_11 * VAR_12[VAR_8];
            }
            VAR_10 = 0.125;
        }


        VAR_7[0] = FUNC_0(VAR_7[0], VAR_2);
        for (VAR_8 = 1; VAR_8 < 10; VAR_8++)
            VAR_7[VAR_8] = FUNC_0(VAR_7[VAR_8], VAR_7[VAR_8 - 1] + VAR_2);

        VAR_7[9] = FUNC_1(VAR_7[9], 1.0 - VAR_2);
        for (VAR_8 = 9; VAR_8 > 0; VAR_8--)
            VAR_7[VAR_8 - 1] = FUNC_1(VAR_7[VAR_8 - 1], VAR_7[VAR_8] - VAR_2);


        FUNC_4(VAR_7, VAR_7, VAR_6->prev_lspf, VAR_10, 1.0 - VAR_10, 10);
    } else {
        VAR_6->octave_count = 0;

        VAR_9 = 0.0;
        for (VAR_8 = 0; VAR_8 < 5; VAR_8++) {
            VAR_7[2 * VAR_8 + 0] = VAR_9 += VAR_5[VAR_8][VAR_6->frame.lspv[VAR_8]][0] * 0.0001;
            VAR_7[2 * VAR_8 + 1] = VAR_9 += VAR_5[VAR_8][VAR_6->frame.lspv[VAR_8]][1] * 0.0001;
        }


        if (VAR_6->bitrate == VAR_4) {
            if (VAR_7[9] <= .70 || VAR_7[9] >= .97)
                return -1;
            for (VAR_8 = 3; VAR_8 < 10; VAR_8++)
                if (FUNC_3(VAR_7[VAR_8] - VAR_7[VAR_8 - 2]) < .08)
                    return -1;
        } else {
            if (VAR_7[9] <= .66 || VAR_7[9] >= .985)
                return -1;
            for (VAR_8 = 4; VAR_8 < 10; VAR_8++)
                if (FUNC_3(VAR_7[VAR_8] - VAR_7[VAR_8 - 4]) < .0931)
                    return -1;
        }
    }
    return 0;
}
