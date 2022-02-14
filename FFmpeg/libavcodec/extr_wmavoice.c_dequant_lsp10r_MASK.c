
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetBitContext ;



 int FUNC_0 (int *,double*) ;
 int FUNC_1 (double*,int,int*,int const*,int,int ,double const*,double const*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 float*** VAR_1 ;
 float*** VAR_2 ;

__attribute__((used)) static void FUNC_3(GetBitContext *VAR_3,
                           double *VAR_4, const double *VAR_5,
                           double *VAR_6, double *VAR_7, int VAR_8)
{
    static const uint16_t VAR_9[3] = { 128, 64, 64 };
    static const double VAR_10[3] = {
        2.5807601174e-3, 1.2354460219e-3, 1.1763821673e-3
    };
    static const double VAR_11[3] = {
        128 * -1.07448e-1, 128 * -5.2706e-2, 128 * -5.1634e-2
    };
    const float (*VAR_12)[2][10] = VAR_8 ?
        VAR_2 : VAR_1;
    uint16_t VAR_13, VAR_14[3];
    int VAR_15;

    FUNC_0(VAR_3, VAR_4);

    VAR_13 = FUNC_2(VAR_3, 5);
    VAR_14[0] = FUNC_2(VAR_3, 7);
    VAR_14[1] = FUNC_2(VAR_3, 6);
    VAR_14[2] = FUNC_2(VAR_3, 6);

    for (VAR_15 = 0; VAR_15 < 10; VAR_15++) {
        double VAR_16 = VAR_5[VAR_15] - VAR_4[VAR_15];
        VAR_6[VAR_15] = VAR_12[VAR_13][0][VAR_15] * VAR_16 + VAR_4[VAR_15];
        VAR_6[10 + VAR_15] = VAR_12[VAR_13][1][VAR_15] * VAR_16 + VAR_4[VAR_15];
    }

    FUNC_1(VAR_7, 20, VAR_14, VAR_9, 3, VAR_0,
                 VAR_10, VAR_11);
}
