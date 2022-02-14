
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double sqr; double coeff; double aa; double aa1; int mode; double mix; int idc; int dc; } ;
typedef TYPE_1__ ACrusherContext ;


 double FUNC_0 (double) ;
 double FUNC_1 (double,int ,int ) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double,double,double const,double const) ;
 double const FUNC_5 (double) ;
 double FUNC_6 (double,int ,int ) ;
 double FUNC_7 (double) ;

__attribute__((used)) static double FUNC_8(ACrusherContext *VAR_0, double VAR_1)
{
    const double VAR_2 = VAR_0->sqr;
    const double VAR_3 = VAR_0->coeff;
    const double VAR_4 = VAR_0->aa;
    const double VAR_5 = VAR_0->aa1;
    double VAR_6, VAR_7;


    VAR_1 = FUNC_1(VAR_1, VAR_0->dc, VAR_0->idc);
    switch (VAR_0->mode) {
    case 0:
    default:

        VAR_6 = VAR_1 * VAR_3;
        VAR_7 = FUNC_7(VAR_6);
        if (VAR_7 - VAR_5 <= VAR_6 && VAR_6 <= VAR_7 + VAR_5) {
            VAR_7 /= VAR_3;
        } else if (VAR_6 > VAR_7 + VAR_5) {
            VAR_7 = VAR_7 / VAR_3 + ((VAR_7 + 1) / VAR_3 - VAR_7 / VAR_3) *
                FUNC_4(VAR_6, VAR_7, VAR_5, VAR_4);
        } else {
            VAR_7 = VAR_7 / VAR_3 - (VAR_7 / VAR_3 - (VAR_7 - 1) / VAR_3) *
                FUNC_4(VAR_6, VAR_7, VAR_5, VAR_4);
        }
        break;
    case 1:

        VAR_6 = VAR_2 * FUNC_5(FUNC_3(VAR_1)) + VAR_2 * VAR_2;
        VAR_7 = FUNC_7(VAR_6);
        if(!VAR_1) {
            VAR_7 = 0;
        } else if (VAR_7 - VAR_5 <= VAR_6 && VAR_6 <= VAR_7 + VAR_5) {
            VAR_7 = VAR_1 / FUNC_3(VAR_1) * FUNC_2(VAR_7 / VAR_2 - VAR_2);
        } else if (VAR_6 > VAR_7 + VAR_5) {
            double VAR_8 = FUNC_2(VAR_7 / VAR_2 - VAR_2);
            VAR_7 = FUNC_0(VAR_1) * (VAR_8 + (FUNC_2((VAR_7 + 1) / VAR_2 - VAR_2) - VAR_8) *
                FUNC_4(VAR_6, VAR_7, VAR_5, VAR_4));
        } else {
            double VAR_9 = FUNC_2(VAR_7 / VAR_2 - VAR_2);
            VAR_7 = VAR_1 / FUNC_3(VAR_1) * (VAR_9 - (VAR_9 - FUNC_2((VAR_7 - 1) / VAR_2 - VAR_2)) *
                FUNC_4(VAR_6, VAR_7, VAR_5, VAR_4));
        }
        break;
    }


    VAR_7 += (VAR_1 - VAR_7) * VAR_0->mix;


    VAR_7 = FUNC_6(VAR_7, VAR_0->dc, VAR_0->idc);

    return VAR_7;
}
