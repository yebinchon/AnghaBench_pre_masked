
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(double VAR_0)
{
    const double VAR_1[4] = { 2.50662823884,
                         -18.61500062529,
                          41.39119773534,
                         -25.44106049637};

    const double VAR_2[4] = {-8.47351093090,
                          23.08336743743,
                         -21.06224101826,
                           3.13082909833};

    const double VAR_3[9] = {0.3374754822726147,
                          0.9761690190917186,
                          0.1607979714918209,
                          0.0276438810333863,
                          0.0038405729373609,
                          0.0003951896511919,
                          0.0000321767881768,
                          0.0000002888167364,
                          0.0000003960315187};

    double VAR_4;
    double VAR_5 = VAR_0 - 0.5;


     if (FUNC_0(VAR_5) < 0.42) {

        double VAR_6 = VAR_5 * VAR_5;
        VAR_4 = VAR_5 * (((VAR_1[3]*VAR_6+VAR_1[2])*VAR_6+VAR_1[1])*VAR_6+VAR_1[0]) /
                        ((((VAR_2[3]*VAR_6+VAR_2[2])*VAR_6+VAR_2[1])*VAR_6+VAR_2[0])*VAR_6+1.0);
    }
    else {
        VAR_4 = VAR_0;
        if (VAR_5 > 0.0)
            VAR_4 = 1.0 - VAR_0;
        VAR_4 = FUNC_1(-FUNC_1(VAR_4));
        VAR_4 = VAR_3[0] + VAR_4*(VAR_3[1]+VAR_4*(VAR_3[2]+VAR_4*(VAR_3[3]+VAR_4*(VAR_3[4]+VAR_4*(VAR_3[5]+VAR_4*(VAR_3[6]+
                                                        VAR_4*(VAR_3[7]+VAR_4*VAR_3[8])))))));
        if (VAR_5 < 0.0)
            VAR_4 = -VAR_4;
    }

    return VAR_4;
}
