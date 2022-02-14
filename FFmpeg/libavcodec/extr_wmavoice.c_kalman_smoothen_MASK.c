
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_pitch_val; int min_pitch_val; } ;
typedef TYPE_1__ WMAVoiceContext ;


 size_t FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ,int) ;
 float FUNC_2 (float const*,float const*,int) ;

__attribute__((used)) static int FUNC_3(WMAVoiceContext *VAR_0, int VAR_1,
                           const float *VAR_2, float *VAR_3, int VAR_4)
{
    int VAR_5;
    float VAR_6 = 0, VAR_7;
    const float *VAR_8 = &VAR_2[-FUNC_0(VAR_0->min_pitch_val, VAR_1 - 3)],
                *VAR_9 = &VAR_2[-FUNC_1(VAR_0->max_pitch_val, VAR_1 + 3)],
                *VAR_10 = ((void*)0);


    do {
        VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_4);
        if (VAR_7 > VAR_6) {
            VAR_6 = VAR_7;
            VAR_10 = VAR_8;
        }
    } while (--VAR_8 >= VAR_9);

    if (VAR_6 <= 0)
        return -1;
    VAR_7 = FUNC_2(VAR_10, VAR_10, VAR_4);
    if (VAR_7 <= 0)
        return -1;

    if (VAR_6 <= VAR_7) {
        VAR_7 = VAR_7 / (VAR_7 + 0.6 * VAR_6);
    } else
        VAR_7 = 0.625;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_3[VAR_5] = VAR_10[VAR_5] + VAR_7 * (VAR_2[VAR_5] - VAR_10[VAR_5]);

    return 0;
}
