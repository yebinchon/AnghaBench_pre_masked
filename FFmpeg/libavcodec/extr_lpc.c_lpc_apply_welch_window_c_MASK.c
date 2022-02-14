
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int32_t ;



__attribute__((used)) static void FUNC_0(const int32_t *VAR_0, int VAR_1,
                                     double *VAR_2)
{
    int VAR_3, VAR_4;
    double VAR_5;
    double VAR_6;

    VAR_4 = (VAR_1 >> 1);
    VAR_6 = 2.0 / (VAR_1 - 1.0);

    if (VAR_1 & 1) {
        for(VAR_3=0; VAR_3<VAR_4; VAR_3++) {
            VAR_5 = VAR_6 - VAR_3 - 1.0;
            VAR_5 = 1.0 - (VAR_5 * VAR_5);
            VAR_2[VAR_3] = VAR_0[VAR_3] * VAR_5;
            VAR_2[VAR_1-1-VAR_3] = VAR_0[VAR_1-1-VAR_3] * VAR_5;
        }
        return;
    }

    VAR_2+=VAR_4;
      VAR_0+=VAR_4;
    for(VAR_3=0; VAR_3<VAR_4; VAR_3++) {
        VAR_5 = VAR_6 - VAR_4 + VAR_3;
        VAR_5 = 1.0 - (VAR_5 * VAR_5);
        VAR_2[-VAR_3-1] = VAR_0[-VAR_3-1] * VAR_5;
        VAR_2[+VAR_3 ] = VAR_0[+VAR_3 ] * VAR_5;
    }
}
