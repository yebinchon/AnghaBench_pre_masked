
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 float* FUNC_0 (double,float*,double) ;
 float* FUNC_1 (double,float*,int ) ;
 float* FUNC_2 (double,float*,double) ;

__attribute__((used)) static void FUNC_3(double VAR_1, float *VAR_2) {
    double VAR_3=128*1024;
    int VAR_4;

    VAR_2 = FUNC_1(VAR_1, VAR_2, 0);
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_1/VAR_3 * 16*16);
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_1/VAR_3 * 16);
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_1/VAR_3 * VAR_0);

    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
        VAR_2 = FUNC_0(VAR_1, VAR_2, VAR_1/VAR_3*VAR_4);
}
