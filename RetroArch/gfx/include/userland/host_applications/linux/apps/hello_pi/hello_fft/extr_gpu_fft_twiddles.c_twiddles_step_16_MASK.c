
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 double* VAR_0 ;

__attribute__((used)) static float *FUNC_2(double VAR_1, float *VAR_2, double VAR_3) {
    int VAR_4;
    for (VAR_4=0; VAR_4<16; VAR_4++) {
        *VAR_2++ = FUNC_0(VAR_3*VAR_0[VAR_4]);
        *VAR_2++ = FUNC_1(VAR_3*VAR_0[VAR_4]);
    }
    return VAR_2;
}
