
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(double VAR_0,
          double VAR_1,
          double VAR_2,
          double * const VAR_3,
          double * const VAR_4,
          double * const VAR_5,
          const double VAR_6[3][3])
{
    double VAR_7;

    *VAR_3 = VAR_6[0][0] * VAR_0 + VAR_6[0][1] * VAR_1 + VAR_6[0][2] * VAR_2;
    *VAR_4 = VAR_6[1][0] * VAR_0 + VAR_6[1][1] * VAR_1 + VAR_6[1][2] * VAR_2;
    *VAR_5 = VAR_6[2][0] * VAR_0 + VAR_6[2][1] * VAR_1 + VAR_6[2][2] * VAR_2;

    VAR_7 = *VAR_3 + *VAR_4 + *VAR_5;

    *VAR_3 = *VAR_3 / VAR_7;
    *VAR_4 = *VAR_4 / VAR_7;
}
