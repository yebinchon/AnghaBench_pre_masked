
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double const*) ;
 double FUNC_1 (double const*,int ,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static double FUNC_5(double VAR_0) {



    static const double VAR_1[] = {
        -2.2335582639474375249e+15,
        -5.5050369673018427753e+14,
        -3.2940087627407749166e+13,
        -8.4925101247114157499e+11,
        -1.1912746104985237192e+10,
        -1.0313066708737980747e+08,
        -5.9545626019847898221e+05,
        -2.4125195876041896775e+03,
        -7.0935347449210549190e+00,
        -1.5453977791786851041e-02,
        -2.5172644670688975051e-05,
        -3.0517226450451067446e-08,
        -2.6843448573468483278e-11,
        -1.5982226675653184646e-14,
        -5.2487866627945699800e-18,
    };
    static const double VAR_2[] = {
        -2.2335582639474375245e+15,
         7.8858692566751002988e+12,
        -1.2207067397808979846e+10,
         1.0377081058062166144e+07,
        -4.8527560179962773045e+03,
         1.0,
    };
    static const double VAR_3[] = {
        -2.2210262233306573296e-04,
         1.3067392038106924055e-02,
        -4.4700805721174453923e-01,
         5.5674518371240761397e+00,
        -2.3517945679239481621e+01,
         3.1611322818701131207e+01,
        -9.6090021968656180000e+00,
    };
    static const double VAR_4[] = {
        -5.5194330231005480228e-04,
         3.2547697594819615062e-02,
        -1.1151759188741312645e+00,
         1.3982595353892851542e+01,
        -6.0228002066743340583e+01,
         8.5539563258012929600e+01,
        -3.1446690275135491500e+01,
        1.0,
    };
    double VAR_5, VAR_6, VAR_7;
    if (VAR_0 == 0)
        return 1.0;
    VAR_0 = FUNC_3(VAR_0);
    if (VAR_0 <= 15) {
        VAR_5 = VAR_0 * VAR_0;
        return FUNC_1(VAR_1, FUNC_0(VAR_1), VAR_5) / FUNC_1(VAR_2, FUNC_0(VAR_2), VAR_5);
    }
    else {
        VAR_5 = 1 / VAR_0 - 1.0 / 15;
        VAR_6 = FUNC_1(VAR_3, FUNC_0(VAR_3), VAR_5) / FUNC_1(VAR_4, FUNC_0(VAR_4), VAR_5);
        VAR_7 = FUNC_2(VAR_0) / FUNC_4(VAR_0);
        return VAR_7 * VAR_6;
    }
}
