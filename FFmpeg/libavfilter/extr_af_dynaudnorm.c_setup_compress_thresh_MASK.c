
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int FUNC_0 (int) ;
 double FUNC_1 (double,double) ;
 scalar_t__ FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(double VAR_1)
{
    if ((VAR_1 > VAR_0) && (VAR_1 < (1.0 - VAR_0))) {
        double VAR_2 = VAR_1;
        double VAR_3 = 1.0;

        while (VAR_3 > VAR_0) {
            while ((FUNC_2((VAR_2 + VAR_3) * (FUNC_0(1) << 63)) >
                    FUNC_2(VAR_2 * (FUNC_0(1) << 63))) &&
                   (FUNC_1(VAR_2 + VAR_3, 1.0) <= VAR_1)) {
                VAR_2 += VAR_3;
            }

            VAR_3 /= 2.0;
        }

        return VAR_2;
    } else {
        return VAR_1;
    }
}
