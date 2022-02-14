
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (float const) ;
 int FUNC_1 (double*,float*,int) ;

__attribute__((used)) static void FUNC_2(const float *VAR_2, float *VAR_3)
{
    double VAR_4[10];
    double VAR_5 = VAR_1;
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < 10; VAR_6++)
        VAR_4[VAR_6] = FUNC_0(VAR_0 * VAR_2[VAR_6]);

    FUNC_1(VAR_4, VAR_3, 5);

    for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
        VAR_3[VAR_6] *= VAR_5;
        VAR_5 *= VAR_1;
    }
}
