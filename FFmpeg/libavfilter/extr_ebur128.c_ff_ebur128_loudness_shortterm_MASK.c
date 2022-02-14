
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFEBUR128State ;


 double VAR_0 ;
 int FUNC_0 (int *,double*) ;
 double FUNC_1 (double) ;

int FUNC_2(FFEBUR128State * VAR_1, double *VAR_2)
{
    double VAR_3;
    int VAR_4 = FUNC_0(VAR_1, &VAR_3);
    if (VAR_4) {
        return VAR_4;
    } else if (VAR_3 <= 0.0) {
        *VAR_2 = -VAR_0;
        return 0;
    }
    *VAR_2 = FUNC_1(VAR_3);
    return 0;
}
