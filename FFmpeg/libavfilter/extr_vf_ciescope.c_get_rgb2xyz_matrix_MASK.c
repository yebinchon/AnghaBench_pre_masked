
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ColorSystem {double xRed; double yRed; double xGreen; double yGreen; double xBlue; double yBlue; double xWhite; double yWhite; } ;


 int FUNC_0 (double**,double**) ;

__attribute__((used)) static void FUNC_1(struct ColorSystem VAR_0, double VAR_1[3][3])
{
    double VAR_2[3], VAR_3[4], VAR_4[4];
    int VAR_5;

    VAR_3[0] = VAR_0.xRed / VAR_0.yRed;
    VAR_3[1] = VAR_0.xGreen / VAR_0.yGreen;
    VAR_3[2] = VAR_0.xBlue / VAR_0.yBlue;
    VAR_3[3] = VAR_0.xWhite / VAR_0.yWhite;

    VAR_4[0] = (1 - VAR_0.xRed - VAR_0.yRed) / VAR_0.yRed;
    VAR_4[1] = (1 - VAR_0.xGreen - VAR_0.yGreen) / VAR_0.yGreen;
    VAR_4[2] = (1 - VAR_0.xBlue - VAR_0.yBlue) / VAR_0.yBlue;
    VAR_4[3] = (1 - VAR_0.xWhite - VAR_0.yWhite) / VAR_0.yWhite;

    for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        VAR_1[0][VAR_5] = VAR_3[VAR_5];
        VAR_1[1][VAR_5] = 1;
        VAR_1[2][VAR_5] = VAR_4[VAR_5];
    }

    FUNC_0(VAR_1, VAR_1);

    for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
        VAR_2[VAR_5] = VAR_1[VAR_5][0] * VAR_3[3] + VAR_1[VAR_5][1] * 1 + VAR_1[VAR_5][2] * VAR_4[3];

    for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        VAR_1[0][VAR_5] = VAR_2[VAR_5] * VAR_3[VAR_5];
        VAR_1[1][VAR_5] = VAR_2[VAR_5] * 1;
        VAR_1[2][VAR_5] = VAR_2[VAR_5] * VAR_4[VAR_5];
    }
}
