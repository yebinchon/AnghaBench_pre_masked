
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double int64_t ;




 int FUNC_0 (int) ;
 double VAR_0 ;





 double FUNC_1 (int) ;
 double FUNC_2 (double) ;
 double FUNC_3 (int,int ,double) ;
 int FUNC_4 (int) ;
 int FUNC_5 (double) ;
 double FUNC_6 (double const) ;
 double FUNC_7 (double) ;
 double FUNC_8 (double) ;
 double FUNC_9 (double) ;

__attribute__((used)) static double FUNC_10(int VAR_1, int64_t VAR_2, int64_t VAR_3)
{

    double VAR_4;

    VAR_4 = FUNC_3(1.0 * VAR_2 / VAR_3, 0, 1.0);

    switch (VAR_1) {
    case 130:
        VAR_4 = FUNC_8(VAR_4 * VAR_0 / 2.0);
        break;
    case 135:

        VAR_4 = 0.6366197723675814 * FUNC_2(VAR_4);
        break;
    case 140:
        VAR_4 = 1.0 - FUNC_5(VAR_0 / 4.0 * (((2.0*VAR_4 - 1)*(2.0*VAR_4 - 1)*(2.0*VAR_4 - 1)) + 1));
        break;
    case 138:
        VAR_4 = (1.0 - FUNC_5(VAR_4 * VAR_0)) / 2.0;
        break;
    case 137:

        VAR_4 = 0.3183098861837907 * FUNC_1(1 - 2 * VAR_4);
        break;
    case 139:

        VAR_4 = FUNC_6(-11.512925464970227 * (1 - VAR_4));
        break;
    case 134:
        VAR_4 = FUNC_3(1 + 0.2 * FUNC_7(VAR_4), 0, 1.0);
        break;
    case 131:
        VAR_4 = 1 - FUNC_9(1 - VAR_4);
        break;
    case 136:
        VAR_4 = (1 - (1 - VAR_4) * (1 - VAR_4));
        break;
    case 129:
        VAR_4 *= VAR_4;
        break;
    case 143:
        VAR_4 = ((VAR_4)*(VAR_4)*(VAR_4));
        break;
    case 128:
        VAR_4 = FUNC_9(VAR_4);
        break;
    case 144:
        VAR_4 = FUNC_4(VAR_4);
        break;
    case 142:
        VAR_4 = VAR_4 <= 0.5 ? FUNC_4(2 * VAR_4) / 2: 1 - FUNC_4(2 * (1 - VAR_4)) / 2;
        break;
    case 141:
        VAR_4 = VAR_4 <= 0.5 ? ((2 * VAR_4)*(2 * VAR_4)*(2 * VAR_4)) / 2: 1 - ((2 * (1 - VAR_4))*(2 * (1 - VAR_4))*(2 * (1 - VAR_4))) / 2;
        break;
    case 133: {
                   const double VAR_5 = 1. / (1. - 0.787) - 1;
                   double VAR_6 = 1. / (1.0 + FUNC_6(0 -((VAR_4-0.5) * VAR_5 * 2.0)));
                   double VAR_7 = 1. / (1.0 + FUNC_6(VAR_5));
                   double VAR_8 = 1. / (1.0 + FUNC_6(0-VAR_5));
                   VAR_4 = (VAR_6 - VAR_7) / (VAR_8 - VAR_7);
               }
        break;
    case 132:
        VAR_4 = 1.0;
        break;
    }

    return VAR_4;
}
