
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;

__attribute__((used)) static void FUNC_1(const float *VAR_0, int VAR_1,
                             float *VAR_2)
{
    float VAR_3 = 0.0;

    while (VAR_1--) {
        if (VAR_0[0] > VAR_3)
            VAR_3 = VAR_0[0];
        else if (-VAR_0[0] > VAR_3)
            VAR_3 = -VAR_0[0];

        if (VAR_0[1] > VAR_3)
            VAR_3 = VAR_0[1];
        else if (-VAR_0[1] > VAR_3)
            VAR_3 = -VAR_0[1];

        VAR_0 += 2;
    }

    *VAR_2 = FUNC_0(VAR_3, *VAR_2);
}
