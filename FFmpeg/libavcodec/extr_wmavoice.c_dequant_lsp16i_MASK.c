
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetBitContext ;



 int FUNC_0 (double*,int,int*,int const*,int,int ,double const*,double const*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(GetBitContext *VAR_3, double *VAR_4)
{
    static const uint16_t VAR_5[5] = { 256, 64, 128, 64, 128 };
    static const double VAR_6[5] = {
        3.3439586280e-3, 6.9908173703e-4,
        3.3216608306e-3, 1.0334960326e-3,
        3.1899104283e-3
    };
    static const double VAR_7[5] = {
        128 * -1.27576e-1, 128 * -2.4292e-2,
        128 * -1.28094e-1, 128 * -3.2128e-2,
        128 * -1.29816e-1
    };
    uint16_t VAR_8[5];

    VAR_8[0] = FUNC_1(VAR_3, 8);
    VAR_8[1] = FUNC_1(VAR_3, 6);
    VAR_8[2] = FUNC_1(VAR_3, 7);
    VAR_8[3] = FUNC_1(VAR_3, 6);
    VAR_8[4] = FUNC_1(VAR_3, 7);

    FUNC_0( VAR_4, 5, VAR_8, VAR_5, 2,
                 VAR_0, VAR_6, VAR_7);
    FUNC_0(&VAR_4[5], 5, &VAR_8[2], &VAR_5[2], 2,
                 VAR_1, &VAR_6[2], &VAR_7[2]);
    FUNC_0(&VAR_4[10], 6, &VAR_8[4], &VAR_5[4], 1,
                 VAR_2, &VAR_6[4], &VAR_7[4]);
}
