
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 double* VAR_0 ;
 double* VAR_1 ;
 int FUNC_1 (double) ;

__attribute__((used)) static float *FUNC_2(double VAR_2, float *VAR_3, double VAR_4) {
    int VAR_5;
    for (VAR_5=0; VAR_5<16; VAR_5++) {
        *VAR_3++ = FUNC_0(VAR_2/16*VAR_0[VAR_5]*VAR_1[VAR_5] + VAR_4*VAR_0[VAR_5]);
        *VAR_3++ = FUNC_1(VAR_2/16*VAR_0[VAR_5]*VAR_1[VAR_5] + VAR_4*VAR_0[VAR_5]);
    }
    return VAR_3;
}
