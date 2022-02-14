
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline double FUNC_0(double VAR_0, double VAR_1, double VAR_2,
                                    double VAR_3, double VAR_4,
                                    double VAR_5, double VAR_6)
{
    double VAR_7 = VAR_2 - VAR_1;
    double VAR_8 = (VAR_0 - VAR_1) / VAR_7;
    double VAR_9, VAR_10;
    double VAR_11, VAR_12, VAR_13, VAR_14;

    VAR_5 *= VAR_7;
    VAR_6 *= VAR_7;

    VAR_9 = VAR_8*VAR_8;
    VAR_10 = VAR_9*VAR_8;
    VAR_11 = VAR_3;
    VAR_12 = VAR_5;

    VAR_13 = -3 * VAR_3 - 2 * VAR_5 + 3 * VAR_4 - VAR_6;
    VAR_14 = 2 * VAR_3 + VAR_5 - 2 * VAR_4 + VAR_6;

    return VAR_14 * VAR_10 + VAR_13 * VAR_9 + VAR_12 * VAR_8 + VAR_11;
}
