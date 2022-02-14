
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double,double,double,double,double,double,double) ;
 double FUNC_3 (double) ;

__attribute__((used)) static double FUNC_4(double VAR_0, double VAR_1, double VAR_2,
                          double VAR_3, double VAR_4, double VAR_5,
                          double VAR_6,
                          double VAR_7,
                          int VAR_8, int VAR_9)
{
    double VAR_10 = FUNC_3(VAR_0);
    double VAR_11 = 0.0;
    double VAR_12 = 0.0;

    if (VAR_8)
        VAR_10 *= 0.5;

    if (FUNC_0(VAR_1)) {
        VAR_11 = VAR_2;
        VAR_12 = 0.0;
    } else {
        VAR_11 = (VAR_10 - VAR_2) / VAR_1 + VAR_2;
        VAR_12 = 1.0 / VAR_1;
    }

    if (VAR_9) {
        if (VAR_3 > 1.0 && VAR_10 > VAR_4)
            VAR_11 = FUNC_2(VAR_10, VAR_5, VAR_4,
                                         VAR_5, VAR_6,
                                         1.0, VAR_12);
    } else {
        if (VAR_3 > 1.0 && VAR_10 < VAR_5)
            VAR_11 = FUNC_2(VAR_10, VAR_4, VAR_5,
                                         VAR_4, VAR_7,
                                         1.0, VAR_12);
    }

    return FUNC_1(VAR_11 - VAR_10);
}
