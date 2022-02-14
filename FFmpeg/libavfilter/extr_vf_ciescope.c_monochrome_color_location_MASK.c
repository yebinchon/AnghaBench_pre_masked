
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 double** VAR_3 ;
 int FUNC_1 (double const,double const,double*,double*) ;
 int FUNC_2 (double const,double const,double*,double*) ;

__attribute__((used)) static void
FUNC_3(double VAR_4, int VAR_5, int VAR_6,
                          int VAR_7, int *VAR_8, int *VAR_9)
{
    const int VAR_10 = VAR_4 - 360;
    const double VAR_11 = VAR_3[VAR_10][0];
    const double VAR_12 = VAR_3[VAR_10][1];
    const double VAR_13 = VAR_3[VAR_10][2];
    const double VAR_14 = VAR_11 / (VAR_11 + VAR_12 + VAR_13);
    const double VAR_15 = VAR_12 / (VAR_11 + VAR_12 + VAR_13);

    if (VAR_7 == VAR_0) {
        double VAR_16, VAR_17;

        FUNC_1(VAR_14, VAR_15, &VAR_16, &VAR_17);
        *VAR_8 = VAR_16 * (VAR_5 - 1);
        *VAR_9 = (VAR_6 - 1) - VAR_17 * (VAR_6 - 1);
    } else if (VAR_7 == VAR_1) {
        double VAR_18, VAR_19;

        FUNC_2(VAR_14, VAR_15, &VAR_18, &VAR_19);
        *VAR_8 = VAR_18 * (VAR_5 - 1);
        *VAR_9 = (VAR_6 - 1) - VAR_19 * (VAR_6 - 1);
    } else if (VAR_7 == VAR_2) {
        *VAR_8 = VAR_14 * (VAR_5 - 1);
        *VAR_9 = (VAR_6 - 1) - VAR_15 * (VAR_6 - 1);
    } else {
        FUNC_0(0);
    }
}
