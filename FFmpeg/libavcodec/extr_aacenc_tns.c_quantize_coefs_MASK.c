
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double,float const*,int) ;
 float** VAR_0 ;

__attribute__((used)) static inline void FUNC_1(double *VAR_1, int *VAR_2, float *VAR_3, int VAR_4,
                                  int VAR_5)
{
    int VAR_6;
    const float *VAR_7 = VAR_0[VAR_5];
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_2[VAR_6] = FUNC_0(VAR_1[VAR_6], VAR_7, VAR_5 ? 16 : 8);
        VAR_3[VAR_6] = VAR_7[VAR_2[VAR_6]];
    }
}
