
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetBitContext ;



 int FUNC_0 (double*,int,int*,int const*,int,int ,double const*,double const*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(GetBitContext *VAR_1, double *VAR_2)
{
    static const uint16_t VAR_3[4] = { 256, 64, 32, 32 };
    static const double VAR_4[4] = {
        5.2187144800e-3, 1.4626986422e-3,
        9.6179549166e-4, 1.1325736225e-3
    };
    static const double VAR_5[4] = {
        128 * -2.15522e-1, 128 * -6.1646e-2,
        128 * -3.3486e-2, 128 * -5.7408e-2
    };
    uint16_t VAR_6[4];

    VAR_6[0] = FUNC_1(VAR_1, 8);
    VAR_6[1] = FUNC_1(VAR_1, 6);
    VAR_6[2] = FUNC_1(VAR_1, 5);
    VAR_6[3] = FUNC_1(VAR_1, 5);

    FUNC_0(VAR_2, 10, VAR_6, VAR_3, 4, VAR_0,
                 VAR_4, VAR_5);
}
