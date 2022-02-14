
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* a; float* b; } ;
typedef TYPE_1__ FFBesselFilter ;


 float VAR_0 ;
 float FUNC_0 (float,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static inline int FUNC_3(FFBesselFilter *VAR_1, float VAR_2, float VAR_3, float VAR_4,
                                int VAR_5)
{
    int VAR_6;
    float VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if (!VAR_5) {
        VAR_7 = (1.0f/FUNC_1(FUNC_1(FUNC_0(2.0f, 1.0f/VAR_2) - 3.0f/4.0f) - 0.5f))/FUNC_1(3.0f);
        VAR_8 = VAR_7*VAR_3/VAR_4;
        VAR_6 = (VAR_8 <= 0.0f || VAR_8 >= 1.0f/4.0f);
    } else {
        VAR_7 = FUNC_1(3.0f)*FUNC_1(FUNC_1(FUNC_0(2.0f, 1.0f/VAR_2) - 3.0f/4.0f) - 0.5f);
        VAR_8 = 0.5f - VAR_7*VAR_3/VAR_4;
        VAR_6 = (VAR_8 <= 3.0f/8.0f || VAR_8 >= 1.0f/2.0f);
    }

    VAR_9 = FUNC_2(VAR_0*VAR_8);
    VAR_10 = 3.0f * VAR_9;
    VAR_11 = 3.0f * VAR_9;

    VAR_1->a[0] = VAR_11/(1.0f + VAR_10 + VAR_11);
    VAR_1->a[1] = 2.0f * VAR_1->a[0];
    VAR_1->a[2] = VAR_1->a[0];
    VAR_1->b[0] = 2.0f * VAR_1->a[0] * (1.0f/VAR_11 - 1.0f);
    VAR_1->b[1] = 1.0f - (VAR_1->a[0] + VAR_1->a[1] + VAR_1->a[2] + VAR_1->b[0]);

    if (VAR_5) {
        VAR_1->a[1] *= -1;
        VAR_1->b[0] *= -1;
    }

    return VAR_6;
}
