
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 float* FUNC_2 (double,float*,int) ;

__attribute__((used)) static float *FUNC_3(double VAR_0, float *VAR_1, double VAR_2) {
    int VAR_3;
    for (VAR_3=0; VAR_3<16; VAR_3++) {
        *VAR_1++ = FUNC_0(VAR_2);
        *VAR_1++ = FUNC_1(VAR_2);
    }
    return FUNC_2(VAR_0, VAR_1, 2*VAR_2);
}
