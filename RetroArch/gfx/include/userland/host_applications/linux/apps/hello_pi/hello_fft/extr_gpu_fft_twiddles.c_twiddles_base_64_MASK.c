
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;
 int FUNC_1 (double) ;
 float* FUNC_2 (double,float*,int ) ;

__attribute__((used)) static float *FUNC_3(double VAR_0, float *VAR_1) {
    int VAR_2;
    for (VAR_2=0; VAR_2<32; VAR_2++) {
        *VAR_1++ = FUNC_0(VAR_0/64*VAR_2);
        *VAR_1++ = FUNC_1(VAR_0/64*VAR_2);
    }
    return FUNC_2(VAR_0, VAR_1, 0);
}
