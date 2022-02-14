
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int ) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (double) ;
 double FUNC_3 (double,double,double,double,double,double,int) ;
 double FUNC_4 (double) ;

__attribute__((used)) static double FUNC_5(double VAR_0, double VAR_1, double VAR_2,
                          double VAR_3, double VAR_4, double VAR_5,
                          double VAR_6, int VAR_7)
{
    double VAR_8 = FUNC_4(VAR_0);
    double VAR_9 = VAR_1;
    double VAR_10 = 0.;
    double VAR_11 = 0.;

    if (FUNC_1(VAR_1))
        VAR_9 = 1000.;
    VAR_10 = (VAR_8 - VAR_2) * VAR_9 + VAR_2;
    VAR_11 = VAR_9;

    if (VAR_7) {
        if (VAR_3 > 1. && VAR_8 < VAR_5)
            VAR_10 = FUNC_3(VAR_8, VAR_5, VAR_4, ((VAR_5 - VAR_2) * VAR_9 + VAR_2), VAR_4, VAR_11, 1.);
    } else {
        if (VAR_3 > 1. && VAR_8 > VAR_4)
            VAR_10 = FUNC_3(VAR_8, VAR_4, VAR_5, ((VAR_4 - VAR_2) * VAR_9 + VAR_2), VAR_5, VAR_11, 1.);
    }
    return FUNC_0(VAR_6, FUNC_2(VAR_10 - VAR_8));
}
