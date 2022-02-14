
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float out_pad; } ;
typedef TYPE_1__ V360Context ;


 float const VAR_0 ;
 float FUNC_0 (float const) ;
 float FUNC_1 (float const,float const) ;
 int FUNC_2 (float*) ;
 float FUNC_3 (float const) ;

__attribute__((used)) static void FUNC_4(const V360Context *VAR_1,
                            int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                            float *VAR_6)
{
    const float VAR_7 = 1.f + VAR_1->out_pad;

    const float VAR_8 = VAR_4 / 2.f;
    const float VAR_9 = VAR_5;

    const int VAR_10 = VAR_2 >= VAR_8 ? VAR_2 - VAR_8 : VAR_2;
    const float VAR_11 = VAR_2 >= VAR_8 ? -1.f : 1.f;

    const float VAR_12 = ((2.f * VAR_10) / VAR_8 - 1.f) * VAR_7;
    const float VAR_13 = ((2.f * VAR_3) / VAR_9 - 1.f) * VAR_7;

    const float VAR_14 = FUNC_1(VAR_12, VAR_13);
    const float VAR_15 = VAR_14 > 0.f ? VAR_14 : 1.f;
    const float VAR_16 = VAR_11 * VAR_0 * (1.f - VAR_14);

    const float VAR_17 = FUNC_3(VAR_16);
    const float VAR_18 = FUNC_0(VAR_16);

    VAR_6[0] = VAR_18 * VAR_11 * -VAR_12 / VAR_15;
    VAR_6[1] = VAR_18 * -VAR_13 / VAR_15;
    VAR_6[2] = VAR_17;

    FUNC_2(VAR_6);
}
