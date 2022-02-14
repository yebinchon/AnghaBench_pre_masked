
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float const**) ;
 size_t FUNC_1 (int,int ,scalar_t__) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;

__attribute__((used)) static float FUNC_4(float VAR_0, float VAR_1)
{
    if (VAR_0 >= 60.f) {
        static const float VAR_2[][4] = {
            {-6.784957e-10, 1.02856e-05, 0.1087556, -0.8988365 + .001},
            {-6.897885e-10, 1.027433e-05, 0.10876, -0.8994658 + .002},
            {-1.000683e-09, 1.030092e-05, 0.1087677, -0.9007898 + .003},
            {-3.654474e-10, 1.040631e-05, 0.1087085, -0.8977766 + .006},
            {8.106988e-09, 6.983091e-06, 0.1091387, -0.9172048 + .015},
            {9.519571e-09, 7.272678e-06, 0.1090068, -0.9140768 + .025},
            {-5.626821e-09, 1.342186e-05, 0.1083999, -0.9065452 + .05},
            {-9.965946e-08, 5.073548e-05, 0.1040967, -0.7672778 + .085},
            {1.604808e-07, -5.856462e-05, 0.1185998, -1.34824 + .1},
            {-1.511964e-07, 6.363034e-05, 0.1064627, -0.9876665 + .18},
        };
        float VAR_3 = FUNC_2(VAR_1 / .0005f) / FUNC_2(2.f);
        float const *VAR_4 = VAR_2[FUNC_1((int)VAR_3, 0, FUNC_0(VAR_2) - 1)];
        float const *VAR_5 = VAR_2[FUNC_1(1 + (int)VAR_3, 0, FUNC_0(VAR_2) - 1)];
        float VAR_6 = ((VAR_4[0] * VAR_0 + VAR_4[1]) * VAR_0 + VAR_4[2]) * VAR_0 + VAR_4[3];
        float VAR_7 = ((VAR_5[0] * VAR_0 + VAR_5[1]) * VAR_0 + VAR_5[2]) * VAR_0 + VAR_5[3];

        return VAR_6 + (VAR_7 - VAR_6) * (VAR_3 - (int)VAR_3);
    }
    if (VAR_0 > 50.f)
        return .1102f * (VAR_0 - 8.7f);
    if (VAR_0 > 20.96f)
        return .58417f * FUNC_3(VAR_0 - 20.96f, .4f) + .07886f * (VAR_0 - 20.96f);
    return 0;
}
